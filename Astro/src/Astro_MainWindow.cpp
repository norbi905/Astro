/*
	Astro_MainWindow.cpp
	*/

#include "Astro_MainWindow.h"

Astro_MainWindow::Astro_MainWindow()
{
	// do stuff
}

void Astro_MainWindow::init()
{
	desktop = QApplication::desktop();

	screenWidth = desktop->width();
	screenHeight = desktop->height();

	this->resize( 800, screenHeight /2 );

	CreateMenu( screenWidth, screenHeight );
	CreateDockWindows();
}

void Astro_MainWindow::CreateMenu( int width, int height )
{
	quit = new QAction( "&Quit", this );
	about = new QAction( "&About", this );

	file = menuBar()->addMenu( "&File" );
	file->addAction( quit );
	
	help = menuBar()->addMenu( "&Help" );
	help->addAction( about );
	

	connect( quit, SIGNAL(triggered()), qApp, SLOT(quit()));
	connect( about, SIGNAL(triggered()), this, SLOT(display_about()));
}

void Astro_MainWindow::display_about()
{
	QMessageBox	msgBox;
	msgBox.setText( "Version x.x" );
	msgBox.exec();
}

void Astro_MainWindow::CreateDockWindows()
{
	imageCaptureWindow = new QDockWidget( tr("Image Capture"), this );
	imageCaptureWindow->setAllowedAreas( Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea );
	//imageCaptureWindow->setMaximumSize( Astro_MainWindow::size() /1.5 );
	//imageCaptureWindow->setBaseSize( Astro_MainWindow::size());

	
	//setCentralWidget( imageCaptureWindow );

	cameraDockWindow = new QDockWidget( tr("Camera Settings"),this );
	cameraDockWindow->setAllowedAreas( Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea );
	cameraDockWindow->setMaximumSize( Astro_MainWindow::size() /4 );
	
	addDockWidget( Qt::LeftDockWidgetArea, imageCaptureWindow );
	addDockWidget( Qt::RightDockWidgetArea, cameraDockWindow );
}