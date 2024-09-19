/********************************************************************************
** Form generated from reading UI file 'Log.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_H
#define UI_LOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/MultiColumnTreeWidget.h"
#include "widgets/SemanticSlider.h"

QT_BEGIN_NAMESPACE

class Ui_LogConfig
{
public:
    QVBoxLayout *vboxLayout;
    MultiColumnTreeWidget *qtwMessages;
    QGroupBox *qgbTTS;
    QGridLayout *gridLayout;
    QCheckBox *qcbReadBackOwn;
    QLabel *qlThreshold;
    QCheckBox *qcbEnableTTS;
    QSpinBox *qsbThreshold;
    QCheckBox *qcbNoScope;
    QCheckBox *qcbNoAuthor;
    QGroupBox *qgbMessageVolume;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *qgbMessageVolumeGrid;
    QSpinBox *qsbCueVolume;
    QLabel *qlTTSVolume;
    SemanticSlider *qsCueVolume;
    QLabel *qlNotificationVolume;
    QSpinBox *qsbNotificationVolume;
    SemanticSlider *qsNotificationVolume;
    SemanticSlider *qsTTSVolume;
    QLabel *qlCueVolume;
    QSpinBox *qsbTTSVolume;
    QGroupBox *qgbMaxBlocks;
    QGridLayout *_2;
    QCheckBox *qcb24HourClock;
    QSpinBox *qsbMaxBlocks;
    QLabel *qlMaxBlocks;
    QSpacerItem *horizontalSpacer;
    QLabel *qlChatMessageMargins;
    QSpinBox *qsbChatMessageMargins;
    QGroupBox *qgbMisc;
    QVBoxLayout *verticalLayout;
    QCheckBox *qcbWhisperFriends;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *qsbMessageLimitUsers;
    QLabel *label;

    void setupUi(QWidget *LogConfig)
    {
        if (LogConfig->objectName().isEmpty())
            LogConfig->setObjectName(QString::fromUtf8("LogConfig"));
        LogConfig->resize(657, 627);
        vboxLayout = new QVBoxLayout(LogConfig);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        qtwMessages = new MultiColumnTreeWidget(LogConfig);
        qtwMessages->setObjectName(QString::fromUtf8("qtwMessages"));
        qtwMessages->setAlternatingRowColors(true);
        qtwMessages->setSelectionMode(QAbstractItemView::SingleSelection);
        qtwMessages->setRootIsDecorated(false);
        qtwMessages->setUniformRowHeights(true);
        qtwMessages->setItemsExpandable(false);

        vboxLayout->addWidget(qtwMessages);

        qgbTTS = new QGroupBox(LogConfig);
        qgbTTS->setObjectName(QString::fromUtf8("qgbTTS"));
        gridLayout = new QGridLayout(qgbTTS);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qcbReadBackOwn = new QCheckBox(qgbTTS);
        qcbReadBackOwn->setObjectName(QString::fromUtf8("qcbReadBackOwn"));

        gridLayout->addWidget(qcbReadBackOwn, 2, 3, 1, 1);

        qlThreshold = new QLabel(qgbTTS);
        qlThreshold->setObjectName(QString::fromUtf8("qlThreshold"));

        gridLayout->addWidget(qlThreshold, 2, 0, 1, 1);

        qcbEnableTTS = new QCheckBox(qgbTTS);
        qcbEnableTTS->setObjectName(QString::fromUtf8("qcbEnableTTS"));
        qcbEnableTTS->setEnabled(true);

        gridLayout->addWidget(qcbEnableTTS, 0, 0, 1, 1);

        qsbThreshold = new QSpinBox(qgbTTS);
        qsbThreshold->setObjectName(QString::fromUtf8("qsbThreshold"));
        qsbThreshold->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        qsbThreshold->setMaximum(5000);
        qsbThreshold->setSingleStep(10);

        gridLayout->addWidget(qsbThreshold, 2, 1, 1, 1);

        qcbNoScope = new QCheckBox(qgbTTS);
        qcbNoScope->setObjectName(QString::fromUtf8("qcbNoScope"));

        gridLayout->addWidget(qcbNoScope, 0, 1, 1, 1);

        qcbNoAuthor = new QCheckBox(qgbTTS);
        qcbNoAuthor->setObjectName(QString::fromUtf8("qcbNoAuthor"));

        gridLayout->addWidget(qcbNoAuthor, 0, 3, 1, 1);


        vboxLayout->addWidget(qgbTTS);

        qgbMessageVolume = new QGroupBox(LogConfig);
        qgbMessageVolume->setObjectName(QString::fromUtf8("qgbMessageVolume"));
        verticalLayout_3 = new QVBoxLayout(qgbMessageVolume);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 9, -1, -1);
        qgbMessageVolumeGrid = new QGridLayout();
        qgbMessageVolumeGrid->setObjectName(QString::fromUtf8("qgbMessageVolumeGrid"));
        qsbCueVolume = new QSpinBox(qgbMessageVolume);
        qsbCueVolume->setObjectName(QString::fromUtf8("qsbCueVolume"));
        qsbCueVolume->setMinimum(-60);
        qsbCueVolume->setMaximum(30);

        qgbMessageVolumeGrid->addWidget(qsbCueVolume, 2, 2, 1, 1);

        qlTTSVolume = new QLabel(qgbMessageVolume);
        qlTTSVolume->setObjectName(QString::fromUtf8("qlTTSVolume"));

        qgbMessageVolumeGrid->addWidget(qlTTSVolume, 0, 0, 1, 1);

        qsCueVolume = new SemanticSlider(qgbMessageVolume);
        qsCueVolume->setObjectName(QString::fromUtf8("qsCueVolume"));
        qsCueVolume->setMinimum(-60);
        qsCueVolume->setMaximum(30);
        qsCueVolume->setSingleStep(1);
        qsCueVolume->setPageStep(10);
        qsCueVolume->setValue(0);
        qsCueVolume->setOrientation(Qt::Horizontal);
        qsCueVolume->setTickPosition(QSlider::TicksBelow);
        qsCueVolume->setTickInterval(10);

        qgbMessageVolumeGrid->addWidget(qsCueVolume, 2, 1, 1, 1);

        qlNotificationVolume = new QLabel(qgbMessageVolume);
        qlNotificationVolume->setObjectName(QString::fromUtf8("qlNotificationVolume"));
        qlNotificationVolume->setMargin(0);

        qgbMessageVolumeGrid->addWidget(qlNotificationVolume, 1, 0, 1, 1);

        qsbNotificationVolume = new QSpinBox(qgbMessageVolume);
        qsbNotificationVolume->setObjectName(QString::fromUtf8("qsbNotificationVolume"));
        qsbNotificationVolume->setMinimum(-60);
        qsbNotificationVolume->setMaximum(30);

        qgbMessageVolumeGrid->addWidget(qsbNotificationVolume, 1, 2, 1, 1);

        qsNotificationVolume = new SemanticSlider(qgbMessageVolume);
        qsNotificationVolume->setObjectName(QString::fromUtf8("qsNotificationVolume"));
        qsNotificationVolume->setMinimum(-60);
        qsNotificationVolume->setMaximum(30);
        qsNotificationVolume->setSingleStep(1);
        qsNotificationVolume->setPageStep(10);
        qsNotificationVolume->setValue(0);
        qsNotificationVolume->setOrientation(Qt::Horizontal);
        qsNotificationVolume->setTickPosition(QSlider::TicksBelow);
        qsNotificationVolume->setTickInterval(10);

        qgbMessageVolumeGrid->addWidget(qsNotificationVolume, 1, 1, 1, 1);

        qsTTSVolume = new SemanticSlider(qgbMessageVolume);
        qsTTSVolume->setObjectName(QString::fromUtf8("qsTTSVolume"));
        qsTTSVolume->setMaximum(100);
        qsTTSVolume->setSingleStep(5);
        qsTTSVolume->setPageStep(20);
        qsTTSVolume->setOrientation(Qt::Horizontal);
        qsTTSVolume->setTickPosition(QSlider::TicksBelow);
        qsTTSVolume->setTickInterval(5);

        qgbMessageVolumeGrid->addWidget(qsTTSVolume, 0, 1, 1, 1);

        qlCueVolume = new QLabel(qgbMessageVolume);
        qlCueVolume->setObjectName(QString::fromUtf8("qlCueVolume"));
        qlCueVolume->setMargin(0);

        qgbMessageVolumeGrid->addWidget(qlCueVolume, 2, 0, 1, 1);

        qsbTTSVolume = new QSpinBox(qgbMessageVolume);
        qsbTTSVolume->setObjectName(QString::fromUtf8("qsbTTSVolume"));
        qsbTTSVolume->setMaximum(100);

        qgbMessageVolumeGrid->addWidget(qsbTTSVolume, 0, 2, 1, 1);


        verticalLayout_3->addLayout(qgbMessageVolumeGrid);


        vboxLayout->addWidget(qgbMessageVolume);

        qgbMaxBlocks = new QGroupBox(LogConfig);
        qgbMaxBlocks->setObjectName(QString::fromUtf8("qgbMaxBlocks"));
        _2 = new QGridLayout(qgbMaxBlocks);
        _2->setObjectName(QString::fromUtf8("_2"));
        qcb24HourClock = new QCheckBox(qgbMaxBlocks);
        qcb24HourClock->setObjectName(QString::fromUtf8("qcb24HourClock"));

        _2->addWidget(qcb24HourClock, 1, 0, 1, 1);

        qsbMaxBlocks = new QSpinBox(qgbMaxBlocks);
        qsbMaxBlocks->setObjectName(QString::fromUtf8("qsbMaxBlocks"));
        qsbMaxBlocks->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        qsbMaxBlocks->setMaximum(1000000);
        qsbMaxBlocks->setSingleStep(100);

        _2->addWidget(qsbMaxBlocks, 0, 1, 1, 1);

        qlMaxBlocks = new QLabel(qgbMaxBlocks);
        qlMaxBlocks->setObjectName(QString::fromUtf8("qlMaxBlocks"));

        _2->addWidget(qlMaxBlocks, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(8, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(horizontalSpacer, 0, 2, 1, 1);

        qlChatMessageMargins = new QLabel(qgbMaxBlocks);
        qlChatMessageMargins->setObjectName(QString::fromUtf8("qlChatMessageMargins"));

        _2->addWidget(qlChatMessageMargins, 2, 0, 1, 1);

        qsbChatMessageMargins = new QSpinBox(qgbMaxBlocks);
        qsbChatMessageMargins->setObjectName(QString::fromUtf8("qsbChatMessageMargins"));
        qsbChatMessageMargins->setFrame(true);

        _2->addWidget(qsbChatMessageMargins, 2, 1, 1, 1);


        vboxLayout->addWidget(qgbMaxBlocks);

        qgbMisc = new QGroupBox(LogConfig);
        qgbMisc->setObjectName(QString::fromUtf8("qgbMisc"));
        verticalLayout = new QVBoxLayout(qgbMisc);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        qcbWhisperFriends = new QCheckBox(qgbMisc);
        qcbWhisperFriends->setObjectName(QString::fromUtf8("qcbWhisperFriends"));

        verticalLayout->addWidget(qcbWhisperFriends);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(qgbMisc);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        qsbMessageLimitUsers = new QSpinBox(qgbMisc);
        qsbMessageLimitUsers->setObjectName(QString::fromUtf8("qsbMessageLimitUsers"));
        qsbMessageLimitUsers->setEnabled(true);
        qsbMessageLimitUsers->setMaximumSize(QSize(40, 20));
        qsbMessageLimitUsers->setFrame(true);

        horizontalLayout->addWidget(qsbMessageLimitUsers);

        label = new QLabel(qgbMisc);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);


        vboxLayout->addWidget(qgbMisc);

#ifndef QT_NO_SHORTCUT
        qlThreshold->setBuddy(qsbThreshold);
        qlTTSVolume->setBuddy(qsTTSVolume);
        qlNotificationVolume->setBuddy(qsNotificationVolume);
        qlCueVolume->setBuddy(qsCueVolume);
        qlMaxBlocks->setBuddy(qsbMaxBlocks);
        qlChatMessageMargins->setBuddy(qsbChatMessageMargins);
        label_2->setBuddy(qsbMessageLimitUsers);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(qtwMessages, qcbEnableTTS);
        QWidget::setTabOrder(qcbEnableTTS, qcbNoScope);
        QWidget::setTabOrder(qcbNoScope, qcbNoAuthor);
        QWidget::setTabOrder(qcbNoAuthor, qsbThreshold);
        QWidget::setTabOrder(qsbThreshold, qcbReadBackOwn);
        QWidget::setTabOrder(qcbReadBackOwn, qsTTSVolume);
        QWidget::setTabOrder(qsTTSVolume, qsbTTSVolume);
        QWidget::setTabOrder(qsbTTSVolume, qsNotificationVolume);
        QWidget::setTabOrder(qsNotificationVolume, qsbNotificationVolume);
        QWidget::setTabOrder(qsbNotificationVolume, qsCueVolume);
        QWidget::setTabOrder(qsCueVolume, qsbCueVolume);
        QWidget::setTabOrder(qsbCueVolume, qsbMaxBlocks);
        QWidget::setTabOrder(qsbMaxBlocks, qcb24HourClock);
        QWidget::setTabOrder(qcb24HourClock, qsbChatMessageMargins);
        QWidget::setTabOrder(qsbChatMessageMargins, qcbWhisperFriends);
        QWidget::setTabOrder(qcbWhisperFriends, qsbMessageLimitUsers);

        retranslateUi(LogConfig);

        QMetaObject::connectSlotsByName(LogConfig);
    } // setupUi

    void retranslateUi(QWidget *LogConfig)
    {
        LogConfig->setWindowTitle(QApplication::translate("LogConfig", "Messages", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = qtwMessages->headerItem();
        ___qtreewidgetitem->setText(7, QApplication::translate("LogConfig", "Soundfile", nullptr));
        ___qtreewidgetitem->setText(6, QApplication::translate("LogConfig", "Path", nullptr));
        ___qtreewidgetitem->setText(5, QApplication::translate("LogConfig", "Limit", nullptr));
        ___qtreewidgetitem->setText(4, QApplication::translate("LogConfig", "Text-To-Speech", nullptr));
        ___qtreewidgetitem->setText(3, QApplication::translate("LogConfig", "Highlight", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("LogConfig", "Notification", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("LogConfig", "Console", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("LogConfig", "Message", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        qtwMessages->setAccessibleName(QApplication::translate("LogConfig", "Log message types and actions", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        qtwMessages->setAccessibleDescription(QApplication::translate("LogConfig", "Use up and down keys to navigate through the message types. Use left and right keys to navigate between notification possibilities for a single message type.", nullptr));
#endif // QT_NO_ACCESSIBILITY
        qgbTTS->setTitle(QApplication::translate("LogConfig", "Text To Speech", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbReadBackOwn->setToolTip(QApplication::translate("LogConfig", "If enabled text messages you send will be read back to you with TTS", nullptr));
#endif // QT_NO_TOOLTIP
        qcbReadBackOwn->setText(QApplication::translate("LogConfig", "Read back own messages", nullptr));
        qlThreshold->setText(QApplication::translate("LogConfig", "Length threshold", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbEnableTTS->setToolTip(QApplication::translate("LogConfig", "Click to enable Text-to-Speech", nullptr));
#endif // QT_NO_TOOLTIP
        qcbEnableTTS->setText(QApplication::translate("LogConfig", "Enable Text-to-Speech", nullptr));
#ifndef QT_NO_TOOLTIP
        qsbThreshold->setToolTip(QApplication::translate("LogConfig", "Message length threshold for Text-To-Speech Engine", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsbThreshold->setWhatsThis(QApplication::translate("LogConfig", "<b>This is the length threshold used for the Text-To-Speech Engine.</b><br />Messages longer than this limit will not be read aloud in their full length.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        qsbThreshold->setAccessibleName(QApplication::translate("LogConfig", "Set length threshold", nullptr));
#endif // QT_NO_ACCESSIBILITY
        qsbThreshold->setSuffix(QApplication::translate("LogConfig", " Characters", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbNoScope->setToolTip(QApplication::translate("LogConfig", "If enabled, TTS will not dictate the message scope.", nullptr));
#endif // QT_NO_TOOLTIP
        qcbNoScope->setText(QApplication::translate("LogConfig", "Omit Message Scope", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbNoAuthor->setToolTip(QApplication::translate("LogConfig", "If enabled, TTS will not dictate the message author.", nullptr));
#endif // QT_NO_TOOLTIP
        qcbNoAuthor->setText(QApplication::translate("LogConfig", "Omit Message Author", nullptr));
        qgbMessageVolume->setTitle(QApplication::translate("LogConfig", "Message Volume", nullptr));
#ifndef QT_NO_TOOLTIP
        qsbCueVolume->setToolTip(QApplication::translate("LogConfig", "Volume adjustment for audio cues", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsbCueVolume->setWhatsThis(QApplication::translate("LogConfig", "<b>This is the volume adjustment for audio cues.</b><br />A value of 0 dB means no change to the sound sample.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        qsbCueVolume->setAccessibleName(QApplication::translate("LogConfig", "Audio cue volume adjustment", nullptr));
#endif // QT_NO_ACCESSIBILITY
        qsbCueVolume->setSuffix(QApplication::translate("LogConfig", " dB", nullptr));
        qlTTSVolume->setText(QApplication::translate("LogConfig", "Text-to-Speech volume", nullptr));
#ifndef QT_NO_TOOLTIP
        qsCueVolume->setToolTip(QApplication::translate("LogConfig", "Volume adjustment for audio cues", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsCueVolume->setWhatsThis(QApplication::translate("LogConfig", "<b>This is the volume adjustment for audio cues.</b><br />A value of 0 dB means no change to the sound sample.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        qsCueVolume->setAccessibleName(QApplication::translate("LogConfig", "Audio cue volume adjustment", nullptr));
#endif // QT_NO_ACCESSIBILITY
        qlNotificationVolume->setText(QApplication::translate("LogConfig", "Notification volume adjustment", nullptr));
#ifndef QT_NO_TOOLTIP
        qsbNotificationVolume->setToolTip(QApplication::translate("LogConfig", "Volume adjustment for notification sounds", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsbNotificationVolume->setWhatsThis(QApplication::translate("LogConfig", "<b>This is the volume adjustment for notification sounds.</b><br />A value of 0 dB means no change to the sound sample.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        qsbNotificationVolume->setAccessibleName(QApplication::translate("LogConfig", "Notification sound volume adjustment", nullptr));
#endif // QT_NO_ACCESSIBILITY
        qsbNotificationVolume->setSuffix(QApplication::translate("LogConfig", " dB", nullptr));
#ifndef QT_NO_TOOLTIP
        qsNotificationVolume->setToolTip(QApplication::translate("LogConfig", "Volume adjustment for notification sounds", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsNotificationVolume->setWhatsThis(QApplication::translate("LogConfig", "<b>This is the volume adjustment for notification sounds.</b><br />A value of 0 dB means no change to the sound sample.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        qsNotificationVolume->setAccessibleName(QApplication::translate("LogConfig", "Notification sound volume adjustment", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        qsTTSVolume->setToolTip(QApplication::translate("LogConfig", "Volume of Text-To-Speech Engine", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsTTSVolume->setWhatsThis(QApplication::translate("LogConfig", "<b>This is the volume used for the speech synthesis.</b>", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        qsTTSVolume->setAccessibleName(QApplication::translate("LogConfig", "Text to speech volume", nullptr));
#endif // QT_NO_ACCESSIBILITY
        qlCueVolume->setText(QApplication::translate("LogConfig", "Audio cue volume adjustment", nullptr));
        qsbTTSVolume->setSuffix(QApplication::translate("LogConfig", " %", nullptr));
        qgbMaxBlocks->setTitle(QApplication::translate("LogConfig", "Chat Log", nullptr));
#ifndef QT_NO_TOOLTIP
        qcb24HourClock->setToolTip(QApplication::translate("LogConfig", "If checked the time at the beginning of a message will be displayed in the 24-hour format.\n"
"\n"
"The setting only applies for new messages, the already shown ones will retain the previous time format.", nullptr));
#endif // QT_NO_TOOLTIP
        qcb24HourClock->setText(QApplication::translate("LogConfig", "Use 24-hour clock", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        qsbMaxBlocks->setAccessibleName(QApplication::translate("LogConfig", "Maximum chat log length", nullptr));
#endif // QT_NO_ACCESSIBILITY
        qsbMaxBlocks->setSpecialValueText(QApplication::translate("LogConfig", "Unlimited", nullptr));
        qsbMaxBlocks->setSuffix(QApplication::translate("LogConfig", " Lines", nullptr));
        qlMaxBlocks->setText(QApplication::translate("LogConfig", "Maximum chat length", nullptr));
#ifndef QT_NO_TOOLTIP
        qlChatMessageMargins->setToolTip(QApplication::translate("LogConfig", "How far individual messages are spaced out from one another.", nullptr));
#endif // QT_NO_TOOLTIP
        qlChatMessageMargins->setText(QApplication::translate("LogConfig", "Message margins", nullptr));
#ifndef QT_NO_TOOLTIP
        qsbChatMessageMargins->setToolTip(QApplication::translate("LogConfig", "How far individual messages are spaced out from one another.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        qsbChatMessageMargins->setAccessibleName(QApplication::translate("LogConfig", "Chat message margins", nullptr));
#endif // QT_NO_ACCESSIBILITY
        qgbMisc->setTitle(QApplication::translate("LogConfig", "Misc.", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbWhisperFriends->setToolTip(QApplication::translate("LogConfig", "If checked you will only hear whispers from users you added to your friend list.", nullptr));
#endif // QT_NO_TOOLTIP
        qcbWhisperFriends->setText(QApplication::translate("LogConfig", "Only accept whispers from friends", nullptr));
        label_2->setText(QApplication::translate("LogConfig", "Limit notifications when there are more than", nullptr));
#ifndef QT_NO_TOOLTIP
        qsbMessageLimitUsers->setToolTip(QApplication::translate("LogConfig", "Number of users that will trigger message limiting functionality.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        qsbMessageLimitUsers->setAccessibleName(QApplication::translate("LogConfig", "User limit for notifications", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label->setText(QApplication::translate("LogConfig", "users on the server.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogConfig: public Ui_LogConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_H
