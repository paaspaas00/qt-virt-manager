/********************************************************************************
** Form generated from reading UI file 'fontdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FONTDIALOG_H
#define UI_FONTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_FontDialog
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QFormLayout *formLayout;
    QLabel *label;
    QFontComboBox *fontComboBox;
    QLabel *label_2;
    QSpinBox *sizeSpinBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *previewLabel;
    QLabel *label_3;

    void setupUi(QDialog *FontDialog)
    {
        if (FontDialog->objectName().isEmpty())
            FontDialog->setObjectName(QString::fromUtf8("FontDialog"));
        FontDialog->resize(296, 187);
        gridLayout_2 = new QGridLayout(FontDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        buttonBox = new QDialogButtonBox(FontDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 3, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(FontDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        fontComboBox = new QFontComboBox(FontDialog);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, fontComboBox);

        label_2 = new QLabel(FontDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        sizeSpinBox = new QSpinBox(FontDialog);
        sizeSpinBox->setObjectName(QString::fromUtf8("sizeSpinBox"));
        sizeSpinBox->setMinimum(6);
        sizeSpinBox->setValue(10);

        formLayout->setWidget(1, QFormLayout::FieldRole, sizeSpinBox);

        groupBox = new QGroupBox(FontDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        previewLabel = new QLabel(groupBox);
        previewLabel->setObjectName(QString::fromUtf8("previewLabel"));

        gridLayout->addWidget(previewLabel, 0, 0, 1, 1);


        formLayout->setWidget(2, QFormLayout::FieldRole, groupBox);


        gridLayout_2->addLayout(formLayout, 1, 0, 1, 1);

        label_3 = new QLabel(FontDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);


        retranslateUi(FontDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FontDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FontDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FontDialog);
    } // setupUi

    void retranslateUi(QDialog *FontDialog)
    {
        FontDialog->setWindowTitle(QCoreApplication::translate("FontDialog", "Select Terminal Font", nullptr));
        label->setText(QCoreApplication::translate("FontDialog", "Font:", nullptr));
        label_2->setText(QCoreApplication::translate("FontDialog", "Size:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FontDialog", "Preview", nullptr));
        label_3->setText(QCoreApplication::translate("FontDialog", "Select Terminal Font", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FontDialog: public Ui_FontDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FONTDIALOG_H
