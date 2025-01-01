/********************************************************************************
** Form generated from reading UI file 'dialog_delete_arc.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_DELETE_ARC_H
#define UI_DIALOG_DELETE_ARC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_delete_arc
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QComboBox *comboBox_2;

    void setupUi(QDialog *Dialog_delete_arc)
    {
        if (Dialog_delete_arc->objectName().isEmpty())
            Dialog_delete_arc->setObjectName("Dialog_delete_arc");
        Dialog_delete_arc->resize(617, 268);
        buttonBox = new QDialogButtonBox(Dialog_delete_arc);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(240, 180, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        horizontalLayoutWidget = new QWidget(Dialog_delete_arc);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(50, 50, 491, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(horizontalLayoutWidget);
        comboBox->setObjectName("comboBox");

        horizontalLayout->addWidget(comboBox);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_2);

        comboBox_2 = new QComboBox(horizontalLayoutWidget);
        comboBox_2->setObjectName("comboBox_2");

        horizontalLayout->addWidget(comboBox_2);


        retranslateUi(Dialog_delete_arc);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialog_delete_arc, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialog_delete_arc, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog_delete_arc);
    } // setupUi

    void retranslateUi(QDialog *Dialog_delete_arc)
    {
        Dialog_delete_arc->setWindowTitle(QCoreApplication::translate("Dialog_delete_arc", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog_delete_arc", "\345\274\247\345\260\276", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_delete_arc", "\345\274\247\345\244\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_delete_arc: public Ui_Dialog_delete_arc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_DELETE_ARC_H
