/********************************************************************************
** Form generated from reading UI file 'addstudent.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENT_H
#define UI_ADDSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addstudent
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *QID;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *QName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *QYear;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *QGroup;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *cancel_button;

    void setupUi(QDialog *addstudent)
    {
        if (addstudent->objectName().isEmpty())
            addstudent->setObjectName("addstudent");
        addstudent->resize(391, 302);
        verticalLayout = new QVBoxLayout(addstudent);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(addstudent);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout_4->addWidget(label);

        QID = new QLineEdit(addstudent);
        QID->setObjectName("QID");
        QID->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(QID, 0, Qt::AlignHCenter);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(addstudent);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout_3->addWidget(label_2);

        QName = new QLineEdit(addstudent);
        QName->setObjectName("QName");
        QName->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(QName, 0, Qt::AlignHCenter);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(addstudent);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout_2->addWidget(label_3);

        QYear = new QLineEdit(addstudent);
        QYear->setObjectName("QYear");
        QYear->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(QYear, 0, Qt::AlignHCenter);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(addstudent);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout->addWidget(label_4);

        QGroup = new QLineEdit(addstudent);
        QGroup->setObjectName("QGroup");
        QGroup->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(QGroup, 0, Qt::AlignHCenter);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        pushButton = new QPushButton(addstudent);
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

        horizontalLayout_5->addWidget(pushButton);

        cancel_button = new QPushButton(addstudent);
        cancel_button->setObjectName("cancel_button");
        cancel_button->setStyleSheet(QString::fromUtf8("font: 900 11pt \"Segoe UI Black\";\n"
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

        horizontalLayout_5->addWidget(cancel_button);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(addstudent);

        QMetaObject::connectSlotsByName(addstudent);
    } // setupUi

    void retranslateUi(QDialog *addstudent)
    {
        addstudent->setWindowTitle(QCoreApplication::translate("addstudent", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addstudent", "ID : ", nullptr));
        label_2->setText(QCoreApplication::translate("addstudent", "Name :", nullptr));
        label_3->setText(QCoreApplication::translate("addstudent", "Year :", nullptr));
        label_4->setText(QCoreApplication::translate("addstudent", "Group :", nullptr));
        pushButton->setText(QCoreApplication::translate("addstudent", "add", nullptr));
        cancel_button->setText(QCoreApplication::translate("addstudent", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addstudent: public Ui_addstudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENT_H
