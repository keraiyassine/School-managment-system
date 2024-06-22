/********************************************************************************
** Form generated from reading UI file 'addteacher.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTEACHER_H
#define UI_ADDTEACHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addteacher
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *QName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *QID;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QTextEdit *QPD;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *addteacher)
    {
        if (addteacher->objectName().isEmpty())
            addteacher->setObjectName("addteacher");
        addteacher->resize(515, 390);
        addteacher->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Perpetua\";\n"
"color: rgb(0, 0, 0);"));
        verticalLayout_4 = new QVBoxLayout(addteacher);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(addteacher);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        QName = new QLineEdit(addteacher);
        QName->setObjectName("QName");
        QName->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(QName);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(addteacher);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        QID = new QLineEdit(addteacher);
        QID->setObjectName("QID");
        QID->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(QID);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(addteacher);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout_3->addWidget(label_3);

        QPD = new QTextEdit(addteacher);
        QPD->setObjectName("QPD");
        QPD->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(QPD);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");

        verticalLayout_4->addLayout(verticalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        pushButton = new QPushButton(addteacher);
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

        horizontalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(addteacher);
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

        horizontalLayout_4->addWidget(pushButton_2);


        verticalLayout_4->addLayout(horizontalLayout_4);


        retranslateUi(addteacher);

        QMetaObject::connectSlotsByName(addteacher);
    } // setupUi

    void retranslateUi(QDialog *addteacher)
    {
        addteacher->setWindowTitle(QCoreApplication::translate("addteacher", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addteacher", "Teacher name : ", nullptr));
        label_2->setText(QCoreApplication::translate("addteacher", "Teacher ID :       ", nullptr));
        label_3->setText(QCoreApplication::translate("addteacher", "professional development :", nullptr));
        pushButton->setText(QCoreApplication::translate("addteacher", "add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addteacher", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addteacher: public Ui_addteacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTEACHER_H
