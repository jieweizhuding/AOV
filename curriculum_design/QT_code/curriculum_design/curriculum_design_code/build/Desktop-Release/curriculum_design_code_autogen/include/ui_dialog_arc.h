/********************************************************************************
** Form generated from reading UI file 'dialog_arc.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_ARC_H
#define UI_DIALOG_ARC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_arc
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;

    void setupUi(QDialog *Dialog_arc)
    {
        if (Dialog_arc->objectName().isEmpty())
            Dialog_arc->setObjectName("Dialog_arc");
        Dialog_arc->resize(658, 443);
        buttonBox = new QDialogButtonBox(Dialog_arc);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(260, 360, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        verticalLayoutWidget = new QWidget(Dialog_arc);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(80, 80, 471, 211));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        comboBox_3 = new QComboBox(verticalLayoutWidget);
        comboBox_3->setObjectName("comboBox_3");

        horizontalLayout_2->addWidget(comboBox_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->setObjectName("comboBox");

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Dialog_arc);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialog_arc, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialog_arc, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog_arc);
    } // setupUi

    void retranslateUi(QDialog *Dialog_arc)
    {
        Dialog_arc->setWindowTitle(QCoreApplication::translate("Dialog_arc", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_arc", "\345\274\247\345\260\276", nullptr));
        label->setText(QCoreApplication::translate("Dialog_arc", "\345\274\247\345\244\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_arc: public Ui_Dialog_arc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_ARC_H
