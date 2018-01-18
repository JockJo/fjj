/********************************************************************************
** Form generated from reading UI file 'edumana.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDUMANA_H
#define UI_EDUMANA_H

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

class Ui_edumana
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *edumana)
    {
        if (edumana->objectName().isEmpty())
            edumana->setObjectName(QStringLiteral("edumana"));
        edumana->resize(400, 300);
        menuBar = new QMenuBar(edumana);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        edumana->setMenuBar(menuBar);
        mainToolBar = new QToolBar(edumana);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        edumana->addToolBar(mainToolBar);
        centralWidget = new QWidget(edumana);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        edumana->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(edumana);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        edumana->setStatusBar(statusBar);

        retranslateUi(edumana);

        QMetaObject::connectSlotsByName(edumana);
    } // setupUi

    void retranslateUi(QMainWindow *edumana)
    {
        edumana->setWindowTitle(QApplication::translate("edumana", "edumana", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edumana: public Ui_edumana {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDUMANA_H
