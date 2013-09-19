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

	this->resize( 800, 600 );

	CreateMenu( screenWidth, screenHeight );
	CreateDockWindows();
}

void Astro_MainWindow::CreateMenu( int width, int height )
{
	openFile = new QAction( "&Open Image...", this );
	quit = new QAction( "&Quit", this );
	about = new QAction( "&About", this );

	file = menuBar()->addMenu( "&File" );
	file->addAction( openFile );
	file->addAction( quit );
	
	help = menuBar()->addMenu( "&Help" );
	help->addAction( about );
	

	connect( quit, SIGNAL(triggered()), qApp, SLOT(quit()));
	connect( about, SIGNAL(triggered()), this, SLOT(display_about()));
	connect( openFile, SIGNAL(triggered()), this, SLOT(open_file()));
}

void Astro_MainWindow::CreateDockWindows()
{
	imageCaptureWindow = new QDockWidget( "Image Viewer", this );
	imageCaptureWindow->setAllowedAreas( Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea );
	imageCaptureWindow->setFeatures( QDockWidget::NoDockWidgetFeatures );
	
	imageCaptureWindow->setMinimumSize( 600, 600 );
	//setCentralWidget( imageCaptureWindow );
	addDockWidget( Qt::LeftDockWidgetArea, imageCaptureWindow );
	
	cameraDockWindow = new QDockWidget( "Camera",this );
	cameraDockWindow->setAllowedAreas( Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea );
	cameraDockWindow->setFeatures( QDockWidget::DockWidgetFloatable );
	cameraDockWindow->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
	//cameraDockWindow->setFixedWidth( 200 );
	addDockWidget( Qt::RightDockWidgetArea, cameraDockWindow );

	tmp = new QDockWidget( "TEMP", this );
	tmp->setAllowedAreas( Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea );
	tmp->setFeatures( QDockWidget::DockWidgetFloatable );
	tmp->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
	//tmp->setFixedWidth( 200 );
	addDockWidget( Qt::RightDockWidgetArea, tmp );

}

void Astro_MainWindow::display_about()
{
	QMessageBox	msgBox;
	msgBox.setText( "Version x.x" );
	msgBox.exec();
}