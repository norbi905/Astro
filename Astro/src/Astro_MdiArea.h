/*
	Astro_MdiArea.h
	*/

#pragma once;

#ifndef _ASTRO_MDIAREA__H
#define _ASTRO_MDIAREA__H

#include <qmainwindow.h>
#include <qmdiarea.h>
#include <qpainter.h>

//#include "Astro_MainWindow.h"

class Astro_MainWindow;

class Astro_MdiArea : public QMdiArea
{
	Q_OBJECT
	
public:
	Astro_MdiArea();
	Astro_MdiArea( Astro_MainWindow *mainWindow );

	Astro_MainWindow	*mainWindow;

	QBrush		*brush;

private:
	void paintEvent( QPaintEvent *paintEvent );
};

#endif // _ASTRO__MDIAREA__H