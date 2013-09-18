/*
	Astro_MenuBar.cpp
	*/

#include	"Astro_MenuBar.h"
#include	<qmenu.h>
#include	<qmenubar.h>

Astro_MenuBar::Astro_MenuBar( QWidget *parent )
	: QMainWindow( parent )
{
	QAction	*quit = new QAction( "&Quit", this );

	QMenu	*file;
	file = menuBar()->addMenu( "&File" );
	file->addAction(quit);

	connect(quit, SIGNAL(triggered()), qApp, SLOT(quit()));
}
