/*
	Astro_MdiChild.h
	*/

#ifndef _ASTRO_MDICHILD__H
#define _ASTRO_MDICHILD__H

#include <qtextedit.h>

class Astro_MdiArea;

class Astro_MdiChild : public QWidget
{
	Q_OBJECT

public:
	Astro_MdiChild();
	Astro_MdiChild( QString string );
	Astro_MdiChild( QString string, Astro_MdiArea *mdiArea );

private:
	Astro_MdiArea	*mdi_area;

	void closeEvent( QCloseEvent *event );
};

#endif // _ASTRO_MDICHILD__H