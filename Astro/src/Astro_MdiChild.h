/*
	Astro_MdiChild.h
	*/

#ifndef _ASTRO_MDICHILD__H
#define _ASTRO_MDICHILD__H

#include <qtextedit.h>

class Astro_MdiChild : public QWidget
{
	Q_OBJECT

public:
	Astro_MdiChild();
	Astro_MdiChild( QString string );
};

#endif // _ASTRO_MDICHILD__H