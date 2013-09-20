/*	Astro_MainWIndow.h
*/

#pragma once

#ifndef _ASTRO_MAINWINDOW__H
#define _ASTRO_MAINWINDOW__H

#define	VERSION "Version 0.1"

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
	Astro_MdiArea	*mdi_area;

	QMenu			*file_menu;
	QMenu			*help_menu;
	QMenu			*window_menu;

	QToolBar		*main_toolbar;

	QAction			*quit;
	QAction			*cameraWindow;
	QAction			*about;
	
	void			create_actions();
	void			create_menus();
	void			create_toolbars();
	void			create_statusbar();

private slots:
	void display_about();
	void display_cameraWindow();
	void shutdown();
	void update_menus();
};

#endif //_ASTRO_MAINWINDOW__H