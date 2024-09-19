/********************************************************************************
** Form generated from reading UI file 'LCD.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LCD_H
#define UI_LCD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LCDConfig
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *qgbDevices;
    QVBoxLayout *verticalLayout;
    QTreeWidget *qtwDevices;
    QGroupBox *qgbViews;
    QGridLayout *gridLayout;
    QLabel *qliMinColWidth;
    QSlider *qsMinColWidth;
    QLabel *qlMinColWidth;
    QLabel *qliSplitterWidth;
    QSlider *qsSplitterWidth;
    QLabel *qlSplitterWidth;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *LCDConfig)
    {
        if (LCDConfig->objectName().isEmpty())
            LCDConfig->setObjectName(QString::fromUtf8("LCDConfig"));
        LCDConfig->resize(426, 694);
        verticalLayout_2 = new QVBoxLayout(LCDConfig);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        qgbDevices = new QGroupBox(LCDConfig);
        qgbDevices->setObjectName(QString::fromUtf8("qgbDevices"));
        qgbDevices->setMinimumSize(QSize(160, 43));
        verticalLayout = new QVBoxLayout(qgbDevices);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        qtwDevices = new QTreeWidget(qgbDevices);
        qtwDevices->setObjectName(QString::fromUtf8("qtwDevices"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qtwDevices->sizePolicy().hasHeightForWidth());
        qtwDevices->setSizePolicy(sizePolicy);
        qtwDevices->setItemsExpandable(false);

        verticalLayout->addWidget(qtwDevices);


        verticalLayout_2->addWidget(qgbDevices);

        qgbViews = new QGroupBox(LCDConfig);
        qgbViews->setObjectName(QString::fromUtf8("qgbViews"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qgbViews->sizePolicy().hasHeightForWidth());
        qgbViews->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(qgbViews);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qliMinColWidth = new QLabel(qgbViews);
        qliMinColWidth->setObjectName(QString::fromUtf8("qliMinColWidth"));

        gridLayout->addWidget(qliMinColWidth, 0, 0, 1, 1);

        qsMinColWidth = new QSlider(qgbViews);
        qsMinColWidth->setObjectName(QString::fromUtf8("qsMinColWidth"));
        qsMinColWidth->setMinimum(40);
        qsMinColWidth->setMaximum(200);
        qsMinColWidth->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(qsMinColWidth, 0, 1, 1, 1);

        qlMinColWidth = new QLabel(qgbViews);
        qlMinColWidth->setObjectName(QString::fromUtf8("qlMinColWidth"));
        qlMinColWidth->setMinimumSize(QSize(30, 0));

        gridLayout->addWidget(qlMinColWidth, 0, 2, 1, 1);

        qliSplitterWidth = new QLabel(qgbViews);
        qliSplitterWidth->setObjectName(QString::fromUtf8("qliSplitterWidth"));

        gridLayout->addWidget(qliSplitterWidth, 1, 0, 1, 1);

        qsSplitterWidth = new QSlider(qgbViews);
        qsSplitterWidth->setObjectName(QString::fromUtf8("qsSplitterWidth"));
        qsSplitterWidth->setMinimum(0);
        qsSplitterWidth->setMaximum(5);
        qsSplitterWidth->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(qsSplitterWidth, 1, 1, 1, 1);

        qlSplitterWidth = new QLabel(qgbViews);
        qlSplitterWidth->setObjectName(QString::fromUtf8("qlSplitterWidth"));
        qlSplitterWidth->setMinimumSize(QSize(30, 0));

        gridLayout->addWidget(qlSplitterWidth, 1, 2, 1, 1);


        verticalLayout_2->addWidget(qgbViews);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

#ifndef QT_NO_SHORTCUT
        qliMinColWidth->setBuddy(qsMinColWidth);
        qliSplitterWidth->setBuddy(qsSplitterWidth);
#endif // QT_NO_SHORTCUT

        retranslateUi(LCDConfig);

        QMetaObject::connectSlotsByName(LCDConfig);
    } // setupUi

    void retranslateUi(QWidget *LCDConfig)
    {
        LCDConfig->setWindowTitle(QApplication::translate("LCDConfig", "LCD", nullptr));
#ifndef QT_NO_WHATSTHIS
        qgbDevices->setWhatsThis(QApplication::translate("LCDConfig", "<p>This is the list of available LCD devices on your system.  It lists devices by name, but also includes the size of the display. Mumble supports outputting to several LCD devices at a time.</p>\n"
"<h3>Size:</h3>\n"
"<p>\n"
"This field describes the size of an LCD device. The size is given either in pixels (for Graphic LCDs) or in characters (for Character LCDs).</p>\n"
"<h3>Enabled:</h3>\n"
"<p>This decides whether Mumble should draw to a particular LCD device.</p>", nullptr));
#endif // QT_NO_WHATSTHIS
        qgbDevices->setTitle(QApplication::translate("LCDConfig", "Devices", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = qtwDevices->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("LCDConfig", "Enabled", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("LCDConfig", "Size", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("LCDConfig", "Name", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        qtwDevices->setAccessibleName(QApplication::translate("LCDConfig", "Devices", nullptr));
#endif // QT_NO_ACCESSIBILITY
        qgbViews->setTitle(QApplication::translate("LCDConfig", "Views", nullptr));
        qliMinColWidth->setText(QApplication::translate("LCDConfig", "Minimum Column Width", nullptr));
#ifndef QT_NO_WHATSTHIS
        qsMinColWidth->setWhatsThis(QApplication::translate("LCDConfig", "<p>This option decides the minimum width a column in the User View.</p>\n"
"<p>If too many people are speaking at once, the User View will split itself into columns. You can use this option to pick a compromise between number of users shown on the LCD, and width of user names.</p>\n"
"", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        qsMinColWidth->setAccessibleName(QApplication::translate("LCDConfig", "Minimum column width", nullptr));
#endif // QT_NO_ACCESSIBILITY
        qlMinColWidth->setText(QString());
        qliSplitterWidth->setText(QApplication::translate("LCDConfig", "Splitter Width", nullptr));
#ifndef QT_NO_WHATSTHIS
        qsSplitterWidth->setWhatsThis(QApplication::translate("LCDConfig", "This setting decides the width of column splitter.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        qsSplitterWidth->setAccessibleName(QApplication::translate("LCDConfig", "Splitter width", nullptr));
#endif // QT_NO_ACCESSIBILITY
        qlSplitterWidth->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LCDConfig: public Ui_LCDConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LCD_H
