/********************************************************************************
** Form generated from reading UI file 'propertiesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTIESDIALOG_H
#define UI_PROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PropertiesDialog
{
public:
    QGridLayout *gridLayout_4;
    QDialogButtonBox *buttonBox;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *lookAndFeelPage;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QComboBox *colorSchemaCombo;
    QLabel *label_6;
    QComboBox *styleComboBox;
    QLabel *label_7;
    QComboBox *scrollBarPos_comboBox;
    QLabel *label_8;
    QComboBox *tabsPos_comboBox;
    QCheckBox *showMenuCheckBox;
    QCheckBox *alwaysShowTabsCheckBox;
    QCheckBox *highlightCurrentCheckBox;
    QLabel *label_4;
    QSpinBox *appOpacityBox;
    QLabel *label;
    QSpinBox *termOpacityBox;
    QLabel *label_9;
    QComboBox *terminalPresetComboBox;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *fontSampleLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *changeFontButton;
    QWidget *historyPage;
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_6;
    QComboBox *emulationComboBox;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QSpinBox *historyLimitedTo;
    QSpacerItem *verticalSpacer_4;
    QCheckBox *useCwdCheckBox;
    QCheckBox *askOnExitCheckBox;
    QComboBox *motionAfterPasting_comboBox;
    QRadioButton *historyUnlimited;
    QRadioButton *historyLimited;
    QWidget *shortcutsPage;
    QVBoxLayout *verticalLayout;
    QTableWidget *shortcutsWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *dropShowOnStartCheckBox;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *dropHeightLabel;
    QSpinBox *dropHeightSpinBox;
    QLabel *dropWidthLabel;
    QSpinBox *dropWidthSpinBox;
    QFormLayout *formLayout_2;
    QLabel *dropShortCutLabel;
    QLineEdit *dropShortCutEdit;
    QSpacerItem *verticalSpacer_5;
    QWidget *page_2;
    QGridLayout *gridLayout_9;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_10;
    QPlainTextEdit *bookmarkPlainEdit;
    QCheckBox *useBookmarksCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QLineEdit *bookmarksLineEdit;
    QPushButton *bookmarksButton;
    QLabel *label_11;

    void setupUi(QDialog *PropertiesDialog)
    {
        if (PropertiesDialog->objectName().isEmpty())
            PropertiesDialog->setObjectName(QString::fromUtf8("PropertiesDialog"));
        PropertiesDialog->resize(688, 487);
        gridLayout_4 = new QGridLayout(PropertiesDialog);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        buttonBox = new QDialogButtonBox(PropertiesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 2, 0, 1, 3);

        listWidget = new QListWidget(PropertiesDialog);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMinimumSize(QSize(100, 0));
        listWidget->setMaximumSize(QSize(100, 16777215));
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_4->addWidget(listWidget, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(PropertiesDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setFrameShape(QFrame::StyledPanel);
        lookAndFeelPage = new QWidget();
        lookAndFeelPage->setObjectName(QString::fromUtf8("lookAndFeelPage"));
        gridLayout_3 = new QGridLayout(lookAndFeelPage);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(lookAndFeelPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        colorSchemaCombo = new QComboBox(lookAndFeelPage);
        colorSchemaCombo->setObjectName(QString::fromUtf8("colorSchemaCombo"));

        gridLayout_3->addWidget(colorSchemaCombo, 1, 1, 1, 1);

        label_6 = new QLabel(lookAndFeelPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 2, 0, 1, 1);

        styleComboBox = new QComboBox(lookAndFeelPage);
        styleComboBox->setObjectName(QString::fromUtf8("styleComboBox"));

        gridLayout_3->addWidget(styleComboBox, 2, 1, 1, 1);

        label_7 = new QLabel(lookAndFeelPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 3, 0, 1, 1);

        scrollBarPos_comboBox = new QComboBox(lookAndFeelPage);
        scrollBarPos_comboBox->setObjectName(QString::fromUtf8("scrollBarPos_comboBox"));

        gridLayout_3->addWidget(scrollBarPos_comboBox, 3, 1, 1, 1);

        label_8 = new QLabel(lookAndFeelPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 4, 0, 1, 1);

        tabsPos_comboBox = new QComboBox(lookAndFeelPage);
        tabsPos_comboBox->setObjectName(QString::fromUtf8("tabsPos_comboBox"));

        gridLayout_3->addWidget(tabsPos_comboBox, 4, 1, 1, 1);

        showMenuCheckBox = new QCheckBox(lookAndFeelPage);
        showMenuCheckBox->setObjectName(QString::fromUtf8("showMenuCheckBox"));

        gridLayout_3->addWidget(showMenuCheckBox, 5, 0, 1, 1);

        alwaysShowTabsCheckBox = new QCheckBox(lookAndFeelPage);
        alwaysShowTabsCheckBox->setObjectName(QString::fromUtf8("alwaysShowTabsCheckBox"));

        gridLayout_3->addWidget(alwaysShowTabsCheckBox, 6, 0, 1, 1);

        highlightCurrentCheckBox = new QCheckBox(lookAndFeelPage);
        highlightCurrentCheckBox->setObjectName(QString::fromUtf8("highlightCurrentCheckBox"));

        gridLayout_3->addWidget(highlightCurrentCheckBox, 7, 0, 1, 1);

        label_4 = new QLabel(lookAndFeelPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 8, 0, 1, 1);

        appOpacityBox = new QSpinBox(lookAndFeelPage);
        appOpacityBox->setObjectName(QString::fromUtf8("appOpacityBox"));
        appOpacityBox->setMinimum(1);
        appOpacityBox->setMaximum(100);
        appOpacityBox->setValue(100);

        gridLayout_3->addWidget(appOpacityBox, 8, 1, 1, 1);

        label = new QLabel(lookAndFeelPage);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 9, 0, 1, 1);

        termOpacityBox = new QSpinBox(lookAndFeelPage);
        termOpacityBox->setObjectName(QString::fromUtf8("termOpacityBox"));
        termOpacityBox->setMinimum(1);
        termOpacityBox->setValue(99);

        gridLayout_3->addWidget(termOpacityBox, 9, 1, 1, 1);

        label_9 = new QLabel(lookAndFeelPage);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 10, 0, 1, 1);

        terminalPresetComboBox = new QComboBox(lookAndFeelPage);
        terminalPresetComboBox->addItem(QString());
        terminalPresetComboBox->addItem(QString());
        terminalPresetComboBox->addItem(QString());
        terminalPresetComboBox->addItem(QString());
        terminalPresetComboBox->setObjectName(QString::fromUtf8("terminalPresetComboBox"));

        gridLayout_3->addWidget(terminalPresetComboBox, 10, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 11, 0, 1, 2);

        groupBox = new QGroupBox(lookAndFeelPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        fontSampleLabel = new QLabel(groupBox);
        fontSampleLabel->setObjectName(QString::fromUtf8("fontSampleLabel"));
        fontSampleLabel->setFrameShape(QFrame::StyledPanel);
        fontSampleLabel->setWordWrap(true);

        gridLayout->addWidget(fontSampleLabel, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(117, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        changeFontButton = new QPushButton(groupBox);
        changeFontButton->setObjectName(QString::fromUtf8("changeFontButton"));

        gridLayout->addWidget(changeFontButton, 1, 3, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 2);

        stackedWidget->addWidget(lookAndFeelPage);
        historyPage = new QWidget();
        historyPage->setObjectName(QString::fromUtf8("historyPage"));
        gridLayout_5 = new QGridLayout(historyPage);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalSpacer_2 = new QSpacerItem(20, 57, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 2, 0, 1, 1);

        groupBox_4 = new QGroupBox(historyPage);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_6 = new QGridLayout(groupBox_4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        emulationComboBox = new QComboBox(groupBox_4);
        emulationComboBox->setObjectName(QString::fromUtf8("emulationComboBox"));

        gridLayout_6->addWidget(emulationComboBox, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setTextFormat(Qt::RichText);
        label_2->setWordWrap(true);

        gridLayout_6->addWidget(label_2, 1, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_4, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(historyPage);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        historyLimitedTo = new QSpinBox(groupBox_2);
        historyLimitedTo->setObjectName(QString::fromUtf8("historyLimitedTo"));
        historyLimitedTo->setMinimum(100);
        historyLimitedTo->setMaximum(1000000);
        historyLimitedTo->setValue(1000);

        gridLayout_2->addWidget(historyLimitedTo, 0, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(150, 139, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 5, 1, 1, 1);

        useCwdCheckBox = new QCheckBox(groupBox_2);
        useCwdCheckBox->setObjectName(QString::fromUtf8("useCwdCheckBox"));

        gridLayout_2->addWidget(useCwdCheckBox, 4, 0, 1, 3);

        askOnExitCheckBox = new QCheckBox(groupBox_2);
        askOnExitCheckBox->setObjectName(QString::fromUtf8("askOnExitCheckBox"));

        gridLayout_2->addWidget(askOnExitCheckBox, 3, 0, 1, 3);

        motionAfterPasting_comboBox = new QComboBox(groupBox_2);
        motionAfterPasting_comboBox->setObjectName(QString::fromUtf8("motionAfterPasting_comboBox"));

        gridLayout_2->addWidget(motionAfterPasting_comboBox, 2, 2, 1, 1);

        historyUnlimited = new QRadioButton(groupBox_2);
        historyUnlimited->setObjectName(QString::fromUtf8("historyUnlimited"));

        gridLayout_2->addWidget(historyUnlimited, 1, 0, 1, 3);

        historyLimited = new QRadioButton(groupBox_2);
        historyLimited->setObjectName(QString::fromUtf8("historyLimited"));

        gridLayout_2->addWidget(historyLimited, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 0, 0, 1, 1);

        stackedWidget->addWidget(historyPage);
        shortcutsPage = new QWidget();
        shortcutsPage->setObjectName(QString::fromUtf8("shortcutsPage"));
        verticalLayout = new QVBoxLayout(shortcutsPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        shortcutsWidget = new QTableWidget(shortcutsPage);
        if (shortcutsWidget->columnCount() < 2)
            shortcutsWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        shortcutsWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        shortcutsWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        shortcutsWidget->setObjectName(QString::fromUtf8("shortcutsWidget"));
        shortcutsWidget->setAlternatingRowColors(true);
        shortcutsWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        shortcutsWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        shortcutsWidget->setSortingEnabled(true);
        shortcutsWidget->horizontalHeader()->setDefaultSectionSize(105);
        shortcutsWidget->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(shortcutsWidget);

        stackedWidget->addWidget(shortcutsPage);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        dropShowOnStartCheckBox = new QCheckBox(page);
        dropShowOnStartCheckBox->setObjectName(QString::fromUtf8("dropShowOnStartCheckBox"));

        verticalLayout_3->addWidget(dropShowOnStartCheckBox);

        groupBox_3 = new QGroupBox(page);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        dropHeightLabel = new QLabel(groupBox_3);
        dropHeightLabel->setObjectName(QString::fromUtf8("dropHeightLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, dropHeightLabel);

        dropHeightSpinBox = new QSpinBox(groupBox_3);
        dropHeightSpinBox->setObjectName(QString::fromUtf8("dropHeightSpinBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, dropHeightSpinBox);

        dropWidthLabel = new QLabel(groupBox_3);
        dropWidthLabel->setObjectName(QString::fromUtf8("dropWidthLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, dropWidthLabel);

        dropWidthSpinBox = new QSpinBox(groupBox_3);
        dropWidthSpinBox->setObjectName(QString::fromUtf8("dropWidthSpinBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, dropWidthSpinBox);


        verticalLayout_2->addLayout(formLayout);


        verticalLayout_3->addWidget(groupBox_3);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        dropShortCutLabel = new QLabel(page);
        dropShortCutLabel->setObjectName(QString::fromUtf8("dropShortCutLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, dropShortCutLabel);

        dropShortCutEdit = new QLineEdit(page);
        dropShortCutEdit->setObjectName(QString::fromUtf8("dropShortCutEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, dropShortCutEdit);


        verticalLayout_3->addLayout(formLayout_2);

        verticalSpacer_5 = new QSpacerItem(20, 78, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_9 = new QGridLayout(page_2);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        groupBox_5 = new QGroupBox(page_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_10 = new QGridLayout(groupBox_5);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        bookmarkPlainEdit = new QPlainTextEdit(groupBox_5);
        bookmarkPlainEdit->setObjectName(QString::fromUtf8("bookmarkPlainEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("Bera Sans Mono [bitstream]"));
        font.setPointSize(11);
        bookmarkPlainEdit->setFont(font);
        bookmarkPlainEdit->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout_10->addWidget(bookmarkPlainEdit, 0, 0, 1, 1);


        gridLayout_9->addWidget(groupBox_5, 3, 0, 1, 1);

        useBookmarksCheckBox = new QCheckBox(page_2);
        useBookmarksCheckBox->setObjectName(QString::fromUtf8("useBookmarksCheckBox"));

        gridLayout_9->addWidget(useBookmarksCheckBox, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_10 = new QLabel(page_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout->addWidget(label_10);

        bookmarksLineEdit = new QLineEdit(page_2);
        bookmarksLineEdit->setObjectName(QString::fromUtf8("bookmarksLineEdit"));

        horizontalLayout->addWidget(bookmarksLineEdit);

        bookmarksButton = new QPushButton(page_2);
        bookmarksButton->setObjectName(QString::fromUtf8("bookmarksButton"));

        horizontalLayout->addWidget(bookmarksButton);


        gridLayout_9->addLayout(horizontalLayout, 1, 0, 1, 1);

        label_11 = new QLabel(page_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setWordWrap(true);

        gridLayout_9->addWidget(label_11, 2, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout_4->addWidget(stackedWidget, 0, 2, 1, 1);

#if QT_CONFIG(shortcut)
        label_4->setBuddy(appOpacityBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(PropertiesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PropertiesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PropertiesDialog, SLOT(reject()));
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *PropertiesDialog)
    {
        PropertiesDialog->setWindowTitle(QCoreApplication::translate("PropertiesDialog", "Terminal settings", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("PropertiesDialog", "Appearance", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("PropertiesDialog", "Behavior", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("PropertiesDialog", "Shortcuts", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("PropertiesDialog", "Dropdown", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("PropertiesDialog", "Bookmarks", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_5->setText(QCoreApplication::translate("PropertiesDialog", "Color scheme", nullptr));
        label_6->setText(QCoreApplication::translate("PropertiesDialog", "Widget style", nullptr));
        label_7->setText(QCoreApplication::translate("PropertiesDialog", "Scrollbar position", nullptr));
        label_8->setText(QCoreApplication::translate("PropertiesDialog", "Tabs position", nullptr));
        showMenuCheckBox->setText(QCoreApplication::translate("PropertiesDialog", "Show the menu bar", nullptr));
        alwaysShowTabsCheckBox->setText(QCoreApplication::translate("PropertiesDialog", "Always show the tab bar", nullptr));
        highlightCurrentCheckBox->setText(QCoreApplication::translate("PropertiesDialog", "Show a border around the current terminal", nullptr));
        label_4->setText(QCoreApplication::translate("PropertiesDialog", "Application transparency", nullptr));
        appOpacityBox->setSuffix(QCoreApplication::translate("PropertiesDialog", " %", nullptr));
        label->setText(QCoreApplication::translate("PropertiesDialog", "Terminal transparency", nullptr));
        termOpacityBox->setSuffix(QCoreApplication::translate("PropertiesDialog", " %", nullptr));
        label_9->setText(QCoreApplication::translate("PropertiesDialog", "Start with preset:", nullptr));
        terminalPresetComboBox->setItemText(0, QCoreApplication::translate("PropertiesDialog", "None (single terminal)", nullptr));
        terminalPresetComboBox->setItemText(1, QCoreApplication::translate("PropertiesDialog", "2 terminals horizontally", nullptr));
        terminalPresetComboBox->setItemText(2, QCoreApplication::translate("PropertiesDialog", "2 terminals vertically", nullptr));
        terminalPresetComboBox->setItemText(3, QCoreApplication::translate("PropertiesDialog", "4 terminals", nullptr));

        groupBox->setTitle(QCoreApplication::translate("PropertiesDialog", "Font", nullptr));
        fontSampleLabel->setText(QString());
        changeFontButton->setText(QCoreApplication::translate("PropertiesDialog", "&Set Font...", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("PropertiesDialog", "Emulation", nullptr));
        label_2->setText(QCoreApplication::translate("PropertiesDialog", "<html><head/><body><p>Which behavior to emulate. Note that this does not have to match your operating system.</p><p>The <span style=\" font-weight:600;\">default</span> emulation is a fallback with a minimal featureset.</p></body></html>", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("PropertiesDialog", "Behavior", nullptr));
        label_3->setText(QCoreApplication::translate("PropertiesDialog", "Action after paste", nullptr));
        useCwdCheckBox->setText(QCoreApplication::translate("PropertiesDialog", "Open new terminals in current working directory", nullptr));
        askOnExitCheckBox->setText(QCoreApplication::translate("PropertiesDialog", "Ask for confirmation when closing", nullptr));
        historyUnlimited->setText(QCoreApplication::translate("PropertiesDialog", "Unlimited history", nullptr));
        historyLimited->setText(QCoreApplication::translate("PropertiesDialog", "History size (in lines)", nullptr));
        QTableWidgetItem *___qtablewidgetitem = shortcutsWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("PropertiesDialog", "Shortcut", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = shortcutsWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("PropertiesDialog", "Key", nullptr));
        dropShowOnStartCheckBox->setText(QCoreApplication::translate("PropertiesDialog", "Show on start", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("PropertiesDialog", "Size", nullptr));
        dropHeightLabel->setText(QCoreApplication::translate("PropertiesDialog", "Height", nullptr));
        dropHeightSpinBox->setSuffix(QCoreApplication::translate("PropertiesDialog", "%", nullptr));
        dropWidthLabel->setText(QCoreApplication::translate("PropertiesDialog", "Width", nullptr));
        dropWidthSpinBox->setSuffix(QCoreApplication::translate("PropertiesDialog", "%", nullptr));
        dropShortCutLabel->setText(QCoreApplication::translate("PropertiesDialog", "Shortcut:", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("PropertiesDialog", "Edit bookmark file contents", nullptr));
        useBookmarksCheckBox->setText(QCoreApplication::translate("PropertiesDialog", "Enable bookmarks", nullptr));
        label_10->setText(QCoreApplication::translate("PropertiesDialog", "Bookmark file", nullptr));
        bookmarksButton->setText(QCoreApplication::translate("PropertiesDialog", "Find...", nullptr));
        label_11->setText(QCoreApplication::translate("PropertiesDialog", "You can specify your own bookmarks file location. It allows easy bookmark sharing with tools like OwnCloud or Dropbox.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PropertiesDialog: public Ui_PropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTIESDIALOG_H
