/********************************************************************************
** Form generated from reading UI file 'dialog_tsort.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_TSORT_H
#define UI_DIALOG_TSORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_Tsort
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;

    void setupUi(QDialog *Dialog_Tsort)
    {
        if (Dialog_Tsort->objectName().isEmpty())
            Dialog_Tsort->setObjectName("Dialog_Tsort");
        Dialog_Tsort->resize(574, 421);
        horizontalLayoutWidget = new QWidget(Dialog_Tsort);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(-1, -1, 581, 421));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(horizontalLayoutWidget);
        listWidget->setObjectName("listWidget");

        horizontalLayout->addWidget(listWidget);


        retranslateUi(Dialog_Tsort);

        QMetaObject::connectSlotsByName(Dialog_Tsort);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Tsort)
    {
        Dialog_Tsort->setWindowTitle(QCoreApplication::translate("Dialog_Tsort", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_Tsort: public Ui_Dialog_Tsort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_TSORT_H
