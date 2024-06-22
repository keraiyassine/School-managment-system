/********************************************************************************
** Form generated from reading UI file 'coursewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSEWINDOW_H
#define UI_COURSEWINDOW_H

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

class Ui_coursewindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_6;
    QSpacerItem *verticalSpacer_2;
    QLabel *QTotalC;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBox;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *search;
    QPushButton *searchButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *add_button;
    QPushButton *remove_button;
    QPushButton *view_button;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *coursewindow)
    {
        if (coursewindow->objectName().isEmpty())
            coursewindow->setObjectName("coursewindow");
        coursewindow->resize(656, 421);
        coursewindow->setStyleSheet(QString::fromUtf8("background-color: rgb(173, 173, 173);\n"
""));
        centralwidget = new QWidget(coursewindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
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

        verticalLayout->addWidget(pushButton_6, 0, Qt::AlignHCenter);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        QTotalC = new QLabel(centralwidget);
        QTotalC->setObjectName("QTotalC");
        QTotalC->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        verticalLayout->addWidget(QTotalC);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout_2->addWidget(label);

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

        horizontalLayout_2->addWidget(comboBox, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout_2);

        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
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
        tableWidget->setObjectName("tableWidget");
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 198, 192);\n"
"font: 600 11pt \"Segoe UI Semibold\";"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        search = new QLineEdit(centralwidget);
        search->setObjectName("search");
        search->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(search);

        searchButton = new QPushButton(centralwidget);
        searchButton->setObjectName("searchButton");
        searchButton->setStyleSheet(QString::fromUtf8(" border-style: outset;\n"
"     border-width: 1.5px;\n"
"     border-radius: 10px;\n"
"     border-color: beige;\n"
"     font: bold 4px;\n"
"     min-width: 2em;\n"
"     padding: 6px;"));

        horizontalLayout->addWidget(searchButton);

        horizontalSpacer = new QSpacerItem(228, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        add_button = new QPushButton(centralwidget);
        add_button->setObjectName("add_button");
        add_button->setStyleSheet(QString::fromUtf8("font: 900 11pt \"Segoe UI Black\";\n"
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

        horizontalLayout->addWidget(add_button);

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

        view_button = new QPushButton(centralwidget);
        view_button->setObjectName("view_button");
        view_button->setStyleSheet(QString::fromUtf8("font: 900 11pt \"Segoe UI Black\";\n"
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

        horizontalLayout->addWidget(view_button);


        verticalLayout->addLayout(horizontalLayout);

        coursewindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(coursewindow);
        statusbar->setObjectName("statusbar");
        coursewindow->setStatusBar(statusbar);

        retranslateUi(coursewindow);

        QMetaObject::connectSlotsByName(coursewindow);
    } // setupUi

    void retranslateUi(QMainWindow *coursewindow)
    {
        coursewindow->setWindowTitle(QCoreApplication::translate("coursewindow", "MainWindow", nullptr));
        pushButton_6->setText(QCoreApplication::translate("coursewindow", "School managment system", nullptr));
        QTotalC->setText(QCoreApplication::translate("coursewindow", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("coursewindow", "List of courses", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("coursewindow", "all", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("coursewindow", "1", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("coursewindow", "2", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("coursewindow", "3", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("coursewindow", "4", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("coursewindow", "5", nullptr));

        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("coursewindow", "course", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("coursewindow", "year", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("coursewindow", "coef", nullptr));
        searchButton->setText(QString());
        add_button->setText(QCoreApplication::translate("coursewindow", "add/edit", nullptr));
        remove_button->setText(QCoreApplication::translate("coursewindow", "remove", nullptr));
        view_button->setText(QCoreApplication::translate("coursewindow", "view", nullptr));
    } // retranslateUi

};

namespace Ui {
    class coursewindow: public Ui_coursewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSEWINDOW_H
