#include "vStructureEditor.h"
#include <QString>

vStructureEditor::vStructureEditor(CQDM_Edit* pEditIn, QWidget *parent)
	: QWidget(parent)
{	
	pEdit = pEditIn;
	ui.setupUi(this);
	QGLFormat format; // double buffering and depth buffering is turned on in the default format, so no need to reset those
	pGLWin = new CQOpenGL(format);
	ui.horizontalLayout->addWidget(pGLWin);
	resize(500, 300);
	SetupRef3DWindow();

	connect(pGLWin, SIGNAL(FindDims(Vec3D<>*, Vec3D<>*)), pEdit, SLOT(GetDim(Vec3D<>*, Vec3D<>*)));
	connect(pGLWin, SIGNAL(DrawGL(bool)), pEdit, SLOT(DrawSceneEdit(bool)));

	connect(pGLWin, SIGNAL(WantGLIndex(bool*)), this, SLOT(WantGLIndex(bool*)));
	connect(pGLWin, SIGNAL(WantCoord3D(bool*)), this, SLOT(WantCoord3D(bool*)));
//	connect(pGLWin, SIGNAL(IsExtScene2D(bool*)), this, SLOT(IsEditMode(bool*)));

	connect(pGLWin, SIGNAL(MouseMoveHover(float, float, float)), this, SLOT(HoverMove(float, float, float)));
	connect(pGLWin, SIGNAL(LMouseMovePressed(float, float, float)), this, SLOT(LMouseDownMove(float, float, float)));
	connect(pGLWin, SIGNAL(LMouseDown(float, float, float, bool)), this, SLOT(LMouseDown(float, float, float, bool)));
	connect(pGLWin, SIGNAL(LMouseUp(float, float, float)), this, SLOT(LMouseUp(float, float, float)));
	connect(pGLWin, SIGNAL(PressedEscape()), this, SLOT(PressedEscape()));
	connect(pGLWin, SIGNAL(CtrlWheelRoll(bool)), this, SLOT(CtrlMouseRoll(bool)));

	connect(pEdit, SIGNAL(UpdateGLWindows()), this, SLOT(UpdateGLWins()));
	connect(pEdit, SIGNAL(GetCurMaterial(int*)), this, SLOT(CurMaterial(int*)));

	//connect this! void GetCurMaterial(int* MatIndex);
	
	//UI handlers:
	connect(ui.pencilButton, SIGNAL(clicked()), this, SLOT(ClickedPencil()));
	connect(ui.squareButton, SIGNAL(clicked()), this, SLOT(ClickedBox()));
	connect(ui.ellipseButton, SIGNAL(clicked()), this, SLOT(ClickedEllipse()));
	connect(ui.layerbackButton, SIGNAL(clicked()), this, SLOT(ClickedLayerBack()));
	connect(ui.layerforwardButton, SIGNAL(clicked()), this, SLOT(ClickedLayerForward()));
	connect(ui.refviewButton, SIGNAL(clicked(bool)), this, SLOT(ClickedRefView(bool)));

	IniUpdateUI();

}

vStructureEditor::~vStructureEditor()
{

}

void vStructureEditor::IniUpdateUI()
{
	pGLWin->SetViewTop();
	pGLWin->GLCenterView(); //necessary because view is already top...
	pEdit->SetV2DTop();
	pEdit->SetSectionView();
	
	//initial ui update (things that won't change...)
	ui.MatList->clear();
	for (int i=0; i<pEdit->GetNumMaterials(); i++){
		QString Name = QString(pEdit->Palette[i].GetName().c_str());
		ui.MatList->addItem(Name);
		QPixmap tmpMap = QPixmap(16, 16);
		tmpMap.fill(QColor(pEdit->Palette[i].GetRedi(), pEdit->Palette[i].GetGreeni(), pEdit->Palette[i].GetBluei()));
		ui.MatList->item(i)->setIcon(QIcon(tmpMap));
		if (Name.endsWith("(Editing)", Qt::CaseInsensitive)) ui.MatList->item(i)->setFlags(NULL);
		if (Name.endsWith("(Recursive)", Qt::CaseInsensitive)) ui.MatList->item(i)->setFlags(NULL);
	}
	ui.MatList->setCurrentRow(0); //set to erase material
	UpdateUI();
}

void vStructureEditor::ClickedPencil(void)
{
	pEdit->SetDrawPencil();
	UpdateUI();

}

void vStructureEditor::ClickedBox(void)
{
	pEdit->SetDrawRectangle();
	UpdateUI();
}

void vStructureEditor::ClickedEllipse(void)
{
	pEdit->SetDrawCircle();
	UpdateUI();
}

void vStructureEditor::ClickedLayerBack(void)
{
	pEdit->LayerBack();
	UpdateUI();

}

void vStructureEditor::ClickedLayerForward(void)
{
	pEdit->LayerForward();
	UpdateUI();

}

void vStructureEditor::ClickedRefView(bool State)
{
	if (RefWin->isVisible()) RefWin->hide();
	else {
		GLRef3DWin->GLCenterView();
		RefWin->show();
	}
}

void vStructureEditor::UpdateUI()
{
	ui.pencilButton->setChecked(false);
	ui.ellipseButton->setChecked(false);
	ui.squareButton->setChecked(false);

	if (pEdit->GetCurDrawTool() == DT_PEN) ui.pencilButton->setChecked(true);
	if (pEdit->GetCurDrawTool() == DT_BOX) ui.squareButton->setChecked(true);
	if (pEdit->GetCurDrawTool() == DT_ELLIPSE) ui.ellipseButton->setChecked(true);

	UpdateGLWins();
}

void vStructureEditor::SetupRef3DWindow(void)
{
	RefWin = new QDialog(this);
	QHBoxLayout* HorLayout = new QHBoxLayout(RefWin);

	QGLFormat format; // double buffering and depth buffering is turned on in the default format, so no need to reset those
	GLRef3DWin = new CQOpenGL(format);
	HorLayout->addWidget(GLRef3DWin);
	GLRef3DWin->SetViewCustom1();
	GLRef3DWin->setWindowTitle("3D View");

	connect(GLRef3DWin, SIGNAL(FindDims(Vec3D<>*, Vec3D<>*)), pEdit, SLOT(GetDim(Vec3D<>*, Vec3D<>*)));
	connect(GLRef3DWin, SIGNAL(DrawGL(bool)), pEdit, SLOT(DrawSceneView(bool)));

	QRect GLFrame = pGLWin->geometry();
	RefWin->setGeometry(GLFrame.x()+400, GLFrame.y()+50, 300, 200);

	//GLRef3DWin->
//	GLRef3DWin->hide();
//	GLRef3DWin->setFloating(true);
//	GLRef3DWin->setGeometry (Ref3DDockWidget->parentWidget()->geometry().x()+10,Ref3DDockWidget->parentWidget()->geometry().y()+80,340,280 );

}
