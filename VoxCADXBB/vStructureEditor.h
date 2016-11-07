#ifndef VSTRUCTUREEDITOR_H
#define VSTRUCTUREEDITOR_H

#include "ui_vStructureEditor.h"
#include "QVX_Edit.h"
#include "../QTUtils/QOpenGL.h"
#include <QCloseEvent>

class vStructureEditor : public QWidget
{
	Q_OBJECT

public:
	vStructureEditor(CQDM_Edit* pEditIn, QWidget *parent);
	~vStructureEditor();

    CQDM_Edit* pEdit;
	CQOpenGL* pGLWin;

	void SetupRef3DWindow(void);
	QDialog* RefWin; //so we can make it a child...
	CQOpenGL* GLRef3DWin;

signals:
	void DoneEditing(void); //emitted to commit changes to the source

public slots:
	void IsEditMode(bool* YN) {*YN=true;}; //here, we are always in edit mode...

	void ClickedPencil(void);
	void ClickedBox(void);
	void ClickedEllipse(void);
	void ClickedLayerBack(void);
	void ClickedLayerForward(void);
	void ClickedRefView(bool State);

	//it is unfortunate to duplicate these here (from voxcad.h), but we need them to keep things hierachical
	void HoverMove(float X, float Y, float Z) {pEdit->HoverMove(Vec3D<>(X, Y, Z));};
	void LMouseDown(float X, float Y, float Z, bool IsCtrl) {pEdit->LMouseDown(Vec3D<>(X, Y, Z), IsCtrl);};
	void LMouseUp(float X, float Y, float Z) {pEdit->LMouseUp(Vec3D<>(X, Y, Z));};
	void LMouseDownMove(float X, float Y, float Z) {pEdit->LMouseDownMove(Vec3D<>(X, Y, Z));};
	void PressedEscape(void) {pEdit->PressedEscape();};
	void CtrlMouseRoll(bool Positive) {pEdit->CtrlMouseRoll(Positive);};


	void IniUpdateUI();
	void UpdateUI();
	void UpdateGLWins(void) {pGLWin->updateGL(); GLRef3DWin->updateGL();};
	void CurMaterial(int* pMat) {*pMat = ui.MatList->currentRow();};

	void WantGLIndex(bool* YN) {*YN=true;}
	void WantCoord3D(bool* YN) {*YN=true;}


protected:
	void closeEvent(QCloseEvent *event) {RefWin->close(); emit DoneEditing(); event->accept();};

private:
	Ui::StructEdDlg ui;
};

#endif // DLG_STRUCTUREEDITOR_H

