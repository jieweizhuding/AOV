/********************************************************************************
** Form generated from reading UI file 'dialog_delete.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_DELETE_H
#define UI_DIALOG_DELETE_H

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

class Ui_Dialog_delete
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;

    void setupUi(QDialog *Dialog_delete)
    {
        if (Dialog_delete->objectName().isEmpty())
            Dialog_delete->setObjectName("Dialog_delete");
        Dialog_delete->resize(617, 292);
        buttonBox = new QDialogButtonBox(Dialog_delete);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(220, 190, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        horizontalLayoutWidget = new QWidget(Dialog_delete);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(50, 50, 511, 80));
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


        retranslateUi(Dialog_delete);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialog_delete, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialog_delete, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog_delete);
    } // setupUi

    void retranslateUi(QDialog *Dialog_delete)
    {
        Dialog_delete->setWindowTitle(QCoreApplication::translate("Dialog_delete", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog_delete", "\351\200\211\346\213\251\345\210\240\351\231\244\347\232\204\347\202\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_delete: public Ui_Dialog_delete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_DELETE_H
