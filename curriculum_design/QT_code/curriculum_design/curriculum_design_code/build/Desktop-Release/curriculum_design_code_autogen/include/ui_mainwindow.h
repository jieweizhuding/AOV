/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *add_v_button;
    QPushButton *delete_button;
    QTableWidget *tableWidget;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QPushButton *add_arc_button;
    QPushButton *delete_arc_button;
    QTableWidget *tableWidget_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QGraphicsView *graphicsView;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_6;
    QPushButton *new_button;
    QPushButton *open_button;
    QPushButton *save_button;
    QPushButton *DAG_button;
    QPushButton *Tsort_button;
    QSpacerItem *verticalSpacer;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *textBrowser;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 266, 561));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        add_v_button = new QPushButton(verticalLayoutWidget);
        add_v_button->setObjectName("add_v_button");

        horizontalLayout->addWidget(add_v_button);

        delete_button = new QPushButton(verticalLayoutWidget);
        delete_button->setObjectName("delete_button");

        horizontalLayout->addWidget(delete_button);


        verticalLayout_2->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(verticalLayoutWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName("tableWidget");

        verticalLayout_2->addWidget(tableWidget);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        add_arc_button = new QPushButton(verticalLayoutWidget);
        add_arc_button->setObjectName("add_arc_button");

        horizontalLayout_4->addWidget(add_arc_button);

        delete_arc_button = new QPushButton(verticalLayoutWidget);
        delete_arc_button->setObjectName("delete_arc_button");

        horizontalLayout_4->addWidget(delete_arc_button);


        verticalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout_5);


        verticalLayout->addLayout(verticalLayout_2);

        tableWidget_2 = new QTableWidget(verticalLayoutWidget);
        if (tableWidget_2->columnCount() < 2)
            tableWidget_2->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        tableWidget_2->setObjectName("tableWidget_2");

        verticalLayout->addWidget(tableWidget_2);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(250, 0, 391, 561));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        graphicsView = new QGraphicsView(horizontalLayoutWidget_2);
        graphicsView->setObjectName("graphicsView");

        horizontalLayout_5->addWidget(graphicsView);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(640, 0, 161, 511));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        new_button = new QPushButton(verticalLayoutWidget_2);
        new_button->setObjectName("new_button");

        verticalLayout_6->addWidget(new_button);

        open_button = new QPushButton(verticalLayoutWidget_2);
        open_button->setObjectName("open_button");

        verticalLayout_6->addWidget(open_button);

        save_button = new QPushButton(verticalLayoutWidget_2);
        save_button->setObjectName("save_button");

        verticalLayout_6->addWidget(save_button);

        DAG_button = new QPushButton(verticalLayoutWidget_2);
        DAG_button->setObjectName("DAG_button");

        verticalLayout_6->addWidget(DAG_button);

        Tsort_button = new QPushButton(verticalLayoutWidget_2);
        Tsort_button->setObjectName("Tsort_button");

        verticalLayout_6->addWidget(Tsort_button);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(640, 510, 161, 51));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(verticalLayoutWidget_3);
        textBrowser->setObjectName("textBrowser");

        verticalLayout_3->addWidget(textBrowser);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\351\241\266\347\202\271\344\277\241\346\201\257", nullptr));
        add_v_button->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\266\347\202\271", nullptr));
        delete_button->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\351\241\266\347\202\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\344\277\241\346\201\257", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\350\276\271\344\277\241\346\201\257", nullptr));
        add_arc_button->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\276\271", nullptr));
        delete_arc_button->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\276\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\345\274\247\345\260\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\345\274\247\345\244\264", nullptr));
        new_button->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
        open_button->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        save_button->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        DAG_button->setText(QCoreApplication::translate("MainWindow", "\347\273\230\345\210\266\345\233\276", nullptr));
        Tsort_button->setText(QCoreApplication::translate("MainWindow", "\346\213\223\346\211\221\346\216\222\345\272\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
