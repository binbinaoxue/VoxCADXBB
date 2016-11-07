/*******************************************************************************
Copyright (c) 2010, Jonathan Hiller
All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
    * The name if its contributors may not be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*******************************************************************************/

#include "QVX_Interfaces.h"
#include <QMessageBox>
#include <QTime>
#include "../oldVoxelyze/VXS_Voxel.h"
#include "../oldVoxelyze/VXS_Bond.h"
#include "../oldVoxelyze/VX_MeshUtil.h"
//#include "vVideoGen.h"

#ifndef WIN32
#include <unistd.h>
#endif

#ifdef DMU_ENABLED
#include "../../include/DMU.h"
#endif

#ifdef WIN32
#define LOCALSLEEP Sleep
#else
#define LOCALSLEEP sleep
#endif

#define DEFAULT_DISPLAY_UPDATE_MS 33 //normally updates the view at 30fps (33ms)

//QVX_Object:
void QVX_Object::Save(int Compression, bool NewLoc, QString* pNewFilenameOut) //saves the file, or prompts if not yet been saved
{
	QString tmpPath = QString(Path.c_str());
	if (tmpPath == "" || NewLoc){ //if file path is empty string (IE not been saved yet)
		tmpPath = QFileDialog::getSaveFileName(NULL, "Save VXC", GetLastDir(), "Voxel CAD Files (*.vxc)");
		if (tmpPath == "") return; //if we canceled the dialog...
		SetLastDir(tmpPath);
	}

	if (!tmpPath.isNull()){
		Path = tmpPath.toStdString();
		SaveVXCFile(Path, Compression);
		if (pNewFilenameOut) *pNewFilenameOut = QFileInfo(tmpPath).baseName();

	}
	else Path = "";
}

bool QVX_Object::Open(QString* pFilenameOut) //Brings up file dialog to open VXC file
{
#ifdef DMU_ENABLED
	QString tmpPath = QFileDialog::getOpenFileName(NULL, "Open VXC", GetLastDir(), "Voxel CAD Files (*.vxc *.dmf);;DMUnit Files (*.dmu)");
#else
	QString tmpPath = QFileDialog::getOpenFileName(NULL, "Open VXC", GetLastDir(), "Voxel CAD Files (*.vxc *.dmf)");
#endif
	
	if (!tmpPath.isNull()){
		Close();
		#ifdef DMU_ENABLED
		if (tmpPath.right(3).compare("dmu", Qt::CaseInsensitive) == 0) ImportDMU(tmpPath.toStdString(), this);
		else
		#endif
		LoadVXCFile(tmpPath.toStdString());

		if (pFilenameOut) *pFilenameOut = QFileInfo(tmpPath).baseName();
		SetLastDir(tmpPath);

		return true;
	}
	return false;
}

bool QVX_Object::OpenPal(void) //Open a palette
{
	QString TmpPath = QFileDialog::getOpenFileName(NULL, "Open Palette", GetLastDir(), "VoxCad Palette Files (*.vxp *.pal)");;
	
	if(!TmpPath.isNull()){
		LoadVXPFile(TmpPath.toStdString());
		SetLastDir(TmpPath);
		return true;
	}
	return false;
}


bool QVX_Object::SavePal(void) //save a palette
{
	QString TmpPath = QFileDialog::getSaveFileName(NULL, "Save Palette", GetLastDir(), "VoxCad Palette Files (*.vxp)");
	if(!TmpPath.isNull()){
		SaveVXPFile(TmpPath.toStdString()); //store only the palette
		SetLastDir(TmpPath);
		return true;
	}
	return false;
}

void QVX_Object::ExportSTL(void)
{
	QString TmpPath = QFileDialog::getSaveFileName(NULL, "Export STL", GetLastDir(), "Stereolithography Files (*.stl)");
	if(!TmpPath.isNull()){
		CVX_MeshUtil Obj;
		Obj.ToStl(TmpPath.toStdString(), this);
		SetLastDir(TmpPath);
	}
}

void QVX_Object::ExportXYZ(void)
{
	QString OutFilePath = QFileDialog::getSaveFileName(NULL, "Export XYZ Coordinates", GetLastDir(), "TXT Files (*.txt)");

	QFile File(OutFilePath);
		
	if (!File.open(QIODevice::WriteOnly | QIODevice::Text)) {
		QMessageBox::warning(NULL, "File read error", "Could not open file. Aborting.");
		return;
	}
	QTextStream out(&File); 

	out << "MatIndex" << "\t" << "X (m)" << "\t" << "Y (m)" << "\t" << "Z (m)" << "\n";

	Vec3D<> Coord;
	int Mat;
	for (int i=0; i<GetStArraySize(); i++){
		Mat = GetMat(i);
		if (Mat != 0){
			Coord = GetXYZ(i);
			out << Mat << "\t" << Coord.x << "\t" << Coord.y << "\t" << Coord.z << "\n";
		}
	}

	File.close();
	SetLastDir(OutFilePath);

}

void QVX_Object::ExportKV6(void)
{
	QString TmpPath = QFileDialog::getSaveFileName(NULL, "Export KV6", GetLastDir(), "kv6 files (*.kv6)");
	if(!TmpPath.isNull()){
		ExportKV6File(TmpPath.toStdString());
		SetLastDir(TmpPath);
	}

}


//QIcon QVX_Object::GenerateMatIcon(int MatIndex)
//{
//
//}


//QVX_FEA:



//Environment
