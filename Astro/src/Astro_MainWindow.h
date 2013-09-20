/*	Astro_MainWIndow.h
*/

#pragma once

#ifndef _ASTRO_MAINWINDOW__H
#define _ASTRO_MAINWINDOW__H

#include <qmainwindow.h>
#include <qapplication.h>
#include <qmenu.h>
#include <qmenubar.h>
#include <qtoolbar.h>
#include <qbrush.h>
#include <qimage.h>
#include <qmessagebox.h>
#include <qmdisubwindow.h>
#include <qstatusbar.h>
#include <QtWidgets\qtoolbar.h>

#include "Astro_MdiArea.h"



class Astro_MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	// constructor
	Astro_MainWindow();

private:
	//QMdiArea		*mdi_area;
	//QMdiSubWindow	*find_mdi_child( const QString &fileName );
	Astro_MdiArea	*mdi_area;

	QMenu			*file_menu;
	QMenu			*help_menu;
	QMenu			*window_menu;

	QToolBar		*main_toolbar;

	QAction			*quit;
	QAction			*about;
	
	void			create_actions();
	void			create_menus();
	void			create_toolbars();
	void			create_statusbar();

private slots:
	void display_about();
	void shutdown();
	void update_menus();
};

#endif //_ASTRO_MAINWINDOW__H