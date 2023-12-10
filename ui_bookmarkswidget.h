/********************************************************************************
** Form generated from reading UI file 'bookmarkswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKMARKSWIDGET_H
#define UI_BOOKMARKSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookmarksWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *filterEdit;
    QTreeView *treeView;

    void setupUi(QWidget *BookmarksWidget)
    {
        if (BookmarksWidget->objectName().isEmpty())
            BookmarksWidget->setObjectName(QString::fromUtf8("BookmarksWidget"));
        BookmarksWidget->resize(323, 450);
        gridLayout = new QGridLayout(BookmarksWidget);
        gridLayout->setSpacing(1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(1, 1, 1, 1);
        label = new QLabel(BookmarksWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        filterEdit = new QLineEdit(BookmarksWidget);
        filterEdit->setObjectName(QString::fromUtf8("filterEdit"));

        gridLayout->addWidget(filterEdit, 0, 1, 1, 1);

        treeView = new QTreeView(BookmarksWidget);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setAlternatingRowColors(true);

        gridLayout->addWidget(treeView, 1, 0, 1, 2);


        retranslateUi(BookmarksWidget);

        QMetaObject::connectSlotsByName(BookmarksWidget);
    } // setupUi

    void retranslateUi(QWidget *BookmarksWidget)
    {
        label->setText(QCoreApplication::translate("BookmarksWidget", "Filter:", nullptr));
        (void)BookmarksWidget;
    } // retranslateUi

};

namespace Ui {
    class BookmarksWidget: public Ui_BookmarksWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKMARKSWIDGET_H
