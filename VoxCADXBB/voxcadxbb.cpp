#include "voxcadxbb.h"
#include "../QTUtils/QOpenGL.h"
#include <QMessageBox>
#include <QClipboard>
#include <QCoreApplication>

VoxCADXBB::VoxCADXBB(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	QCoreApplication::setOrganizationName("HillerLabs");
	QCoreApplication::setOrganizationDomain("www.VoxCAD.com");
	QCoreApplication::setApplicationName("VoxCAD");
	ui.setupUi(this);

	connect(&MainObj, SIGNAL(UpdateGLWindows()), this, SLOT(ReqGLUpdateAll()));
	connect(&MainObj, SIGNAL(GetCurGLSelected(int*)), this, SLOT(GetCurGLSelected(int*)));

	CurGLSelected = -1;
	GraphicsEnabled = true;

	ui.setupUi(this);
	SetupGLWindow();
	SetupPaletteWindow();
	SetupWorkspaceWindow();
	SetupRef3DWindow();


	tabifyDockWidget(WorkspaceDockWidget, PaletteDockWidget);




//Connect Menus:
	//File
	connect(ui.actionNew, SIGNAL(triggered()), this, SLOT(New()));
	connect(ui.actionOpen, SIGNAL(triggered()), this, SLOT(OpenVXC()));
	connect(ui.actionSave, SIGNAL(triggered()), this, SLOT(SaveZLib()));
	connect(ui.actionSave_As, SIGNAL(triggered()), this, SLOT(SaveAsZLib()));
	//..Import
	connect(ui.actionVXA_IN, SIGNAL(triggered()), this, SLOT(ImportVXA()));
	//..Export
	connect(ui.actionVXA_OUT, SIGNAL(triggered()), this, SLOT(SaveVXA()));
	#ifdef DMU_ENABLED
	connect(ui.actionDMU_Out, SIGNAL(triggered()), this, SLOT(ExportDMU()));
	#endif
	connect(ui.actionVoxelCoordinates, SIGNAL(triggered()), &MainObj, SLOT(ExportXYZ()));
	connect(ui.actionKV6, SIGNAL(triggered()), &MainObj, SLOT(ExportKV6()));
	


	//....Mesh
	connect(ui.actionSTL, SIGNAL(triggered()), this, SLOT(ExportSTL()));
	//....Alternate VXC
	connect(ui.actionASCII_VXC, SIGNAL(triggered()), &MainObj, SLOT(SaveAsAsciiReadable()));
	connect(ui.actionBASE64_VXC, SIGNAL(triggered()), &MainObj, SLOT(SaveAsBase64()));

	//Edit
	connect(ui.actionCopy, SIGNAL(triggered()), this, SLOT(Copy()));
	connect(ui.actionCut, SIGNAL(triggered()), this, SLOT(Cut()));
	connect(ui.actionPaste, SIGNAL(triggered()), this, SLOT(Paste()));
	connect(ui.actionWorkspace, SIGNAL(toggled(bool)), this, SLOT(ViewWorkspaceWindow(bool)));
	connect(ui.actionPalette, SIGNAL(toggled(bool)), this, SLOT(ViewPaletteWindow(bool)));

	//View
	connect(ui.actionShow_Triad, SIGNAL(triggered(bool)), GLWindow, SLOT(SetAxesVisible(bool)));
	connect(ui.actionCenter_View, SIGNAL(triggered()), GLWindow, SLOT(ZoomExtents()));
	connect(ui.actionLarge_Mode, SIGNAL(triggered(bool)), GLWindow, SLOT(EnterFastMode(bool)));
	connect(ui.actionView_Tiled, SIGNAL(triggered(bool)), this, SLOT(ViewTiled(bool)));
	connect(ui.actionGraphics_Enabled, SIGNAL(triggered(bool)), this, SLOT(EnableGraphics(bool)));

	
	
	//..Standard Views
	connect(ui.actionPerspective, SIGNAL(triggered()), this, SLOT(ViewPerspective()));
	connect(ui.actionTop, SIGNAL(triggered()), this, SLOT(ViewTop()));
	connect(ui.actionBottom, SIGNAL(triggered()), this, SLOT(ViewBottom()));
	connect(ui.actionLeft, SIGNAL(triggered()), this, SLOT(ViewLeft()));
	connect(ui.actionRight, SIGNAL(triggered()), this, SLOT(ViewRight()));
	connect(ui.actionFront, SIGNAL(triggered()), this, SLOT(ViewFront()));
	connect(ui.actionBack, SIGNAL(triggered()), this, SLOT(ViewBack()));
	//..Section View
	connect(ui.actionSection_View, SIGNAL(toggled(bool)), this, SLOT(SetSectionView(bool)));
	connect(ui.actionLayer_Back, SIGNAL(triggered()), &MainObj, SLOT(LayerBack()));
	connect(ui.actionLayer_Forward, SIGNAL(triggered()), &MainObj, SLOT(LayerForward()));
	//--
	connect(ui.actionReference_View, SIGNAL(toggled(bool)), this, SLOT(ViewRef3DWindow(bool)));
	connect(ui.actionInfo, SIGNAL(toggled(bool)), this, SLOT(ViewVoxInfoWindow(bool)));
	
	//Tools
	connect(ui.actionEdit_Voxels, SIGNAL(toggled(bool)), this, SLOT(EditMode(bool)));
	connect(ui.action3D_Brush, SIGNAL(toggled(bool)), this, SLOT(Brush3DMode(bool)));

	

	//..Drawing
	connect(ui.actionPencil, SIGNAL(triggered()), &MainObj, SLOT(SetDrawPencil()));
	connect(ui.actionRectangle, SIGNAL(triggered()), &MainObj, SLOT(SetDrawRectangle()));
	connect(ui.actionCircle, SIGNAL(triggered()), &MainObj, SLOT(SetDrawCircle()));
	connect(ui.actionPaint_Bucket, SIGNAL(triggered()), &MainObj, SLOT(SetDrawBucket()));

	//Analyze

//	connect(ui.actionTensile, SIGNAL(triggered()), this, SLOT(TensileTest())); //triggered (vs toggled) avoids getting called when setcheck is called.
	
	//Menu groups:
	DrawGroup = new QActionGroup(this);
	DrawGroup->addAction(ui.actionPencil);
	DrawGroup->addAction(ui.actionRectangle);
	DrawGroup->addAction(ui.actionCircle);
	DrawGroup->addAction(ui.actionPaint_Bucket);
	ui.actionPencil->setChecked(true);


	//initialize other random stuff
	SetSectionView(false);
	New(); //creates new object to start with
	ui.actionGraphics_Enabled->setChecked(GraphicsEnabled);


	CurViewMode = VM_NONE; //so 3DView will be a new mode!
	EnterVMMode(VM_3DVIEW);


	//redirect cout:
	//	http://www.qtcentre.org/threads/17880-Display-content-wirtten-to-STL-ostream-dynamically
	//std::ostream myWidget(;
	//std::streambuf *oldbuf = std::cout.rdbuf(myWidget.rdbuf());
}

VoxCADXBB::~VoxCADXBB()
{
}

void VoxCADXBB::SetupGLWindow(void)
{
	QGLFormat format; // double buffering and depth buffering is turned on in the default format, so no need to reset those
	GLWindow = new CQOpenGL(format);
	ui.horizontalLayout->addWidget(GLWindow);

	//opengl info
	connect(GLWindow, SIGNAL(FindDims(Vec3D<>*, Vec3D<>*)), &MainObj, SLOT(GetDim(Vec3D<>*, Vec3D<>*)));
	connect(GLWindow, SIGNAL(DrawGL(bool)), this, SLOT(DrawCurScene(bool)));
	connect(GLWindow, SIGNAL(DrawGLOverlay()), this, SLOT(DrawCurSceneOverlay()));
	connect(GLWindow, SIGNAL(MousePressIndex(int)), this, SLOT(SetGLSelected(int)));
	connect(GLWindow, SIGNAL(FastModeChanged(bool)), this, SLOT(FastModeChanged(bool)));

	//mouse handling
	connect(GLWindow, SIGNAL(WantGLIndex(bool*)), this, SLOT(WantGLIndex(bool*)));
	connect(GLWindow, SIGNAL(WantCoord3D(bool*)), this, SLOT(WantCoord3D(bool*)));

	connect(GLWindow, SIGNAL(MouseMoveHover(float, float, float)), this, SLOT(HoverMove(float, float, float)));
	connect(GLWindow, SIGNAL(LMouseMovePressed(float, float, float)), this, SLOT(LMouseDownMove(float, float, float)));
	connect(GLWindow, SIGNAL(LMouseDown(float, float, float, bool)), this, SLOT(LMouseDown(float, float, float, bool)));
	connect(GLWindow, SIGNAL(LMouseUp(float, float, float)), this, SLOT(LMouseUp(float, float, float)));
	connect(GLWindow, SIGNAL(PressedEscape()), this, SLOT(PressedEscape()));
	connect(GLWindow, SIGNAL(CtrlWheelRoll(bool)), this, SLOT(CtrlMouseRoll(bool)));

}

void VoxCADXBB::SetupRef3DWindow(void)
{
	Ref3DDockWidget = new QDockWidget(this);

	QGLFormat format; // double buffering and depth buffering is turned on in the default format, so no need to reset those
	GLRef3DWin = new CQOpenGL(format);
	GLRef3DWin->SetViewCustom1();

	Ref3DDockWidget->setWidget(GLRef3DWin);
    Ref3DDockWidget->setWindowTitle("3D View");

	connect(Ref3DDockWidget->toggleViewAction(), SIGNAL(toggled(bool)), this, SLOT(ViewRef3DWindow(bool)));
	connect(GLRef3DWin, SIGNAL(FindDims(Vec3D<>*, Vec3D<>*)), &MainObj, SLOT(GetDim(Vec3D<>*, Vec3D<>*)));
	connect(GLRef3DWin, SIGNAL(DrawGL(bool)), &MainObj, SLOT(DrawSceneView(bool)));

	Ref3DDockWidget->hide();
	Ref3DDockWidget->setFloating(true);
	Ref3DDockWidget->setGeometry (Ref3DDockWidget->parentWidget()->geometry().x()+10,Ref3DDockWidget->parentWidget()->geometry().y()+80,340,280 );

}



void VoxCADXBB::SetupPaletteWindow(void)
{
	PaletteDockWidget = new QDockWidget(this);
	PaletteDockWidget->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
	PaletteDlg = new vPalette(&MainObj, PaletteDockWidget);
	PaletteDockWidget->setWidget(PaletteDlg);
    PaletteDockWidget->setWindowTitle("Palette");

	addDockWidget(Qt::RightDockWidgetArea, PaletteDockWidget);

	connect(PaletteDockWidget->toggleViewAction(), SIGNAL(toggled(bool)), this, SLOT(ViewPaletteWindow(bool)));
	connect(PaletteDlg, SIGNAL(RequestUpdateGL()), this, SLOT(ReqGLUpdateAll()));
	connect(&MainObj, SIGNAL(GetCurMaterial(int*)), PaletteDlg, SLOT(GetCurMat(int*)));
}

void VoxCADXBB::SetupWorkspaceWindow(void)
{
	WorkspaceDockWidget = new QDockWidget(this);
	WorkspaceDockWidget->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
	WorkspaceDlg = new vWorkSpace(&MainObj, WorkspaceDockWidget);
	WorkspaceDockWidget->setWidget(WorkspaceDlg);
    WorkspaceDockWidget->setWindowTitle("Workspace");

	addDockWidget(Qt::RightDockWidgetArea, WorkspaceDockWidget);

	WorkspaceDlg->IniUpdateUI();
	connect(WorkspaceDockWidget->toggleViewAction(), SIGNAL(toggled(bool)), this, SLOT(ViewWorkspaceWindow(bool)));
	connect(WorkspaceDlg, SIGNAL(RequestUpdateGL()), this, SLOT(ReqGLUpdateAll()));
	connect(WorkspaceDlg, SIGNAL(WSDimChanged()), this, SLOT(WSDimChanged()));

	connect(&MainObj, SIGNAL(GetCurMaterial(int*)), PaletteDlg, SLOT(GetCurMat(int*)));
}


void VoxCADXBB::EnterVMMode(AppViewMode NewMode, bool Force) //switch between viewing modes!
{
	//check to see if we want to abandom analysis!
	if (CurViewMode == NewMode) return;

	//handle any de-initialization of the old mode
	switch (CurViewMode){
	case VM_3DVIEW:
		break;
	case VM_EDITLAYER:
		ViewRef3DWindow(false);
		SetSectionView(false);

		ui.actionEdit_Voxels->setChecked(false);
		ui.actionPerspective->setEnabled(true);
		ui.actionSection_View->setEnabled(true);

		ui.actionPencil->setEnabled(false);
		ui.actionRectangle->setEnabled(false);
		ui.actionCircle->setEnabled(false);

		break;
	}
	
	//enter the new mode!
	switch (NewMode){
	case VM_3DVIEW:
		CurViewMode = VM_3DVIEW;
		ViewPerspective(false);
		break;
	case VM_EDITLAYER:
		CurViewMode = VM_EDITLAYER;
		ViewTop(false);
		ui.actionEdit_Voxels->setChecked(true);

///		ui.actionPerspective->setEnabled(false);
		ui.actionSection_View->setEnabled(false);
		SetSectionView(true);

		ui.actionPencil->setEnabled(true);
		ui.actionRectangle->setEnabled(true);
		ui.actionCircle->setEnabled(true);

		//open the correct windowa:
		ViewPaletteWindow(true);
		ViewRef3DWindow(true);

		break;
	}

	//Things to do regardless
	SetGLSelected(); //reset selection
	ZoomExtAll();
}

void VoxCADXBB::DrawCurScene(bool FastMode)
{
	if (GraphicsEnabled){
		switch (CurViewMode){
		case VM_3DVIEW:
			MainObj.DrawSceneView(FastMode);
			break;
		case VM_EDITLAYER:
			MainObj.DrawSceneEdit(FastMode);
			break;
		
		}
	}
}




void VoxCADXBB::SetSectionView(bool ViewSec)
{
	if (ViewSec){
		MainObj.SetSectionView();
		ui.actionSection_View->setChecked(true);
		ui.actionLayer_Back->setEnabled(true);
		ui.actionLayer_Forward->setEnabled(true);
	}
	else {
		MainObj.SetSectionView(false);
		ui.actionSection_View->setChecked(false);
		ui.actionLayer_Back->setEnabled(false);
		ui.actionLayer_Forward->setEnabled(false);
	}
	ReqGLUpdateAll();
}

void VoxCADXBB::Copy(void)
{
	if (CurViewMode == VM_EDITLAYER){
		CVXC_Structure Layer;
		MainObj.ExtractCurLayer(&Layer);

		CXML_Rip LocXML;
		Layer.WriteXML(&LocXML);
		std::string Text;
		LocXML.toXMLText(&Text);

		QClipboard *clipboard = QApplication::clipboard();
		clipboard->setText(Text.c_str());
	}
}

void VoxCADXBB::Cut(void)
{
	if (CurViewMode == VM_EDITLAYER){
		Copy();
		CVXC_Structure BlankLayer = CVXC_Structure(1000, 1000, 1);
		MainObj.ImposeLayerCur(&BlankLayer);
		ReqGLUpdateAll(); 
	}
}

void VoxCADXBB::Paste(void)
{
	if (CurViewMode == VM_EDITLAYER){
		CVXC_Structure Layer;
		CXML_Rip LocXML;

		QClipboard *clipboard = QApplication::clipboard();
		std::string Text = clipboard->text().toStdString();
		LocXML.fromXMLText(&Text);
		Layer.ReadXML(&LocXML);

		MainObj.ImposeLayerCur(&Layer);
		ReqGLUpdateAll(); 
	}
}

//void VoxCad::TensileTest(void)
//{
//	Dlg_Tensile TensDlg(&MainEnv, this);
//	TensDlg.exec();
//}



