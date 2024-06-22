/********************************************************************************
** Form generated from reading UI file 'teacherview.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERVIEW_H
#define UI_TEACHERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_teacherview
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *QID;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *QName;
    QLabel *label_6;
    QTextBrowser *textBrowser;
    QLabel *label_5;
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *teacherview)
    {
        if (teacherview->objectName().isEmpty())
            teacherview->setObjectName("teacherview");
        teacherview->resize(490, 451);
        verticalLayout = new QVBoxLayout(teacherview);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(teacherview);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout->addWidget(label);

        QID = new QLabel(teacherview);
        QID->setObjectName("QID");
        QID->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(QID);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(teacherview);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout_2->addWidget(label_2);

        QName = new QLabel(teacherview);
        QName->setObjectName("QName");
        QName->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(QName);


        verticalLayout->addLayout(horizontalLayout_2);

        label_6 = new QLabel(teacherview);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        verticalLayout->addWidget(label_6);

        textBrowser = new QTextBrowser(teacherview);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 198, 192);\n"
"font: 600 11pt \"Segoe UI Semibold\";"));

        verticalLayout->addWidget(textBrowser);

        label_5 = new QLabel(teacherview);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        verticalLayout->addWidget(label_5);

        listWidget = new QListWidget(teacherview);
        listWidget->setObjectName("listWidget");
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 198, 192);\n"
"font: 600 11pt \"Segoe UI Semibold\";"));

        verticalLayout->addWidget(listWidget);

        pushButton = new QPushButton(teacherview);
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

        verticalLayout->addWidget(pushButton);


        retranslateUi(teacherview);

        QMetaObject::connectSlotsByName(teacherview);
    } // setupUi

    void retranslateUi(QDialog *teacherview)
    {
        teacherview->setWindowTitle(QCoreApplication::translate("teacherview", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("teacherview", "ID", nullptr));
        QID->setText(QCoreApplication::translate("teacherview", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("teacherview", "Name", nullptr));
        QName->setText(QCoreApplication::translate("teacherview", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("teacherview", "Professional development", nullptr));
        label_5->setText(QCoreApplication::translate("teacherview", "courses taught", nullptr));
        pushButton->setText(QCoreApplication::translate("teacherview", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teacherview: public Ui_teacherview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERVIEW_H
