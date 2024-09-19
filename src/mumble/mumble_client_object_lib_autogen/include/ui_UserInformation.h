/********************************************************************************
** Form generated from reading UI file 'UserInformation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINFORMATION_H
#define UI_USERINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include "AccessibleQGroupBox.h"

QT_BEGIN_NAMESPACE

class Ui_UserInformation
{
public:
    QVBoxLayout *verticalLayout;
    AccessibleQGroupBox *qgbConnection;
    QGridLayout *gridLayout;
    QLabel *qliOpus;
    QLabel *qlCertificate;
    QLabel *qliOS;
    QLabel *qlVersionNote;
    QLabel *qliVersion;
    QLabel *qlAddress;
    QLabel *qlOS;
    QLabel *qliAddress;
    QPushButton *qpbCertificate;
    QLabel *qliCertificate;
    QLabel *qlVersion;
    QLabel *qlOpus;
    AccessibleQGroupBox *qgbPing;
    QGridLayout *gridLayout_2;
    QLabel *qliPingCount;
    QLabel *qliPingAvg;
    QLabel *qliPingVar;
    QLabel *qliTCP;
    QLabel *qlTCPCount;
    QLabel *qlTCPAvg;
    QLabel *qlTCPVar;
    QLabel *qliUDP;
    QLabel *qlUDPCount;
    QLabel *qlUDPAvg;
    QLabel *qlUDPVar;
    AccessibleQGroupBox *qgbUDP;
    QGridLayout *gridLayout_3;
    QLabel *qliGood;
    QLabel *qliLate;
    QLabel *qliLost;
    QLabel *qliResync;
    QLabel *qliFromClient;
    QLabel *qlFromGood;
    QLabel *qlFromLate;
    QLabel *qlFromLost;
    QLabel *qlFromResync;
    QLabel *qliToClient;
    QLabel *qlToGood;
    QLabel *qlToLate;
    QLabel *qlToLost;
    QLabel *qlToResync;
    QLabel *qliLatePercent;
    QLabel *qliLostPercent;
    QLabel *qlFromLatePercent;
    QLabel *qlToLatePercent;
    QLabel *qlFromLostPercent;
    QLabel *qlToLostPercent;
    AccessibleQGroupBox *qgbBandwidth;
    QGridLayout *gridLayout_4;
    QLabel *qliTime;
    QLabel *qlTime;
    QLabel *qliBandwidth;
    QLabel *qlBandwidth;

    void setupUi(QDialog *UserInformation)
    {
        if (UserInformation->objectName().isEmpty())
            UserInformation->setObjectName(QString::fromUtf8("UserInformation"));
        UserInformation->resize(488, 658);
        verticalLayout = new QVBoxLayout(UserInformation);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        qgbConnection = new AccessibleQGroupBox(UserInformation);
        qgbConnection->setObjectName(QString::fromUtf8("qgbConnection"));
        gridLayout = new QGridLayout(qgbConnection);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qliOpus = new QLabel(qgbConnection);
        qliOpus->setObjectName(QString::fromUtf8("qliOpus"));
        qliOpus->setText(QString::fromUtf8("Opus"));

        gridLayout->addWidget(qliOpus, 6, 0, 1, 1);

        qlCertificate = new QLabel(qgbConnection);
        qlCertificate->setObjectName(QString::fromUtf8("qlCertificate"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qlCertificate->sizePolicy().hasHeightForWidth());
        qlCertificate->setSizePolicy(sizePolicy);
        qlCertificate->setTextFormat(Qt::PlainText);
        qlCertificate->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(qlCertificate, 4, 1, 1, 1);

        qliOS = new QLabel(qgbConnection);
        qliOS->setObjectName(QString::fromUtf8("qliOS"));

        gridLayout->addWidget(qliOS, 2, 0, 1, 1);

        qlVersionNote = new QLabel(qgbConnection);
        qlVersionNote->setObjectName(QString::fromUtf8("qlVersionNote"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qlVersionNote->sizePolicy().hasHeightForWidth());
        qlVersionNote->setSizePolicy(sizePolicy1);
        qlVersionNote->setVisible(false);
        qlVersionNote->setWordWrap(true);
        qlVersionNote->setOpenExternalLinks(true);

        gridLayout->addWidget(qlVersionNote, 1, 0, 1, 3);

        qliVersion = new QLabel(qgbConnection);
        qliVersion->setObjectName(QString::fromUtf8("qliVersion"));

        gridLayout->addWidget(qliVersion, 0, 0, 1, 1);

        qlAddress = new QLabel(qgbConnection);
        qlAddress->setObjectName(QString::fromUtf8("qlAddress"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(qlAddress->sizePolicy().hasHeightForWidth());
        qlAddress->setSizePolicy(sizePolicy2);
        qlAddress->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(qlAddress, 5, 1, 1, 2);

        qlOS = new QLabel(qgbConnection);
        qlOS->setObjectName(QString::fromUtf8("qlOS"));
        sizePolicy2.setHeightForWidth(qlOS->sizePolicy().hasHeightForWidth());
        qlOS->setSizePolicy(sizePolicy2);
        qlOS->setTextFormat(Qt::PlainText);
        qlOS->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(qlOS, 2, 1, 1, 2);

        qliAddress = new QLabel(qgbConnection);
        qliAddress->setObjectName(QString::fromUtf8("qliAddress"));

        gridLayout->addWidget(qliAddress, 5, 0, 1, 1);

        qpbCertificate = new QPushButton(qgbConnection);
        qpbCertificate->setObjectName(QString::fromUtf8("qpbCertificate"));
        qpbCertificate->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(qpbCertificate->sizePolicy().hasHeightForWidth());
        qpbCertificate->setSizePolicy(sizePolicy3);
        qpbCertificate->setMaximumSize(QSize(150, 16777215));

        gridLayout->addWidget(qpbCertificate, 4, 2, 1, 1);

        qliCertificate = new QLabel(qgbConnection);
        qliCertificate->setObjectName(QString::fromUtf8("qliCertificate"));

        gridLayout->addWidget(qliCertificate, 4, 0, 1, 1);

        qlVersion = new QLabel(qgbConnection);
        qlVersion->setObjectName(QString::fromUtf8("qlVersion"));
        sizePolicy2.setHeightForWidth(qlVersion->sizePolicy().hasHeightForWidth());
        qlVersion->setSizePolicy(sizePolicy2);
        qlVersion->setTextFormat(Qt::PlainText);
        qlVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(qlVersion, 0, 1, 1, 2);

        qlOpus = new QLabel(qgbConnection);
        qlOpus->setObjectName(QString::fromUtf8("qlOpus"));

        gridLayout->addWidget(qlOpus, 6, 1, 1, 2);


        verticalLayout->addWidget(qgbConnection);

        qgbPing = new AccessibleQGroupBox(UserInformation);
        qgbPing->setObjectName(QString::fromUtf8("qgbPing"));
        gridLayout_2 = new QGridLayout(qgbPing);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        qliPingCount = new QLabel(qgbPing);
        qliPingCount->setObjectName(QString::fromUtf8("qliPingCount"));
        qliPingCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(qliPingCount, 0, 1, 1, 1);

        qliPingAvg = new QLabel(qgbPing);
        qliPingAvg->setObjectName(QString::fromUtf8("qliPingAvg"));
        qliPingAvg->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(qliPingAvg, 0, 2, 1, 1);

        qliPingVar = new QLabel(qgbPing);
        qliPingVar->setObjectName(QString::fromUtf8("qliPingVar"));
        qliPingVar->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(qliPingVar, 0, 3, 1, 1);

        qliTCP = new QLabel(qgbPing);
        qliTCP->setObjectName(QString::fromUtf8("qliTCP"));

        gridLayout_2->addWidget(qliTCP, 1, 0, 1, 1);

        qlTCPCount = new QLabel(qgbPing);
        qlTCPCount->setObjectName(QString::fromUtf8("qlTCPCount"));
        qlTCPCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qlTCPCount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(qlTCPCount, 1, 1, 1, 1);

        qlTCPAvg = new QLabel(qgbPing);
        qlTCPAvg->setObjectName(QString::fromUtf8("qlTCPAvg"));
        qlTCPAvg->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qlTCPAvg->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(qlTCPAvg, 1, 2, 1, 1);

        qlTCPVar = new QLabel(qgbPing);
        qlTCPVar->setObjectName(QString::fromUtf8("qlTCPVar"));
        qlTCPVar->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qlTCPVar->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(qlTCPVar, 1, 3, 1, 1);

        qliUDP = new QLabel(qgbPing);
        qliUDP->setObjectName(QString::fromUtf8("qliUDP"));

        gridLayout_2->addWidget(qliUDP, 2, 0, 1, 1);

        qlUDPCount = new QLabel(qgbPing);
        qlUDPCount->setObjectName(QString::fromUtf8("qlUDPCount"));
        qlUDPCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qlUDPCount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(qlUDPCount, 2, 1, 1, 1);

        qlUDPAvg = new QLabel(qgbPing);
        qlUDPAvg->setObjectName(QString::fromUtf8("qlUDPAvg"));
        qlUDPAvg->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qlUDPAvg->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(qlUDPAvg, 2, 2, 1, 1);

        qlUDPVar = new QLabel(qgbPing);
        qlUDPVar->setObjectName(QString::fromUtf8("qlUDPVar"));
        qlUDPVar->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qlUDPVar->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(qlUDPVar, 2, 3, 1, 1);


        verticalLayout->addWidget(qgbPing);

        qgbUDP = new AccessibleQGroupBox(UserInformation);
        qgbUDP->setObjectName(QString::fromUtf8("qgbUDP"));
        gridLayout_3 = new QGridLayout(qgbUDP);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        qliGood = new QLabel(qgbUDP);
        qliGood->setObjectName(QString::fromUtf8("qliGood"));
        qliGood->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(qliGood, 0, 1, 1, 1);

        qliLate = new QLabel(qgbUDP);
        qliLate->setObjectName(QString::fromUtf8("qliLate"));
        qliLate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(qliLate, 0, 2, 1, 1);

        qliLost = new QLabel(qgbUDP);
        qliLost->setObjectName(QString::fromUtf8("qliLost"));
        qliLost->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(qliLost, 0, 4, 1, 1);

        qliResync = new QLabel(qgbUDP);
        qliResync->setObjectName(QString::fromUtf8("qliResync"));
        qliResync->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(qliResync, 0, 6, 1, 1);

        qliFromClient = new QLabel(qgbUDP);
        qliFromClient->setObjectName(QString::fromUtf8("qliFromClient"));

        gridLayout_3->addWidget(qliFromClient, 1, 0, 1, 1);

        qlFromGood = new QLabel(qgbUDP);
        qlFromGood->setObjectName(QString::fromUtf8("qlFromGood"));
        qlFromGood->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qlFromGood->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(qlFromGood, 1, 1, 1, 1);

        qlFromLate = new QLabel(qgbUDP);
        qlFromLate->setObjectName(QString::fromUtf8("qlFromLate"));
        qlFromLate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qlFromLate->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(qlFromLate, 1, 2, 1, 1);

        qlFromLost = new QLabel(qgbUDP);
        qlFromLost->setObjectName(QString::fromUtf8("qlFromLost"));
        qlFromLost->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qlFromLost->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(qlFromLost, 1, 4, 1, 1);

        qlFromResync = new QLabel(qgbUDP);
        qlFromResync->setObjectName(QString::fromUtf8("qlFromResync"));
        qlFromResync->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qlFromResync->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(qlFromResync, 1, 6, 1, 1);

        qliToClient = new QLabel(qgbUDP);
        qliToClient->setObjectName(QString::fromUtf8("qliToClient"));

        gridLayout_3->addWidget(qliToClient, 2, 0, 1, 1);

        qlToGood = new QLabel(qgbUDP);
        qlToGood->setObjectName(QString::fromUtf8("qlToGood"));
        qlToGood->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qlToGood->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(qlToGood, 2, 1, 1, 1);

        qlToLate = new QLabel(qgbUDP);
        qlToLate->setObjectName(QString::fromUtf8("qlToLate"));
        qlToLate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qlToLate->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(qlToLate, 2, 2, 1, 1);

        qlToLost = new QLabel(qgbUDP);
        qlToLost->setObjectName(QString::fromUtf8("qlToLost"));
        qlToLost->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qlToLost->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(qlToLost, 2, 4, 1, 1);

        qlToResync = new QLabel(qgbUDP);
        qlToResync->setObjectName(QString::fromUtf8("qlToResync"));
        qlToResync->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qlToResync->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(qlToResync, 2, 6, 1, 1);

        qliLatePercent = new QLabel(qgbUDP);
        qliLatePercent->setObjectName(QString::fromUtf8("qliLatePercent"));
        qliLatePercent->setText(QString::fromUtf8("%"));
        qliLatePercent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(qliLatePercent, 0, 3, 1, 1);

        qliLostPercent = new QLabel(qgbUDP);
        qliLostPercent->setObjectName(QString::fromUtf8("qliLostPercent"));
        qliLostPercent->setText(QString::fromUtf8("%"));
        qliLostPercent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(qliLostPercent, 0, 5, 1, 1);

        qlFromLatePercent = new QLabel(qgbUDP);
        qlFromLatePercent->setObjectName(QString::fromUtf8("qlFromLatePercent"));
        qlFromLatePercent->setText(QString::fromUtf8(""));
        qlFromLatePercent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(qlFromLatePercent, 1, 3, 1, 1);

        qlToLatePercent = new QLabel(qgbUDP);
        qlToLatePercent->setObjectName(QString::fromUtf8("qlToLatePercent"));
        qlToLatePercent->setText(QString::fromUtf8(""));
        qlToLatePercent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(qlToLatePercent, 2, 3, 1, 1);

        qlFromLostPercent = new QLabel(qgbUDP);
        qlFromLostPercent->setObjectName(QString::fromUtf8("qlFromLostPercent"));
        qlFromLostPercent->setText(QString::fromUtf8(""));
        qlFromLostPercent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(qlFromLostPercent, 1, 5, 1, 1);

        qlToLostPercent = new QLabel(qgbUDP);
        qlToLostPercent->setObjectName(QString::fromUtf8("qlToLostPercent"));
        qlToLostPercent->setText(QString::fromUtf8(""));
        qlToLostPercent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(qlToLostPercent, 2, 5, 1, 1);


        verticalLayout->addWidget(qgbUDP);

        qgbBandwidth = new AccessibleQGroupBox(UserInformation);
        qgbBandwidth->setObjectName(QString::fromUtf8("qgbBandwidth"));
        gridLayout_4 = new QGridLayout(qgbBandwidth);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        qliTime = new QLabel(qgbBandwidth);
        qliTime->setObjectName(QString::fromUtf8("qliTime"));

        gridLayout_4->addWidget(qliTime, 0, 0, 1, 1);

        qlTime = new QLabel(qgbBandwidth);
        qlTime->setObjectName(QString::fromUtf8("qlTime"));
        sizePolicy2.setHeightForWidth(qlTime->sizePolicy().hasHeightForWidth());
        qlTime->setSizePolicy(sizePolicy2);
        qlTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_4->addWidget(qlTime, 0, 1, 1, 1);

        qliBandwidth = new QLabel(qgbBandwidth);
        qliBandwidth->setObjectName(QString::fromUtf8("qliBandwidth"));

        gridLayout_4->addWidget(qliBandwidth, 1, 0, 1, 1);

        qlBandwidth = new QLabel(qgbBandwidth);
        qlBandwidth->setObjectName(QString::fromUtf8("qlBandwidth"));
        sizePolicy2.setHeightForWidth(qlBandwidth->sizePolicy().hasHeightForWidth());
        qlBandwidth->setSizePolicy(sizePolicy2);
        qlBandwidth->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_4->addWidget(qlBandwidth, 1, 1, 1, 1);


        verticalLayout->addWidget(qgbBandwidth);


        retranslateUi(UserInformation);

        QMetaObject::connectSlotsByName(UserInformation);
    } // setupUi

    void retranslateUi(QDialog *UserInformation)
    {
        UserInformation->setWindowTitle(QApplication::translate("UserInformation", "User Information", nullptr));
        qgbConnection->setTitle(QApplication::translate("UserInformation", "Connection Information", nullptr));
        qlCertificate->setText(QString());
        qliOS->setText(QApplication::translate("UserInformation", "OS", nullptr));
        qlVersionNote->setText(QApplication::translate("UserInformation", "Warning: The server seems to report a truncated protocol version for this client. (See: <a href=\"https://github.com/mumble-voip/mumble/issues/5827/\">Issue #5827</a>)", nullptr));
        qliVersion->setText(QApplication::translate("UserInformation", "Version", nullptr));
        qlAddress->setText(QString());
        qlOS->setText(QString());
        qliAddress->setText(QApplication::translate("UserInformation", "IP Address", nullptr));
        qpbCertificate->setText(QApplication::translate("UserInformation", "Details", nullptr));
        qliCertificate->setText(QApplication::translate("UserInformation", "Certificate", nullptr));
        qlVersion->setText(QString());
        qlOpus->setText(QString());
        qgbPing->setTitle(QApplication::translate("UserInformation", "Ping Statistics", nullptr));
        qliPingCount->setText(QApplication::translate("UserInformation", "Pings received", nullptr));
        qliPingAvg->setText(QApplication::translate("UserInformation", "Average ping", nullptr));
        qliPingVar->setText(QApplication::translate("UserInformation", "Ping deviation", nullptr));
        qliTCP->setText(QApplication::translate("UserInformation", "TCP (Control)", nullptr));
        qlTCPCount->setText(QString());
        qlTCPAvg->setText(QString());
        qlTCPVar->setText(QString());
        qliUDP->setText(QApplication::translate("UserInformation", "UDP (Voice)", nullptr));
        qlUDPCount->setText(QString());
        qlUDPAvg->setText(QString());
        qlUDPVar->setText(QString());
        qgbUDP->setTitle(QApplication::translate("UserInformation", "UDP Network statistics", nullptr));
        qliGood->setText(QApplication::translate("UserInformation", "Good", nullptr));
        qliLate->setText(QApplication::translate("UserInformation", "Late", nullptr));
        qliLost->setText(QApplication::translate("UserInformation", "Lost", nullptr));
        qliResync->setText(QApplication::translate("UserInformation", "Resync", nullptr));
        qliFromClient->setText(QApplication::translate("UserInformation", "From Client", nullptr));
        qlFromGood->setText(QString());
        qlFromLate->setText(QString());
        qlFromLost->setText(QString());
        qlFromResync->setText(QString());
        qliToClient->setText(QApplication::translate("UserInformation", "To Client", nullptr));
        qlToGood->setText(QString());
        qlToLate->setText(QString());
        qlToLost->setText(QString());
        qlToResync->setText(QString());
        qgbBandwidth->setTitle(QApplication::translate("UserInformation", "Bandwidth", "GroupBox"));
        qliTime->setText(QApplication::translate("UserInformation", "Connection time", nullptr));
        qlTime->setText(QString());
        qliBandwidth->setText(QApplication::translate("UserInformation", "Bandwidth", "Label"));
        qlBandwidth->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserInformation: public Ui_UserInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINFORMATION_H
