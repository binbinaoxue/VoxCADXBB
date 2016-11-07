#ifndef VPALETTE_H
#define VPALETTE_H

#include <QWidget>
#include "ui_vPalette.h"
#include "QVX_Interfaces.h"
#include <QAbstractListModel>
#include "vStructureEditor.h"
class CPalModel;

class vPalette : public QWidget
{
	Q_OBJECT

public:
	vPalette(QVX_Object* pObjIn, QWidget *parent = 0);
	~vPalette();

CPalModel* Palette_Model;
	QItemSelectionModel *selectionModel;

	QVX_Object* pObj; //pointer to the digital object this palette editor is looking at...
	CQDM_Edit TmpEdit; //to edit internal structures when needed
	vStructureEditor* TmpEditDlg;

	int GetCurMat(void){int CurMat; GetCurMat(&CurMat); return CurMat;};
	CVXC_Material* GetPCurMat(void) {return pObj->GetBaseMat(GetCurMat());}; // &(pObj->Palette[GetCurMat()]);};
	void SetCurMat(int NewMatIndex);

	virtual QSize sizeHint () const {return QSize(100, 500);};

signals:
	void RequestUpdateGL(void);


public slots:
	void ChangedVisible(bool State) {GetPCurMat()->SetVisible(State); emit RequestUpdateGL(); UpdateUI();};

	void ChangedBasic(bool State) {if (State) {GetPCurMat()->SetMatType(SINGLE); emit RequestUpdateGL(); UpdateUI();}};
	void ChangedDither(bool State) {if (State) {GetPCurMat()->SetMatType(DITHER); emit RequestUpdateGL(); UpdateUI();}};
	void ChangedStructure(bool State) {if (State) {GetPCurMat()->SetMatType(INTERNAL); emit RequestUpdateGL(); UpdateUI();}};
	
	//Appearance
	void ChangedR(int RVal);
	void ChangedG(int GVal);
	void ChangedB(int BVal);
	void ChangedA(int AVal);

	//Model
	void MatModeChanged(int NewMatMode);
	void ChangedElasticMod(QString str) {GetPCurMat()->SetElasticMod(str.toFloat()*1000000);}
	void ChangedPlasticMod(QString str) {GetPCurMat()->SetPlasticMod(str.toFloat()*1000000);}
	void ChangedYieldStress(QString str) {GetPCurMat()->SetYieldStress(str.toFloat()*1000000);}

	void ClickedStressFail(void) {GetPCurMat()->SetFailModel(FM_MAXSTRESS); UpdateFields();}
	void ClickedStrainFail(void) {GetPCurMat()->SetFailModel(FM_MAXSTRAIN); UpdateFields();}
	void ChangedFailStress(QString str) {GetPCurMat()->SetFailStress(str.toFloat()*1000000);}
	void ChangedFailStrain(QString str) {GetPCurMat()->SetFailStrain(str.toFloat());}

	void ClickedLoadSS(void) {ImportSSData(); UpdateFields();}

	//Physical
	void ChangedPoisson(QString str) {GetPCurMat()->SetPoissonsRatio(str.toFloat());}
	void ChangedDens(QString str) {GetPCurMat()->SetDensity(str.toFloat());}
	void ChangedCTE(QString str) {GetPCurMat()->SetCTE(str.toFloat());}
	void ChangedTempPhase(QString str) {GetPCurMat()->SetMatTempPhase(str.toFloat());}
	void ChangeduStatic(QString str) {GetPCurMat()->SetuStatic(str.toFloat());}
	void ChangeduDynamic(QString str) {GetPCurMat()->SetuDynamic(str.toFloat());}

	//Dither
	void Mat1IndexChanged(int NewMatIndex);
	void Mat2IndexChanged(int NewMatIndex);
	void ChangedPercRand(int RVal);

	//Structure
	void ClickedImport(void);
	void ClickedExport(void);

	void ChangedXDim(int XDimVal);
	void ChangedYDim(int YDimVal);
	void ChangedZDim(int ZDimVal);
	void ChangedXOff(int XOffVal);
	void ChangedYOff(int YOffVal);
	void ChangedZOff(int ZOffVal);
	void ClickedRx(bool State){if (State) {GetPCurMat()->SetSubRotateAxis(RAX_X); emit RequestUpdateGL(); UpdateUI();}}
	void ClickedRy(bool State){if (State) {GetPCurMat()->SetSubRotateAxis(RAX_Y); emit RequestUpdateGL(); UpdateUI();}}
	void ClickedRz(bool State){if (State) {GetPCurMat()->SetSubRotateAxis(RAX_Z); emit RequestUpdateGL(); UpdateUI();}}
	void ClickedR0(bool State){if (State) {GetPCurMat()->SetSubRotateAmount(RAM_0); emit RequestUpdateGL(); UpdateUI();}}
	void ClickedR90(bool State){if (State) {GetPCurMat()->SetSubRotateAmount(RAM_90); emit RequestUpdateGL(); UpdateUI();}}
	void ClickedR180(bool State){if (State) {GetPCurMat()->SetSubRotateAmount(RAM_180); emit RequestUpdateGL(); UpdateUI();}}
	void ClickedR270(bool State){if (State) {GetPCurMat()->SetSubRotateAmount(RAM_270); emit RequestUpdateGL(); UpdateUI();}}


	void ClickedEditStructure(void);
	void DoneEditStructure(void);

	void UpdateUI(void) {UpdateVisibleTabs(); UpdateFields();};
	void UpdateFields(void);

	void AddMaterial(void);
	void DeleteCurMaterial(void);

	void LoadPalette(void);
	void SavePalette(void);


	void GetCurMat(int* MatIndex);

private:
	void ImportSSData(void);
	void UpdateVisibleTabs(void);
	bool MatIsEditable(int MatIndex, std::string* ModName = NULL); //check for self reference, recursion...
	Ui::PaletteDlg ui;
};


//THE LINK between qt's model framework and my CVX_Object palette object

class CPalModel : public QAbstractListModel
{
	Q_OBJECT

public:
	CPalModel() {pObj = NULL;};
	CPalModel(CVX_Object* pVXC, QObject *parent = 0) : QAbstractListModel(parent), pObj(pVXC) {} //calls default constructor, sets pObj to pVXC

public slots:
	void UpdateList(void);

public:
	CVX_Object* pObj; //VXC object we are analyzing

	int rowCount(const QModelIndex &parent = QModelIndex()) const;
	QVariant data(const QModelIndex &index, int role) const;

	Qt::ItemFlags flags(const QModelIndex &index) const;
	bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole);

	bool insertRows(int row, int count, const QModelIndex & parent = QModelIndex()); 
	bool removeRows(int row, int count, const QModelIndex & parent = QModelIndex()); 
};

#endif // DLG_PALETTE_H
