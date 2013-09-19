/*	Astro_MainWIndow.h
*/

#ifndef _ASTRO_MAINWINDOW__H
#define _ASTRO_MAINWINDOW__H

#include <qmainwindow.h>
#include <qapplication.h>
#include <qmenu.h>
#include <qmenubar.h>
#include <qmessagebox.h>
#include <QtWidgets\qwidget.h>
#include <QtWidgets\qdockwidget.h>
#include <QtWidgets\qdesktopwidget.h>

class Astro_MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	// constructor
	Astro_MainWindow();

	void init();

private:
	QDockWidget		*cameraDockWindow;
	QDockWidget		*imageCaptureWindow;
	QDockWidget		*tmp;
	QDesktopWidget	*desktop;

	QAction			*quit;
	QAction			*about;

	QMenu			*file;
	QMenu			*help;

	int				screenWidth, screenHeight;

	void	CreateMenu( int width, int height );
	void	CreateDockWindows();

private slots:
	void display_about();
};

#endif //_ASTRO_MAINWINDOW__H