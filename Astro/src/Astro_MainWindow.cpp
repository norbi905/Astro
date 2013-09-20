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
	
	/*
	//QImage bg_image( tr("bg_image.jpg") );
	QPixmap bg( "bg_image.jpg" );
	//bg_image.scaled( 100,100 );
	QBrush	bg_image( Qt::TexturePattern );
	bg_image.setStyle( Qt::TexturePattern);
	bg_image.setTexture( bg );
	
	// create MDI area
	mdi_area = new QMdiArea;
	mdi_area->setBackground( bg_image );
	mdi_area->setHorizontalScrollBarPolicy( Qt::ScrollBarAsNeeded );
	mdi_area->setVerticalScrollBarPolicy( Qt::ScrollBarAsNeeded );
	setCentralWidget( mdi_area );
	connect( mdi_area, SIGNAL( subWindowActivated( QMdiSubWindow* )), this, SLOT( update_menus()));
	*/

	create_actions();
	create_menus();
	create_toolbars();
	create_statusbar();
}

void Astro_MainWindow::update_menus()
{
}

void Astro_MainWindow::display_about()
{
	QMessageBox::about( this, "About", "Version x.x" );
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
}




