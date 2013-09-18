/*
	main.cpp
	*/

//#include "astro.h"
#include "Astro_MenuBar.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	Astro_MenuBar w;
	w.show();
	return a.exec();
}
