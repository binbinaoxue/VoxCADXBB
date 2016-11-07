#ifndef QVX_INTERFACES_H
#define QVX_INTERFACES_H

//wraps classes with QT slots, dialog interfaces, etc:

#include <QWidget>
#include "../oldVoxelyze/VX_Object.h"
#include "../oldVoxelyze/VX_FEA.h"
#include "../oldVoxelyze/VX_Environment.h"
#include "../oldVoxelyze/VX_Sim.h"
#include "../oldVoxelyze/VXS_SimGLView.h"
#include <QFileDialog>
#include "../QTUtils/QThreadWrap.h"
#include <qsettings.h>

//#ifdef VX2
#include "../Voxelyze/include/VX_Voxel.h"
//#endif

//for multithreading
#include <QtConcurrentMap>

class QVX_Object : public QWidget, public CVX_Object
{
	Q_OBJECT

public:
	
	QVX_Object(QWidget *parent = 0) {Path = "";};
	~QVX_Object(){};
	QVX_Object& operator=(const QVX_Object& RefObj); //overload "=" 

//	Path = RefObj.Path;


public slots:
	void GetDim(Vec3D<>* pVec, Vec3D<>* pOff) {GetWorkSpace(pVec); *pOff = Vec3D<>(0,0,0);};

	//high level file I/O functions
	void New(void) {Close(); InitializeMatter(0.001, 10, 10, 10);};
	void Save(int Compression = CP_ZLIB, bool NewLoc = false, QString* pNewFilenameOut = NULL);
	void SaveZLib(void) {Save(CP_ZLIB);};
	void SaveAsZLib(QString* pFilenameOut = NULL) {Save(CP_ZLIB, true, pFilenameOut);};
	void SaveAsBase64() {Path = ""; Save(CP_BASE64);};
	void SaveAsAsciiReadable() {Path = ""; Save(CP_ASCIIREADABLE);};
	void ExportSTL(void);
	void ExportXYZ(void);
	void ExportKV6(void);

	bool Open(QString* pFilenameOut = NULL);
	void Close(void) {ClearMatter(); Path = "";};
	
	bool OpenPal(void); //open material palette
	bool SavePal(void); //save material palette

	
//	QIcon GenerateMatIcon(int MatIndex);

protected:
	std::string Path; //current file path

private:
	QString GetLastDir(){return QSettings().value("CurrentDir", "").toString();}
	void SetLastDir(QString FullPath){QString SelDir = QFileInfo(FullPath).path(); QSettings().setValue("CurrentDir", SelDir);}
};







#endif // QVX_INTERFACES_H
