/*
	Astro_MainWindow.cpp
	*/

#include "Astro_MainWindow.h"

Astro_MainWindow::Astro_MainWindow()
{
	// do stuff
}

void Astro_MainWindow::display_about()
{
	QMessageBox	msgBox;
	msgBox.setText( "Version x.x" );
	msgBox.exec();
}
