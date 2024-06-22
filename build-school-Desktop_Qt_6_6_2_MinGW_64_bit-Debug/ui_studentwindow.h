/********************************************************************************
** Form generated from reading UI file 'studentwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTWINDOW_H
#define UI_STUDENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentwindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_6;
    QLabel *totalS;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboBox;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *search;
    QPushButton *searchButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *studentwindow)
    {
        if (studentwindow->objectName().isEmpty())
            studentwindow->setObjectName("studentwindow");
        studentwindow->resize(682, 455);
        studentwindow->setStyleSheet(QString::fromUtf8("background-color: rgb(173, 173, 173);\n"
""));
        centralwidget = new QWidget(studentwindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(216, 35));
        pushButton_6->setMaximumSize(QSize(16777215, 24));
        pushButton_6->setSizeIncrement(QSize(300, 100));
        pushButton_6->setStyleSheet(QString::fromUtf8("font: 900 11pt \"Segoe UI Black\";\n"
"border-radius: 15px;\n"
"margin-left: 10px; border-radius: 15px; background: #282d7c; color: #4A0C46;\n"
"background-color: rgb(40, 45, 124);\n"
"background-color: rgb(76, 78, 156);\n"
"color : white;\n"
" border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 15px;\n"
"     border-color: beige;\n"
"     font: bold 14px;\n"
"     min-width: 10em;\n"
"     padding: 6px;"));
        pushButton_6->setIconSize(QSize(20, 16));

        verticalLayout->addWidget(pushButton_6, 0, Qt::AlignHCenter|Qt::AlignTop);

        totalS = new QLabel(centralwidget);
        totalS->setObjectName("totalS");
        totalS->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        verticalLayout->addWidget(totalS, 0, Qt::AlignTop);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout->addWidget(label_2);

        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 197, 115);\n"
"font: 900 11pt \"Segoe UI Black\";\n"
"border-radius: 5px;\n"
"margin-left: 10px; border-radius: 15px; background: #282d7c; color: #4A0C46;\n"
"color : white;\n"
" border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 10px;\n"
"     border-color: beige;\n"
"     font: bold 14px;\n"
"     min-width: 2em;\n"
"     padding: 6px;"));

        horizontalLayout->addWidget(comboBox, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QBrush brush(QColor(197, 27, 30, 255));
        brush.setStyle(Qt::SolidPattern);
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        __qtablewidgetitem->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        __qtablewidgetitem1->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        __qtablewidgetitem2->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        __qtablewidgetitem3->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy1);
        tableWidget->setMinimumSize(QSize(0, 100));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 198, 192);\n"
"font: 600 11pt \"Segoe UI Semibold\";"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->verticalHeader()->setVisible(true);

        verticalLayout_2->addWidget(tableWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        search = new QLineEdit(centralwidget);
        search->setObjectName("search");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(search->sizePolicy().hasHeightForWidth());
        search->setSizePolicy(sizePolicy2);
        search->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(search);

        searchButton = new QPushButton(centralwidget);
        searchButton->setObjectName("searchButton");
        searchButton->setStyleSheet(QString::fromUtf8(" border-style: outset;\n"
"     border-width: 1.5px;\n"
"     border-radius: 15px;\n"
"     border-color: beige;\n"
"     font: bold 4px;\n"
"     min-width: 2em;\n"
"     padding: 6px;"));

        horizontalLayout_2->addWidget(searchButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("font: 900 11pt \"Segoe UI Black\";\n"
"border-radius: 15px;\n"
"margin-left: 10px; border-radius: 15px; background: rgba(49, 45, 52, 253); color: #4A0C46;\n"
"color : white;\n"
" border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 15px;\n"
"     border-color: beige;\n"
"     font: bold 13px;\n"
"     min-width: 4em;\n"
"     padding: 5px;"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 900 11pt \"Segoe UI Black\";\n"
"border-radius: 15px;\n"
"margin-left: 10px; border-radius: 15px; background: rgba(49, 45, 52, 253); color: #4A0C46;\n"
"color : white;\n"
" border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 15px;\n"
"     border-color: beige;\n"
"     font: bold 13px;\n"
"     min-width: 4em;\n"
"     padding: 5px;"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 900 11pt \"Segoe UI Black\";\n"
"border-radius: 15px;\n"
"margin-left: 10px; border-radius: 15px; background: rgba(49, 45, 52, 253); color: #4A0C46;\n"
"color : white;\n"
" border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 15px;\n"
"     border-color: beige;\n"
"     font: bold 13px;\n"
"     min-width: 4em;\n"
"     padding: 5px;"));

        horizontalLayout_2->addWidget(pushButton_3);


        verticalLayout_2->addLayout(horizontalLayout_2);

        studentwindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(studentwindow);
        statusbar->setObjectName("statusbar");
        studentwindow->setStatusBar(statusbar);

        retranslateUi(studentwindow);

        QMetaObject::connectSlotsByName(studentwindow);
    } // setupUi

    void retranslateUi(QMainWindow *studentwindow)
    {
        studentwindow->setWindowTitle(QCoreApplication::translate("studentwindow", "MainWindow", nullptr));
        pushButton_6->setText(QCoreApplication::translate("studentwindow", "School managment system", nullptr));
        totalS->setText(QCoreApplication::translate("studentwindow", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("studentwindow", "list of students:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("studentwindow", "all", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("studentwindow", "1", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("studentwindow", "2", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("studentwindow", "3", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("studentwindow", "4", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("studentwindow", "5", nullptr));

        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("studentwindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("studentwindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("studentwindow", "Year", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("studentwindow", "Group", nullptr));
        searchButton->setText(QString());
        pushButton->setText(QCoreApplication::translate("studentwindow", "add/edit", nullptr));
        pushButton_2->setText(QCoreApplication::translate("studentwindow", "remove", nullptr));
        pushButton_3->setText(QCoreApplication::translate("studentwindow", "view", nullptr));
    } // retranslateUi

};

namespace Ui {
    class studentwindow: public Ui_studentwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTWINDOW_H
