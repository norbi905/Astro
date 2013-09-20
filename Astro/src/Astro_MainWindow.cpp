/*
	Astro_MainWindow.cpp
	*/

#include "Astro_MainWindow.h"

Astro_MainWindow::Astro_MainWindow()
{
	// resize our window on start-up
	this->resize( 800, 600 );

	mdi_area = new Astro_MdiArea( this );
	setCentralWidget( mdi_area );

	create_actions();
	create_menus();
	create_toolbars();
	create_statusbar();
}

void Astro_MainWindow::update_menus()
{
}

void Astro_MainWindow::display_cameraWindow()
{
	mdi_area->cameraWindow();
}

void Astro_MainWindow::display_about()
{
	QMessageBox::about( this, "About", VERSION );
}

void Astro_MainWindow::shutdown()
{
}

void Astro_MainWindow::create_actions()
{
	about = new QAction( "About...", this );
	about->setStatusTip( "About..." );
	connect( about, SIGNAL( triggered()), this, SLOT( display_about()));

	quit = new QAction( "Quit", this );
	quit->setStatusTip( "Quit application" );
	connect( quit, SIGNAL( triggered()), this, SLOT( shutdown()));

	cameraWindow = new QAction( "Camera", this );
	cameraWindow->setStatusTip( "Camera" );
	connect( cameraWindow, SIGNAL(triggered()), this, SLOT( display_cameraWindow()));
}

void Astro_MainWindow::create_menus()
{
	//file_menu = new QMenu( this );
	file_menu = menuBar()->addMenu( tr("&File") );
	file_menu->addSeparator();
	file_menu->addAction( quit );

	window_menu = menuBar()->addMenu( "&Window" );

	help_menu = menuBar()->addMenu( "&Help" );
	help_menu->addAction( about );
}

void Astro_MainWindow::create_statusbar()
{
	statusBar()->showMessage( "Ready" );
}

void Astro_MainWindow::create_toolbars()
{
	main_toolbar = addToolBar( "Quit" );
	main_toolbar->addAction( quit );
	main_toolbar = addToolBar( "Camera" );
	main_toolbar->addAction( cameraWindow );
}




