/********************************************************************************
** Form generated from reading UI file 'qterminal.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTERMINAL_H
#define UI_QTERMINAL_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>
#include "vm_viewer/qterminal/tabwidget.h"

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    QAction *actAbout;
    QAction *actAboutQt;
    QAction *actProperties;
    QAction *actQuit;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    TabWidget *consoleTabulator;
    QMenuBar *m_menuBar;
    QMenu *menu_File;
    QMenu *menu_Actions;
    QMenu *menu_Help;
    QMenu *menu_Window;
    QMenu *menu_Edit;

    void setupUi(QMainWindow *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName(QString::fromUtf8("mainWindow"));
        mainWindow->resize(600, 420);
        mainWindow->setAutoFillBackground(true);
        mainWindow->setLocale(QLocale(QLocale::C, QLocale::AnyCountry));
        actAbout = new QAction(mainWindow);
        actAbout->setObjectName(QString::fromUtf8("actAbout"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("help-about");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        actAbout->setIcon(icon);
        actAboutQt = new QAction(mainWindow);
        actAboutQt->setObjectName(QString::fromUtf8("actAboutQt"));
        actProperties = new QAction(mainWindow);
        actProperties->setObjectName(QString::fromUtf8("actProperties"));
        actQuit = new QAction(mainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("application-exit");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        actQuit->setIcon(icon1);
        centralwidget = new QWidget(mainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        consoleTabulator = new TabWidget(centralwidget);
        consoleTabulator->setObjectName(QString::fromUtf8("consoleTabulator"));
        consoleTabulator->setMinimumSize(QSize(320, 200));
        consoleTabulator->setLocale(QLocale(QLocale::C, QLocale::AnyCountry));
        consoleTabulator->setTabPosition(QTabWidget::South);
        consoleTabulator->setTabShape(QTabWidget::Rounded);
        consoleTabulator->setElideMode(Qt::ElideNone);

        gridLayout->addWidget(consoleTabulator, 0, 0, 1, 1);

        mainWindow->setCentralWidget(centralwidget);
        m_menuBar = new QMenuBar(mainWindow);
        m_menuBar->setObjectName(QString::fromUtf8("m_menuBar"));
        m_menuBar->setGeometry(QRect(0, 0, 600, 20));
        menu_File = new QMenu(m_menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Actions = new QMenu(m_menuBar);
        menu_Actions->setObjectName(QString::fromUtf8("menu_Actions"));
        menu_Help = new QMenu(m_menuBar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        menu_Window = new QMenu(m_menuBar);
        menu_Window->setObjectName(QString::fromUtf8("menu_Window"));
        menu_Edit = new QMenu(m_menuBar);
        menu_Edit->setObjectName(QString::fromUtf8("menu_Edit"));
        mainWindow->setMenuBar(m_menuBar);

        m_menuBar->addAction(menu_File->menuAction());
        m_menuBar->addAction(menu_Actions->menuAction());
        m_menuBar->addAction(menu_Edit->menuAction());
        m_menuBar->addAction(menu_Window->menuAction());
        m_menuBar->addAction(menu_Help->menuAction());
        menu_Help->addAction(actAbout);
        menu_Help->addAction(actAboutQt);

        retranslateUi(mainWindow);

        consoleTabulator->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainWindow)
    {
        mainWindow->setWindowTitle(QCoreApplication::translate("mainWindow", "MainWindow", nullptr));
        actAbout->setText(QCoreApplication::translate("mainWindow", "About...", nullptr));
        actAboutQt->setText(QCoreApplication::translate("mainWindow", "About Qt...", nullptr));
        actProperties->setText(QCoreApplication::translate("mainWindow", "&Preferences...", nullptr));
        actQuit->setText(QCoreApplication::translate("mainWindow", "&Quit", nullptr));
        menu_File->setTitle(QCoreApplication::translate("mainWindow", "File", nullptr));
        menu_File->setProperty("Title", QVariant(QString()));
        menu_Actions->setTitle(QCoreApplication::translate("mainWindow", "Actions", nullptr));
        menu_Help->setTitle(QCoreApplication::translate("mainWindow", "Help", nullptr));
        menu_Window->setTitle(QCoreApplication::translate("mainWindow", "View", nullptr));
        menu_Edit->setTitle(QCoreApplication::translate("mainWindow", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTERMINAL_H
