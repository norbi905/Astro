#include "astro.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Astro w;
	w.show();
	return a.exec();
}
