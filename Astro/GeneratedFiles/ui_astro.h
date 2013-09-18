/********************************************************************************
** Form generated from reading UI file 'astro.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASTRO_H
#define UI_ASTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AstroClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AstroClass)
    {
        if (AstroClass->objectName().isEmpty())
            AstroClass->setObjectName(QStringLiteral("AstroClass"));
        AstroClass->resize(600, 400);
        menuBar = new QMenuBar(AstroClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        AstroClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AstroClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        AstroClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(AstroClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        AstroClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(AstroClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AstroClass->setStatusBar(statusBar);

        retranslateUi(AstroClass);

        QMetaObject::connectSlotsByName(AstroClass);
    } // setupUi

    void retranslateUi(QMainWindow *AstroClass)
    {
        AstroClass->setWindowTitle(QApplication::translate("AstroClass", "Astro", 0));
    } // retranslateUi

};

namespace Ui {
    class AstroClass: public Ui_AstroClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASTRO_H
