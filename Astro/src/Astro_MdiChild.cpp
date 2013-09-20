/*
	Astro_MdiChild.cpp
	*/

#include "Astro_MdiChild.h"

Astro_MdiChild::Astro_MdiChild()
{
	// do something
}

Astro_MdiChild::Astro_MdiChild( QString string )
{
	this->setWindowTitle( string );
}