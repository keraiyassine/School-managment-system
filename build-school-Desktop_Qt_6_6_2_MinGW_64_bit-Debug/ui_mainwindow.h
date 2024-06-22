/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_6;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(735, 363);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setSizeIncrement(QSize(200, 200));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(148, 153, 161);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(214, 35));
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
"     padding: 5px;"));
        pushButton_6->setIconSize(QSize(20, 16));

        verticalLayout->addWidget(pushButton_6, 0, Qt::AlignHCenter);

        verticalSpacer_2 = new QSpacerItem(13, 25, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(216, 40));
        pushButton->setStyleSheet(QString::fromUtf8("font: 900 11pt \"Segoe UI Black\";\n"
"border-radius: 15px;\n"
"margin-left: 10px; border-radius: 15px; background: rgba(49, 45, 52, 253); color: #4A0C46;\n"
"color : white;\n"
" border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 20px;\n"
"     border-color: beige;\n"
"     font: bold 14px;\n"
"     min-width: 10em;\n"
"     padding: 6px;\n"
""));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(25, 17, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setMinimumSize(QSize(216, 40));
        pushButton_4->setSizeIncrement(QSize(0, 0));
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 900 11pt \"Segoe UI Black\";\n"
"border-radius: 15px;\n"
"margin-left: 10px; border-radius: 15px; background: rgba(49, 45, 52, 253); color: #4A0C46;\n"
"color : white;\n"
" border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 20px;\n"
"     border-color: beige;\n"
"     font: bold 14px;\n"
"     min-width: 10em;\n"
"     padding: 6px;"));

        horizontalLayout->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setMinimumSize(QSize(216, 40));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 900 11pt \"Segoe UI Black\";\n"
"border-radius: 15px;\n"
"margin-left: 10px; border-radius: 15px; background: rgba(49, 45, 52, 253); color: #4A0C46;\n"
"color : white;\n"
" border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 20px;\n"
"     border-color: beige;\n"
"     font: bold 14px;\n"
"     min-width: 10em;\n"
"     padding: 6px;"));

        horizontalLayout_2->addWidget(pushButton_3);

        horizontalSpacer_2 = new QSpacerItem(25, 17, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setMinimumSize(QSize(216, 40));
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 900 11pt \"Segoe UI Black\";\n"
"border-radius: 15px;\n"
"margin-left: 10px; border-radius: 15px; background: rgba(49, 45, 52, 253); color: #4A0C46;\n"
"color : white;\n"
" border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 20px;\n"
"     border-color: beige;\n"
"     font: bold 14px;\n"
"     min-width: 10em;\n"
"     padding: 6px;"));

        horizontalLayout_2->addWidget(pushButton_5);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(13, 25, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        verticalLayout->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralwidget);
        pushButton_6->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "School managment system", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Students", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Teachers", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_3->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>courses</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Courses", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "About app", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
