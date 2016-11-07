/********************************************************************************
** Form generated from reading UI file 'voxcadxbb.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOXCADXBB_H
#define UI_VOXCADXBB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VoxCADXBBClass
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionCenter_View;
    QAction *actionSave_As;
    QAction *actionASCII_VXC;
    QAction *actionBASE64_VXC;
    QAction *actionSolve;
    QAction *actionPerspective;
    QAction *actionTop;
    QAction *actionBottom;
    QAction *actionLeft;
    QAction *actionRight;
    QAction *actionFront;
    QAction *actionBack;
    QAction *actionEdit_Voxels;
    QAction *actionLayer_Back;
    QAction *actionLayer_Forward;
    QAction *actionPencil;
    QAction *actionRectangle;
    QAction *actionCircle;
    QAction *actionReference_View;
    QAction *actionPalette;
    QAction *actionWorkspace;
    QAction *actionInfo;
    QAction *actionBCs;
    QAction *actionSection_View;
    QAction *actionNew;
    QAction *actionVXA_OUT;
    QAction *actionSTL;
    QAction *actionDMU_Out;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionVXA_IN;
    QAction *actionLarge_Mode;
    QAction *actionPhysics;
    QAction *action3D_Brush;
    QAction *actionTensile;
    QAction *actionVoxelCoordinates;
    QAction *actionPaint_Bucket;
    QAction *actionView_Tiled;
    QAction *actionGraphics_Enabled;
    QAction *actionKV6;
    QAction *actionBenchmark;
    QAction *actionShow_Triad;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuExport;
    QMenu *menuAlternate_VXC;
    QMenu *menuMesh;
    QMenu *menuImport;
    QMenu *menuView;
    QMenu *menuStandard_Views;
    QMenu *menuSection;
    QMenu *menuAnalyze;
    QMenu *menuTools;
    QMenu *menuDrawing;
    QMenu *menuEdit;
    QStatusBar *statusBar;
    QToolBar *FileToolBar;
    QToolBar *ViewtoolBar;

    void setupUi(QMainWindow *VoxCADXBBClass)
    {
        if (VoxCADXBBClass->objectName().isEmpty())
            VoxCADXBBClass->setObjectName(QString::fromUtf8("VoxCADXBBClass"));
        VoxCADXBBClass->setEnabled(true);
        VoxCADXBBClass->resize(751, 478);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/VoxCad/VoxCad.ico"), QSize(), QIcon::Normal, QIcon::Off);
        VoxCADXBBClass->setWindowIcon(icon);
        actionOpen = new QAction(VoxCADXBBClass);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/Icons/Open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(VoxCADXBBClass);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/Icons/Save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionCenter_View = new QAction(VoxCADXBBClass);
        actionCenter_View->setObjectName(QString::fromUtf8("actionCenter_View"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/Icons/ZoomExtents2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCenter_View->setIcon(icon3);
        actionSave_As = new QAction(VoxCADXBBClass);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionASCII_VXC = new QAction(VoxCADXBBClass);
        actionASCII_VXC->setObjectName(QString::fromUtf8("actionASCII_VXC"));
        actionBASE64_VXC = new QAction(VoxCADXBBClass);
        actionBASE64_VXC->setObjectName(QString::fromUtf8("actionBASE64_VXC"));
        actionSolve = new QAction(VoxCADXBBClass);
        actionSolve->setObjectName(QString::fromUtf8("actionSolve"));
        actionSolve->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/Icons/Analyze.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSolve->setIcon(icon4);
        actionSolve->setVisible(false);
        actionPerspective = new QAction(VoxCADXBBClass);
        actionPerspective->setObjectName(QString::fromUtf8("actionPerspective"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icons/Icons/ViewPerspective.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPerspective->setIcon(icon5);
        actionTop = new QAction(VoxCADXBBClass);
        actionTop->setObjectName(QString::fromUtf8("actionTop"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Icons/Icons/ViewTop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTop->setIcon(icon6);
        actionBottom = new QAction(VoxCADXBBClass);
        actionBottom->setObjectName(QString::fromUtf8("actionBottom"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Icons/Icons/ViewBottom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBottom->setIcon(icon7);
        actionLeft = new QAction(VoxCADXBBClass);
        actionLeft->setObjectName(QString::fromUtf8("actionLeft"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Icons/Icons/ViewLeft.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLeft->setIcon(icon8);
        actionRight = new QAction(VoxCADXBBClass);
        actionRight->setObjectName(QString::fromUtf8("actionRight"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Icons/Icons/ViewRight.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRight->setIcon(icon9);
        actionFront = new QAction(VoxCADXBBClass);
        actionFront->setObjectName(QString::fromUtf8("actionFront"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Icons/Icons/ViewFront.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFront->setIcon(icon10);
        actionBack = new QAction(VoxCADXBBClass);
        actionBack->setObjectName(QString::fromUtf8("actionBack"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Icons/Icons/ViewBack.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBack->setIcon(icon11);
        actionEdit_Voxels = new QAction(VoxCADXBBClass);
        actionEdit_Voxels->setObjectName(QString::fromUtf8("actionEdit_Voxels"));
        actionEdit_Voxels->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Icons/Icons/EditLayer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEdit_Voxels->setIcon(icon12);
        actionLayer_Back = new QAction(VoxCADXBBClass);
        actionLayer_Back->setObjectName(QString::fromUtf8("actionLayer_Back"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Icons/Icons/LayerBack.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLayer_Back->setIcon(icon13);
        actionLayer_Forward = new QAction(VoxCADXBBClass);
        actionLayer_Forward->setObjectName(QString::fromUtf8("actionLayer_Forward"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Icons/Icons/LayerForward.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLayer_Forward->setIcon(icon14);
        actionPencil = new QAction(VoxCADXBBClass);
        actionPencil->setObjectName(QString::fromUtf8("actionPencil"));
        actionPencil->setCheckable(true);
        actionPencil->setChecked(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/Icons/Icons/Pencil.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPencil->setIcon(icon15);
        actionRectangle = new QAction(VoxCADXBBClass);
        actionRectangle->setObjectName(QString::fromUtf8("actionRectangle"));
        actionRectangle->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/Icons/Icons/Rectangle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRectangle->setIcon(icon16);
        actionCircle = new QAction(VoxCADXBBClass);
        actionCircle->setObjectName(QString::fromUtf8("actionCircle"));
        actionCircle->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/Icons/Icons/Ellipse.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCircle->setIcon(icon17);
        actionReference_View = new QAction(VoxCADXBBClass);
        actionReference_View->setObjectName(QString::fromUtf8("actionReference_View"));
        actionReference_View->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/Icons/Icons/Aux_View.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReference_View->setIcon(icon18);
        actionPalette = new QAction(VoxCADXBBClass);
        actionPalette->setObjectName(QString::fromUtf8("actionPalette"));
        actionPalette->setCheckable(true);
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/Icons/Icons/Material.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPalette->setIcon(icon19);
        actionWorkspace = new QAction(VoxCADXBBClass);
        actionWorkspace->setObjectName(QString::fromUtf8("actionWorkspace"));
        actionWorkspace->setCheckable(true);
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/Icons/Icons/Workspace.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWorkspace->setIcon(icon20);
        actionInfo = new QAction(VoxCADXBBClass);
        actionInfo->setObjectName(QString::fromUtf8("actionInfo"));
        actionInfo->setCheckable(true);
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/Icons/Icons/Info.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInfo->setIcon(icon21);
        actionBCs = new QAction(VoxCADXBBClass);
        actionBCs->setObjectName(QString::fromUtf8("actionBCs"));
        actionBCs->setCheckable(true);
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/Icons/Icons/BCs.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBCs->setIcon(icon22);
        actionSection_View = new QAction(VoxCADXBBClass);
        actionSection_View->setObjectName(QString::fromUtf8("actionSection_View"));
        actionSection_View->setCheckable(true);
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/Icons/Icons/Section.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSection_View->setIcon(icon23);
        actionNew = new QAction(VoxCADXBBClass);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/Icons/Icons/New.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon24);
        actionVXA_OUT = new QAction(VoxCADXBBClass);
        actionVXA_OUT->setObjectName(QString::fromUtf8("actionVXA_OUT"));
        actionSTL = new QAction(VoxCADXBBClass);
        actionSTL->setObjectName(QString::fromUtf8("actionSTL"));
        actionDMU_Out = new QAction(VoxCADXBBClass);
        actionDMU_Out->setObjectName(QString::fromUtf8("actionDMU_Out"));
        actionCopy = new QAction(VoxCADXBBClass);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/Icons/Icons/Copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon25);
        actionCut = new QAction(VoxCADXBBClass);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/Icons/Icons/Cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon26);
        actionPaste = new QAction(VoxCADXBBClass);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/Icons/Icons/Paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon27);
        actionVXA_IN = new QAction(VoxCADXBBClass);
        actionVXA_IN->setObjectName(QString::fromUtf8("actionVXA_IN"));
        actionLarge_Mode = new QAction(VoxCADXBBClass);
        actionLarge_Mode->setObjectName(QString::fromUtf8("actionLarge_Mode"));
        actionLarge_Mode->setCheckable(true);
        actionPhysics = new QAction(VoxCADXBBClass);
        actionPhysics->setObjectName(QString::fromUtf8("actionPhysics"));
        actionPhysics->setCheckable(true);
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/Icons/Icons/Sandbox.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPhysics->setIcon(icon28);
        action3D_Brush = new QAction(VoxCADXBBClass);
        action3D_Brush->setObjectName(QString::fromUtf8("action3D_Brush"));
        action3D_Brush->setCheckable(true);
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/Icons/Icons/3DBrush.png"), QSize(), QIcon::Normal, QIcon::Off);
        action3D_Brush->setIcon(icon29);
        actionTensile = new QAction(VoxCADXBBClass);
        actionTensile->setObjectName(QString::fromUtf8("actionTensile"));
        actionTensile->setCheckable(true);
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/Icons/Icons/Tensile.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTensile->setIcon(icon30);
        actionVoxelCoordinates = new QAction(VoxCADXBBClass);
        actionVoxelCoordinates->setObjectName(QString::fromUtf8("actionVoxelCoordinates"));
        actionPaint_Bucket = new QAction(VoxCADXBBClass);
        actionPaint_Bucket->setObjectName(QString::fromUtf8("actionPaint_Bucket"));
        actionPaint_Bucket->setCheckable(true);
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/Icons/Icons/Bucket.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaint_Bucket->setIcon(icon31);
        actionView_Tiled = new QAction(VoxCADXBBClass);
        actionView_Tiled->setObjectName(QString::fromUtf8("actionView_Tiled"));
        actionView_Tiled->setCheckable(true);
        actionGraphics_Enabled = new QAction(VoxCADXBBClass);
        actionGraphics_Enabled->setObjectName(QString::fromUtf8("actionGraphics_Enabled"));
        actionGraphics_Enabled->setCheckable(true);
        actionKV6 = new QAction(VoxCADXBBClass);
        actionKV6->setObjectName(QString::fromUtf8("actionKV6"));
        actionBenchmark = new QAction(VoxCADXBBClass);
        actionBenchmark->setObjectName(QString::fromUtf8("actionBenchmark"));
        actionBenchmark->setVisible(false);
        actionShow_Triad = new QAction(VoxCADXBBClass);
        actionShow_Triad->setObjectName(QString::fromUtf8("actionShow_Triad"));
        actionShow_Triad->setCheckable(true);
        actionShow_Triad->setChecked(true);
        centralWidget = new QWidget(VoxCADXBBClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        VoxCADXBBClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VoxCADXBBClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 751, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuExport = new QMenu(menuFile);
        menuExport->setObjectName(QString::fromUtf8("menuExport"));
        menuAlternate_VXC = new QMenu(menuExport);
        menuAlternate_VXC->setObjectName(QString::fromUtf8("menuAlternate_VXC"));
        menuMesh = new QMenu(menuExport);
        menuMesh->setObjectName(QString::fromUtf8("menuMesh"));
        menuImport = new QMenu(menuFile);
        menuImport->setObjectName(QString::fromUtf8("menuImport"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuStandard_Views = new QMenu(menuView);
        menuStandard_Views->setObjectName(QString::fromUtf8("menuStandard_Views"));
        menuSection = new QMenu(menuView);
        menuSection->setObjectName(QString::fromUtf8("menuSection"));
        menuAnalyze = new QMenu(menuBar);
        menuAnalyze->setObjectName(QString::fromUtf8("menuAnalyze"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuDrawing = new QMenu(menuTools);
        menuDrawing->setObjectName(QString::fromUtf8("menuDrawing"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        VoxCADXBBClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(VoxCADXBBClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        VoxCADXBBClass->setStatusBar(statusBar);
        FileToolBar = new QToolBar(VoxCADXBBClass);
        FileToolBar->setObjectName(QString::fromUtf8("FileToolBar"));
        FileToolBar->setIconSize(QSize(16, 16));
        VoxCADXBBClass->addToolBar(Qt::TopToolBarArea, FileToolBar);
        ViewtoolBar = new QToolBar(VoxCADXBBClass);
        ViewtoolBar->setObjectName(QString::fromUtf8("ViewtoolBar"));
        ViewtoolBar->setIconSize(QSize(16, 16));
        VoxCADXBBClass->addToolBar(Qt::TopToolBarArea, ViewtoolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuAnalyze->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(menuImport->menuAction());
        menuFile->addAction(menuExport->menuAction());
        menuExport->addAction(actionVXA_OUT);
        menuExport->addAction(actionKV6);
        menuExport->addAction(actionDMU_Out);
        menuExport->addAction(actionVoxelCoordinates);
        menuExport->addAction(menuMesh->menuAction());
        menuExport->addAction(menuAlternate_VXC->menuAction());
        menuAlternate_VXC->addAction(actionBASE64_VXC);
        menuAlternate_VXC->addAction(actionASCII_VXC);
        menuMesh->addAction(actionSTL);
        menuImport->addAction(actionVXA_IN);
        menuView->addAction(actionCenter_View);
        menuView->addAction(menuStandard_Views->menuAction());
        menuView->addAction(menuSection->menuAction());
        menuView->addSeparator();
        menuView->addAction(actionShow_Triad);
        menuView->addAction(actionLarge_Mode);
        menuView->addAction(actionView_Tiled);
        menuView->addAction(actionGraphics_Enabled);
        menuView->addSeparator();
        menuView->addAction(actionReference_View);
        menuView->addAction(actionInfo);
        menuView->addSeparator();
        menuStandard_Views->addAction(actionPerspective);
        menuStandard_Views->addSeparator();
        menuStandard_Views->addAction(actionTop);
        menuStandard_Views->addAction(actionBottom);
        menuStandard_Views->addAction(actionLeft);
        menuStandard_Views->addAction(actionRight);
        menuStandard_Views->addAction(actionFront);
        menuStandard_Views->addAction(actionBack);
        menuSection->addAction(actionSection_View);
        menuSection->addAction(actionLayer_Forward);
        menuSection->addAction(actionLayer_Back);
        menuAnalyze->addAction(actionBCs);
        menuAnalyze->addAction(actionSolve);
        menuAnalyze->addSeparator();
        menuAnalyze->addAction(actionTensile);
        menuAnalyze->addAction(actionPhysics);
        menuAnalyze->addAction(actionBenchmark);
        menuTools->addAction(actionEdit_Voxels);
        menuTools->addAction(action3D_Brush);
        menuTools->addSeparator();
        menuTools->addAction(menuDrawing->menuAction());
        menuDrawing->addAction(actionPencil);
        menuDrawing->addAction(actionRectangle);
        menuDrawing->addAction(actionCircle);
        menuDrawing->addAction(actionPaint_Bucket);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionWorkspace);
        menuEdit->addAction(actionPalette);
        FileToolBar->addAction(actionNew);
        FileToolBar->addAction(actionOpen);
        FileToolBar->addAction(actionSave);
        ViewtoolBar->addAction(actionCenter_View);
        ViewtoolBar->addAction(actionPerspective);
        ViewtoolBar->addAction(actionTop);
        ViewtoolBar->addAction(actionBottom);
        ViewtoolBar->addAction(actionLeft);
        ViewtoolBar->addAction(actionRight);
        ViewtoolBar->addAction(actionFront);
        ViewtoolBar->addAction(actionBack);

        retranslateUi(VoxCADXBBClass);

        QMetaObject::connectSlotsByName(VoxCADXBBClass);
    } // setupUi

    void retranslateUi(QMainWindow *VoxCADXBBClass)
    {
        VoxCADXBBClass->setWindowTitle(QApplication::translate("VoxCADXBBClass", "VoxCadXBB", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("VoxCADXBBClass", "Open", 0, QApplication::UnicodeUTF8));
        actionOpen->setShortcut(QApplication::translate("VoxCADXBBClass", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("VoxCADXBBClass", "Save", 0, QApplication::UnicodeUTF8));
        actionSave->setShortcut(QApplication::translate("VoxCADXBBClass", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionCenter_View->setText(QApplication::translate("VoxCADXBBClass", "Zoom Extents", 0, QApplication::UnicodeUTF8));
        actionSave_As->setText(QApplication::translate("VoxCADXBBClass", "Save As", 0, QApplication::UnicodeUTF8));
        actionSave_As->setShortcut(QApplication::translate("VoxCADXBBClass", "Ctrl+Shift+S", 0, QApplication::UnicodeUTF8));
        actionASCII_VXC->setText(QApplication::translate("VoxCADXBBClass", "Ascii", 0, QApplication::UnicodeUTF8));
        actionBASE64_VXC->setText(QApplication::translate("VoxCADXBBClass", "Base64", 0, QApplication::UnicodeUTF8));
        actionSolve->setText(QApplication::translate("VoxCADXBBClass", "Solve", 0, QApplication::UnicodeUTF8));
        actionPerspective->setText(QApplication::translate("VoxCADXBBClass", "Perspective", 0, QApplication::UnicodeUTF8));
        actionPerspective->setShortcut(QApplication::translate("VoxCADXBBClass", "Alt+1", 0, QApplication::UnicodeUTF8));
        actionTop->setText(QApplication::translate("VoxCADXBBClass", "Top", 0, QApplication::UnicodeUTF8));
        actionTop->setShortcut(QApplication::translate("VoxCADXBBClass", "Alt+2", 0, QApplication::UnicodeUTF8));
        actionBottom->setText(QApplication::translate("VoxCADXBBClass", "Bottom", 0, QApplication::UnicodeUTF8));
        actionBottom->setShortcut(QApplication::translate("VoxCADXBBClass", "Alt+3", 0, QApplication::UnicodeUTF8));
        actionLeft->setText(QApplication::translate("VoxCADXBBClass", "Left", 0, QApplication::UnicodeUTF8));
        actionLeft->setShortcut(QApplication::translate("VoxCADXBBClass", "Alt+4", 0, QApplication::UnicodeUTF8));
        actionRight->setText(QApplication::translate("VoxCADXBBClass", "Right", 0, QApplication::UnicodeUTF8));
        actionRight->setShortcut(QApplication::translate("VoxCADXBBClass", "Alt+5", 0, QApplication::UnicodeUTF8));
        actionFront->setText(QApplication::translate("VoxCADXBBClass", "Front", 0, QApplication::UnicodeUTF8));
        actionFront->setShortcut(QApplication::translate("VoxCADXBBClass", "Alt+6", 0, QApplication::UnicodeUTF8));
        actionBack->setText(QApplication::translate("VoxCADXBBClass", "Back", 0, QApplication::UnicodeUTF8));
        actionBack->setShortcut(QApplication::translate("VoxCADXBBClass", "Alt+7", 0, QApplication::UnicodeUTF8));
        actionEdit_Voxels->setText(QApplication::translate("VoxCADXBBClass", "Edit Voxels", 0, QApplication::UnicodeUTF8));
        actionEdit_Voxels->setShortcut(QApplication::translate("VoxCADXBBClass", "E", 0, QApplication::UnicodeUTF8));
        actionLayer_Back->setText(QApplication::translate("VoxCADXBBClass", "Layer Back", 0, QApplication::UnicodeUTF8));
        actionLayer_Back->setShortcut(QApplication::translate("VoxCADXBBClass", "-", 0, QApplication::UnicodeUTF8));
        actionLayer_Forward->setText(QApplication::translate("VoxCADXBBClass", "Layer Forward", 0, QApplication::UnicodeUTF8));
        actionLayer_Forward->setShortcut(QApplication::translate("VoxCADXBBClass", "+", 0, QApplication::UnicodeUTF8));
        actionPencil->setText(QApplication::translate("VoxCADXBBClass", "Pencil", 0, QApplication::UnicodeUTF8));
        actionPencil->setShortcut(QApplication::translate("VoxCADXBBClass", "Alt+Q", 0, QApplication::UnicodeUTF8));
        actionRectangle->setText(QApplication::translate("VoxCADXBBClass", "Rectangle", 0, QApplication::UnicodeUTF8));
        actionRectangle->setShortcut(QApplication::translate("VoxCADXBBClass", "Alt+W", 0, QApplication::UnicodeUTF8));
        actionCircle->setText(QApplication::translate("VoxCADXBBClass", "Circle", 0, QApplication::UnicodeUTF8));
        actionCircle->setShortcut(QApplication::translate("VoxCADXBBClass", "Alt+E", 0, QApplication::UnicodeUTF8));
        actionReference_View->setText(QApplication::translate("VoxCADXBBClass", "Reference View", 0, QApplication::UnicodeUTF8));
        actionReference_View->setShortcut(QApplication::translate("VoxCADXBBClass", "R", 0, QApplication::UnicodeUTF8));
        actionPalette->setText(QApplication::translate("VoxCADXBBClass", "Palette", 0, QApplication::UnicodeUTF8));
        actionPalette->setShortcut(QApplication::translate("VoxCADXBBClass", "P", 0, QApplication::UnicodeUTF8));
        actionWorkspace->setText(QApplication::translate("VoxCADXBBClass", "Workspace", 0, QApplication::UnicodeUTF8));
        actionWorkspace->setShortcut(QApplication::translate("VoxCADXBBClass", "W", 0, QApplication::UnicodeUTF8));
        actionInfo->setText(QApplication::translate("VoxCADXBBClass", "Info", 0, QApplication::UnicodeUTF8));
        actionInfo->setShortcut(QApplication::translate("VoxCADXBBClass", "I", 0, QApplication::UnicodeUTF8));
        actionBCs->setText(QApplication::translate("VoxCADXBBClass", "Boundary Conditions", 0, QApplication::UnicodeUTF8));
        actionBCs->setShortcut(QApplication::translate("VoxCADXBBClass", "B", 0, QApplication::UnicodeUTF8));
        actionSection_View->setText(QApplication::translate("VoxCADXBBClass", "Section View", 0, QApplication::UnicodeUTF8));
        actionSection_View->setShortcut(QApplication::translate("VoxCADXBBClass", "Alt+S", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("VoxCADXBBClass", "New", 0, QApplication::UnicodeUTF8));
        actionNew->setShortcut(QApplication::translate("VoxCADXBBClass", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionVXA_OUT->setText(QApplication::translate("VoxCADXBBClass", "Simulation", 0, QApplication::UnicodeUTF8));
        actionSTL->setText(QApplication::translate("VoxCADXBBClass", "STL", 0, QApplication::UnicodeUTF8));
        actionDMU_Out->setText(QApplication::translate("VoxCADXBBClass", "DMU", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("VoxCADXBBClass", "Copy", 0, QApplication::UnicodeUTF8));
        actionCopy->setShortcut(QApplication::translate("VoxCADXBBClass", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionCut->setText(QApplication::translate("VoxCADXBBClass", "Cut", 0, QApplication::UnicodeUTF8));
        actionCut->setShortcut(QApplication::translate("VoxCADXBBClass", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionPaste->setText(QApplication::translate("VoxCADXBBClass", "Paste", 0, QApplication::UnicodeUTF8));
        actionPaste->setShortcut(QApplication::translate("VoxCADXBBClass", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionVXA_IN->setText(QApplication::translate("VoxCADXBBClass", "Simulation", 0, QApplication::UnicodeUTF8));
        actionLarge_Mode->setText(QApplication::translate("VoxCADXBBClass", "Large Mode", 0, QApplication::UnicodeUTF8));
        actionPhysics->setText(QApplication::translate("VoxCADXBBClass", "Physics Sandbox", 0, QApplication::UnicodeUTF8));
        action3D_Brush->setText(QApplication::translate("VoxCADXBBClass", "3D Brush", 0, QApplication::UnicodeUTF8));
        actionTensile->setText(QApplication::translate("VoxCADXBBClass", "Tensile Test", 0, QApplication::UnicodeUTF8));
        actionVoxelCoordinates->setText(QApplication::translate("VoxCADXBBClass", "Voxel Coordinates", 0, QApplication::UnicodeUTF8));
        actionPaint_Bucket->setText(QApplication::translate("VoxCADXBBClass", "Paint Bucket", 0, QApplication::UnicodeUTF8));
        actionView_Tiled->setText(QApplication::translate("VoxCADXBBClass", "View Tiled", 0, QApplication::UnicodeUTF8));
        actionGraphics_Enabled->setText(QApplication::translate("VoxCADXBBClass", "Graphics Enabled", 0, QApplication::UnicodeUTF8));
        actionKV6->setText(QApplication::translate("VoxCADXBBClass", "KV6", 0, QApplication::UnicodeUTF8));
        actionBenchmark->setText(QApplication::translate("VoxCADXBBClass", "Benchmark", 0, QApplication::UnicodeUTF8));
        actionShow_Triad->setText(QApplication::translate("VoxCADXBBClass", "Show Triad", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("VoxCADXBBClass", "File", 0, QApplication::UnicodeUTF8));
        menuExport->setTitle(QApplication::translate("VoxCADXBBClass", "Export", 0, QApplication::UnicodeUTF8));
        menuAlternate_VXC->setTitle(QApplication::translate("VoxCADXBBClass", "Alternate VXC", 0, QApplication::UnicodeUTF8));
        menuMesh->setTitle(QApplication::translate("VoxCADXBBClass", "Mesh", 0, QApplication::UnicodeUTF8));
        menuImport->setTitle(QApplication::translate("VoxCADXBBClass", "Import", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("VoxCADXBBClass", "View", 0, QApplication::UnicodeUTF8));
        menuStandard_Views->setTitle(QApplication::translate("VoxCADXBBClass", "Standard Views", 0, QApplication::UnicodeUTF8));
        menuSection->setTitle(QApplication::translate("VoxCADXBBClass", "Section", 0, QApplication::UnicodeUTF8));
        menuAnalyze->setTitle(QApplication::translate("VoxCADXBBClass", "Analyze", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("VoxCADXBBClass", "Tools", 0, QApplication::UnicodeUTF8));
        menuDrawing->setTitle(QApplication::translate("VoxCADXBBClass", "Drawing", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("VoxCADXBBClass", "Edit", 0, QApplication::UnicodeUTF8));
        FileToolBar->setWindowTitle(QApplication::translate("VoxCADXBBClass", "File", 0, QApplication::UnicodeUTF8));
        ViewtoolBar->setWindowTitle(QApplication::translate("VoxCADXBBClass", "View", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VoxCADXBBClass: public Ui_VoxCADXBBClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOXCADXBB_H
