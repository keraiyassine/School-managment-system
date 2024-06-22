/********************************************************************************
** Form generated from reading UI file 'examwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMWINDOW_H
#define UI_EXAMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExamWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_6;
    QLabel *label_7;
    QTreeWidget *treeWidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ExamWindow)
    {
        if (ExamWindow->objectName().isEmpty())
            ExamWindow->setObjectName("ExamWindow");
        ExamWindow->resize(755, 483);
        ExamWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(173, 173, 173);\n"
""));
        centralwidget = new QWidget(ExamWindow);
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

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        verticalLayout->addWidget(label_7);

        treeWidget = new QTreeWidget(centralwidget);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 198, 192);\n"
"font: 600 11pt \"Segoe UI Semibold\";"));

        verticalLayout->addWidget(treeWidget);

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

        verticalLayout->addWidget(pushButton, 0, Qt::AlignHCenter);

        ExamWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ExamWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 755, 22));
        ExamWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ExamWindow);
        statusbar->setObjectName("statusbar");
        ExamWindow->setStatusBar(statusbar);

        retranslateUi(ExamWindow);

        QMetaObject::connectSlotsByName(ExamWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ExamWindow)
    {
        ExamWindow->setWindowTitle(QCoreApplication::translate("ExamWindow", "MainWindow", nullptr));
        pushButton_6->setText(QCoreApplication::translate("ExamWindow", "School managment system", nullptr));
        label_7->setText(QCoreApplication::translate("ExamWindow", "Students with their courses:", nullptr));
        pushButton->setText(QCoreApplication::translate("ExamWindow", "Edit exams", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExamWindow: public Ui_ExamWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMWINDOW_H
