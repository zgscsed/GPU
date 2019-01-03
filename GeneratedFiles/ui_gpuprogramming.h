/********************************************************************************
** Form generated from reading UI file 'gpuprogramming.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPUPROGRAMMING_H
#define UI_GPUPROGRAMMING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GPUprogramming
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GPUprogramming)
    {
        if (GPUprogramming->objectName().isEmpty())
            GPUprogramming->setObjectName(QStringLiteral("GPUprogramming"));
        GPUprogramming->resize(400, 300);
        menuBar = new QMenuBar(GPUprogramming);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        GPUprogramming->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GPUprogramming);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GPUprogramming->addToolBar(mainToolBar);
        centralWidget = new QWidget(GPUprogramming);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        GPUprogramming->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(GPUprogramming);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GPUprogramming->setStatusBar(statusBar);

        retranslateUi(GPUprogramming);

        QMetaObject::connectSlotsByName(GPUprogramming);
    } // setupUi

    void retranslateUi(QMainWindow *GPUprogramming)
    {
        GPUprogramming->setWindowTitle(QApplication::translate("GPUprogramming", "GPUprogramming", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GPUprogramming: public Ui_GPUprogramming {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPUPROGRAMMING_H
