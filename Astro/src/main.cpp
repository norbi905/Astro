/*
	main.cpp
	*/

#include "Astro_MainWindow.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	
	Astro_MainWindow mainWindow;
	
	mainWindow.show();
	
	return a.exec();
}
