#ifndef ASTRO_H
#define ASTRO_H

#include <QtWidgets/QMainWindow>
#include "ui_astro.h"

class Astro : public QMainWindow
{
	Q_OBJECT

public:
	Astro(QWidget *parent = 0);
	~Astro();

private:
	Ui::AstroClass ui;
};

#endif // ASTRO_H
