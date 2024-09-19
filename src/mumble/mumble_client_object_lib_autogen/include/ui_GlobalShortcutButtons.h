/********************************************************************************
** Form generated from reading UI file 'GlobalShortcutButtons.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLOBALSHORTCUTBUTTONS_H
#define UI_GLOBALSHORTCUTBUTTONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GlobalShortcutButtons
{
public:
    QVBoxLayout *mainLayout;
    QGroupBox *groupBox;
    QVBoxLayout *groupBoxLayout;
    QTreeWidget *buttonTree;
    QHBoxLayout *buttonLayout;
    QPushButton *addButton;
    QPushButton *removeButton;
    QSpacerItem *buttonSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GlobalShortcutButtons)
    {
        if (GlobalShortcutButtons->objectName().isEmpty())
            GlobalShortcutButtons->setObjectName(QString::fromUtf8("GlobalShortcutButtons"));
        GlobalShortcutButtons->resize(250, 250);
        mainLayout = new QVBoxLayout(GlobalShortcutButtons);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        groupBox = new QGroupBox(GlobalShortcutButtons);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBoxLayout = new QVBoxLayout(groupBox);
        groupBoxLayout->setObjectName(QString::fromUtf8("groupBoxLayout"));
        buttonTree = new QTreeWidget(groupBox);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        buttonTree->setHeaderItem(__qtreewidgetitem);
        buttonTree->setObjectName(QString::fromUtf8("buttonTree"));
        buttonTree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        buttonTree->setHeaderHidden(true);

        groupBoxLayout->addWidget(buttonTree);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        addButton = new QPushButton(groupBox);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setCheckable(true);

        buttonLayout->addWidget(addButton);

        removeButton = new QPushButton(groupBox);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        buttonLayout->addWidget(removeButton);

        buttonSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(buttonSpacer);


        groupBoxLayout->addLayout(buttonLayout);


        mainLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(GlobalShortcutButtons);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        mainLayout->addWidget(buttonBox);


        retranslateUi(GlobalShortcutButtons);
        QObject::connect(buttonBox, SIGNAL(accepted()), GlobalShortcutButtons, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GlobalShortcutButtons, SLOT(reject()));

        QMetaObject::connectSlotsByName(GlobalShortcutButtons);
    } // setupUi

    void retranslateUi(QDialog *GlobalShortcutButtons)
    {
        GlobalShortcutButtons->setWindowTitle(QApplication::translate("GlobalShortcutButtons", "Edit shortcut", nullptr));
        groupBox->setTitle(QApplication::translate("GlobalShortcutButtons", "Edit shortcut", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        buttonTree->setAccessibleName(QApplication::translate("GlobalShortcutButtons", "List of shortcuts", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QApplication::translate("GlobalShortcutButtons", "Start capture process", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        addButton->setWhatsThis(QApplication::translate("GlobalShortcutButtons", "<html><head/><body><p>Starts the capture process: all buttons you press will be added to the tree.</p><p>Once all buttons are released, the capture process stops automatically.</p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        addButton->setAccessibleDescription(QApplication::translate("GlobalShortcutButtons", "Toggling this button will make the application listen for a shortcut. Once the shortcut is entered, the application stops listening for a shortcut. Multiple shortcuts can be assigned to the current action. Navigate to the shortcut list above to review the shortcuts currently assigned to the current action.", nullptr));
#endif // QT_NO_ACCESSIBILITY
        addButton->setText(QApplication::translate("GlobalShortcutButtons", "Add", nullptr));
#ifndef QT_NO_TOOLTIP
        removeButton->setToolTip(QApplication::translate("GlobalShortcutButtons", "Remove the currently selected items", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        removeButton->setAccessibleDescription(QApplication::translate("GlobalShortcutButtons", "This button will remove the selected shortcut for the current action. Note that you will have to select a shortcut from the list above first before this button has any effect.", nullptr));
#endif // QT_NO_ACCESSIBILITY
        removeButton->setText(QApplication::translate("GlobalShortcutButtons", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GlobalShortcutButtons: public Ui_GlobalShortcutButtons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLOBALSHORTCUTBUTTONS_H
