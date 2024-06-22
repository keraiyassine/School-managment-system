/********************************************************************************
** Form generated from reading UI file 'teacherwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERWINDOW_H
#define UI_TEACHERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_teacherwindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_6;
    QSpacerItem *verticalSpacer_2;
    QLabel *QTotalT;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *search;
    QPushButton *searchButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QPushButton *remove_button;
    QPushButton *pushButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *teacherwindow)
    {
        if (teacherwindow->objectName().isEmpty())
            teacherwindow->setObjectName("teacherwindow");
        teacherwindow->resize(619, 413);
        teacherwindow->setStyleSheet(QString::fromUtf8("background-color: rgb(173, 173, 173);\n"
""));
        centralwidget = new QWidget(teacherwindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
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

        verticalLayout_2->addWidget(pushButton_6, 0, Qt::AlignHCenter);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        QTotalT = new QLabel(centralwidget);
        QTotalT->setObjectName("QTotalT");
        QTotalT->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        verticalLayout_2->addWidget(QTotalT);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        verticalLayout->addWidget(label_2);

        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QBrush brush(QColor(197, 27, 30, 255));
        brush.setStyle(Qt::SolidPattern);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(15);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        __qtablewidgetitem->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        __qtablewidgetitem1->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 198, 192);\n"
"font: 600 11pt \"Segoe UI Semibold\";"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout->addWidget(tableWidget);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        search = new QLineEdit(centralwidget);
        search->setObjectName("search");
        search->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(search, 0, Qt::AlignLeft);

        searchButton = new QPushButton(centralwidget);
        searchButton->setObjectName("searchButton");
        searchButton->setStyleSheet(QString::fromUtf8(" border-style: outset;\n"
"     border-width: 1.5px;\n"
"     border-radius: 15px;\n"
"     border-color: beige;\n"
"     font: bold 4px;\n"
"     min-width: 2em;\n"
"     padding: 6px;"));

        horizontalLayout->addWidget(searchButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

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

        horizontalLayout->addWidget(pushButton_3);

        remove_button = new QPushButton(centralwidget);
        remove_button->setObjectName("remove_button");
        remove_button->setStyleSheet(QString::fromUtf8("font: 900 11pt \"Segoe UI Black\";\n"
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

        horizontalLayout->addWidget(remove_button);

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

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        teacherwindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(teacherwindow);
        statusBar->setObjectName("statusBar");
        teacherwindow->setStatusBar(statusBar);

        retranslateUi(teacherwindow);

        QMetaObject::connectSlotsByName(teacherwindow);
    } // setupUi

    void retranslateUi(QMainWindow *teacherwindow)
    {
        teacherwindow->setWindowTitle(QCoreApplication::translate("teacherwindow", "MainWindow", nullptr));
        pushButton_6->setText(QCoreApplication::translate("teacherwindow", "School managment system", nullptr));
        QTotalT->setText(QCoreApplication::translate("teacherwindow", "Total techchers: ", nullptr));
        label_2->setText(QCoreApplication::translate("teacherwindow", "List of techers: ", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("teacherwindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("teacherwindow", "Name", nullptr));
        searchButton->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("teacherwindow", "add/edit", nullptr));
        remove_button->setText(QCoreApplication::translate("teacherwindow", "remove", nullptr));
        pushButton->setText(QCoreApplication::translate("teacherwindow", "view", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teacherwindow: public Ui_teacherwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERWINDOW_H
