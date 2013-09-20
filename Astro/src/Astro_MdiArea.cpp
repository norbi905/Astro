/*
	Astro_MdiArea.cpp
	*/

#include "Astro_MdiArea.h"
#include "Astro_MainWindow.h"

Astro_MdiArea::Astro_MdiArea()
{
	// do stuff
}

Astro_MdiArea::Astro_MdiArea( Astro_MainWindow	*m_Window )
{
	mainWindow = m_Window;

	brush = new QBrush();
	
}

void Astro_MdiArea::cameraWindow()
{
	Astro_MdiChild *child = new Astro_MdiChild( "Camera" );
	this->addSubWindow( child );
	child->show();
}

void Astro_MdiArea::paintEvent( QPaintEvent *paintEvent )
{
	QMdiArea::paintEvent( paintEvent );
	QPainter painter( this->viewport() );
	QFont font = painter.font();
	QPen pen;
	pen.setColor( Qt::lightGray );
	font.setPointSize( 60 );
	painter.setFont( font );
	painter.setPen( pen );

	painter.drawText( mainWindow->width() - 250, mainWindow->height() - 80, "ASTRO" );
}
