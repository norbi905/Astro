/*	Astro_MainWIndow.h
*/

#ifndef _ASTRO_MAINWINDOW__H
#define _ASTRO_MAINWINDOW__H

#include <qmainwindow.h>
#include <qapplication.h>
#include <qmenu.h>
#include <qmenubar.h>
#include <qmessagebox.h>
#include <QtWidgets\qtextedit.h>
#include <QtWidgets\qwidget.h>
#include <QtWidgets\qdockwidget.h>
#include <QtWidgets\qdesktopwidget.h>

class Astro_MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	// constructor
	Astro_MainWindow();

private:
	
	QAction			*quit;
	QAction			*about;

	QMenu			*file;
	QMenu			*help;

private slots:
	void display_about();
};

#endif //_ASTRO_MAINWINDOW__H