#include "voxcadxbb.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	VoxCADXBB w;
	w.show();
	return a.exec();
}
