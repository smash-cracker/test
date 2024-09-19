/********************************************************************************
** Form generated from reading UI file 'VoiceRecorderDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOICERECORDERDIALOG_H
#define UI_VOICERECORDERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "widgets/MUComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_VoiceRecorderDialog
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *qgbControl;
    QHBoxLayout *horizontalLayout_2;
    QLabel *qlTime;
    QSpacerItem *horizontalSpacer;
    QPushButton *qpbStart;
    QPushButton *qpbStop;
    QGroupBox *qgbMode;
    QVBoxLayout *verticalLayout;
    QRadioButton *qrbDownmix;
    QRadioButton *qrbMultichannel;
    QSpacerItem *verticalSpacer;
    QGroupBox *qgbOutput;
    QFormLayout *formLayout;
    QLabel *qlOutputFormat;
    MUComboBox *qcbFormat;
    QLabel *qlTargetDirectory;
    QLabel *qlFilename;
    QHBoxLayout *qhblTargetDirectory;
    QLineEdit *qleTargetDirectory;
    QPushButton *qpbTargetDirectoryBrowse;
    QLineEdit *qleFilename;

    void setupUi(QDialog *VoiceRecorderDialog)
    {
        if (VoiceRecorderDialog->objectName().isEmpty())
            VoiceRecorderDialog->setObjectName(QString::fromUtf8("VoiceRecorderDialog"));
        VoiceRecorderDialog->resize(450, 255);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/actions/media-record.svg"), QSize(), QIcon::Normal, QIcon::Off);
        VoiceRecorderDialog->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(VoiceRecorderDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        qgbControl = new QGroupBox(VoiceRecorderDialog);
        qgbControl->setObjectName(QString::fromUtf8("qgbControl"));
        horizontalLayout_2 = new QHBoxLayout(qgbControl);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        qlTime = new QLabel(qgbControl);
        qlTime->setObjectName(QString::fromUtf8("qlTime"));
        QFont font;
        font.setPointSize(20);
        font.setBold(false);
        font.setUnderline(false);
        font.setWeight(50);
        qlTime->setFont(font);
        qlTime->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(qlTime);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        qpbStart = new QPushButton(qgbControl);
        qpbStart->setObjectName(QString::fromUtf8("qpbStart"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qpbStart->sizePolicy().hasHeightForWidth());
        qpbStart->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(qpbStart);

        qpbStop = new QPushButton(qgbControl);
        qpbStop->setObjectName(QString::fromUtf8("qpbStop"));
        qpbStop->setEnabled(false);
        sizePolicy.setHeightForWidth(qpbStop->sizePolicy().hasHeightForWidth());
        qpbStop->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(qpbStop);


        gridLayout_2->addWidget(qgbControl, 0, 0, 1, 2);

        qgbMode = new QGroupBox(VoiceRecorderDialog);
        qgbMode->setObjectName(QString::fromUtf8("qgbMode"));
        verticalLayout = new QVBoxLayout(qgbMode);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        qrbDownmix = new QRadioButton(qgbMode);
        qrbDownmix->setObjectName(QString::fromUtf8("qrbDownmix"));
        qrbDownmix->setEnabled(true);
        qrbDownmix->setCheckable(true);
        qrbDownmix->setChecked(true);

        verticalLayout->addWidget(qrbDownmix);

        qrbMultichannel = new QRadioButton(qgbMode);
        qrbMultichannel->setObjectName(QString::fromUtf8("qrbMultichannel"));

        verticalLayout->addWidget(qrbMultichannel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_2->addWidget(qgbMode, 1, 1, 1, 1);

        qgbOutput = new QGroupBox(VoiceRecorderDialog);
        qgbOutput->setObjectName(QString::fromUtf8("qgbOutput"));
        formLayout = new QFormLayout(qgbOutput);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        qlOutputFormat = new QLabel(qgbOutput);
        qlOutputFormat->setObjectName(QString::fromUtf8("qlOutputFormat"));

        formLayout->setWidget(0, QFormLayout::LabelRole, qlOutputFormat);

        qcbFormat = new MUComboBox(qgbOutput);
        qcbFormat->setObjectName(QString::fromUtf8("qcbFormat"));

        formLayout->setWidget(0, QFormLayout::FieldRole, qcbFormat);

        qlTargetDirectory = new QLabel(qgbOutput);
        qlTargetDirectory->setObjectName(QString::fromUtf8("qlTargetDirectory"));

        formLayout->setWidget(2, QFormLayout::LabelRole, qlTargetDirectory);

        qlFilename = new QLabel(qgbOutput);
        qlFilename->setObjectName(QString::fromUtf8("qlFilename"));

        formLayout->setWidget(4, QFormLayout::LabelRole, qlFilename);

        qhblTargetDirectory = new QHBoxLayout();
        qhblTargetDirectory->setObjectName(QString::fromUtf8("qhblTargetDirectory"));
        qleTargetDirectory = new QLineEdit(qgbOutput);
        qleTargetDirectory->setObjectName(QString::fromUtf8("qleTargetDirectory"));

        qhblTargetDirectory->addWidget(qleTargetDirectory);

        qpbTargetDirectoryBrowse = new QPushButton(qgbOutput);
        qpbTargetDirectoryBrowse->setObjectName(QString::fromUtf8("qpbTargetDirectoryBrowse"));

        qhblTargetDirectory->addWidget(qpbTargetDirectoryBrowse);


        formLayout->setLayout(2, QFormLayout::FieldRole, qhblTargetDirectory);

        qleFilename = new QLineEdit(qgbOutput);
        qleFilename->setObjectName(QString::fromUtf8("qleFilename"));

        formLayout->setWidget(4, QFormLayout::FieldRole, qleFilename);


        gridLayout_2->addWidget(qgbOutput, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        qlOutputFormat->setBuddy(qcbFormat);
        qlTargetDirectory->setBuddy(qleTargetDirectory);
        qlFilename->setBuddy(qleFilename);
#endif // QT_NO_SHORTCUT

        retranslateUi(VoiceRecorderDialog);

        QMetaObject::connectSlotsByName(VoiceRecorderDialog);
    } // setupUi

    void retranslateUi(QDialog *VoiceRecorderDialog)
    {
        VoiceRecorderDialog->setWindowTitle(QApplication::translate("VoiceRecorderDialog", "Recorder", nullptr));
        qgbControl->setTitle(QApplication::translate("VoiceRecorderDialog", "Control", nullptr));
        qlTime->setText(QApplication::translate("VoiceRecorderDialog", "00:00:00", nullptr));
        qpbStart->setText(QApplication::translate("VoiceRecorderDialog", "&Start", nullptr));
        qpbStop->setText(QApplication::translate("VoiceRecorderDialog", "S&top", nullptr));
        qgbMode->setTitle(QApplication::translate("VoiceRecorderDialog", "Mode", nullptr));
        qrbDownmix->setText(QApplication::translate("VoiceRecorderDialog", "Downmix", nullptr));
        qrbMultichannel->setText(QApplication::translate("VoiceRecorderDialog", "Multichannel", nullptr));
        qgbOutput->setTitle(QApplication::translate("VoiceRecorderDialog", "Output", nullptr));
        qlOutputFormat->setText(QApplication::translate("VoiceRecorderDialog", "Output format", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        qcbFormat->setAccessibleName(QApplication::translate("VoiceRecorderDialog", "Output format", nullptr));
#endif // QT_NO_ACCESSIBILITY
        qlTargetDirectory->setText(QApplication::translate("VoiceRecorderDialog", "Target directory", nullptr));
        qlFilename->setText(QApplication::translate("VoiceRecorderDialog", "Filename", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        qleTargetDirectory->setAccessibleDescription(QApplication::translate("VoiceRecorderDialog", "This field contains the directory path to store any voice recordings in. Use the \"browse\" button to open a file dialog.", nullptr));
#endif // QT_NO_ACCESSIBILITY
        qpbTargetDirectoryBrowse->setText(QApplication::translate("VoiceRecorderDialog", "&Browse...", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        qleFilename->setAccessibleDescription(QApplication::translate("VoiceRecorderDialog", "This field contains the filename any voice recording is saved as. Various variables can be used to augment the filename. For example %time for the current time.", nullptr));
#endif // QT_NO_ACCESSIBILITY
    } // retranslateUi

};

namespace Ui {
    class VoiceRecorderDialog: public Ui_VoiceRecorderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOICERECORDERDIALOG_H
