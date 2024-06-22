/********************************************************************************
** Form generated from reading UI file 'addcourse.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCOURSE_H
#define UI_ADDCOURSE_H

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

class Ui_addcourse
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *QCN;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *QCY;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *QCC;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *QFE;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *QMT;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *QT1;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *QT2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *QT3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *addcourse)
    {
        if (addcourse->objectName().isEmpty())
            addcourse->setObjectName("addcourse");
        addcourse->resize(427, 363);
        verticalLayout = new QVBoxLayout(addcourse);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(addcourse);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        QCN = new QLineEdit(addcourse);
        QCN->setObjectName("QCN");
        QCN->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(QCN);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(addcourse);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        QCY = new QLineEdit(addcourse);
        QCY->setObjectName("QCY");
        QCY->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(QCY);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(addcourse);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        QCC = new QLineEdit(addcourse);
        QCC->setObjectName("QCC");
        QCC->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(QCC);


        verticalLayout->addLayout(horizontalLayout_4);

        label_4 = new QLabel(addcourse);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        verticalLayout->addWidget(label_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_5 = new QLabel(addcourse);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout_8->addWidget(label_5);

        horizontalSpacer_9 = new QSpacerItem(37, 25, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);

        QFE = new QLineEdit(addcourse);
        QFE->setObjectName("QFE");
        QFE->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_8->addWidget(QFE);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_6 = new QLabel(addcourse);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout_9->addWidget(label_6);

        horizontalSpacer_8 = new QSpacerItem(37, 25, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);

        QMT = new QLineEdit(addcourse);
        QMT->setObjectName("QMT");
        QMT->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_9->addWidget(QMT);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_7 = new QLabel(addcourse);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout_7->addWidget(label_7);

        horizontalSpacer_7 = new QSpacerItem(37, 25, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        QT1 = new QLineEdit(addcourse);
        QT1->setObjectName("QT1");
        QT1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(QT1);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_8 = new QLabel(addcourse);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout_6->addWidget(label_8);

        horizontalSpacer_6 = new QSpacerItem(37, 25, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        QT2 = new QLineEdit(addcourse);
        QT2->setObjectName("QT2");
        QT2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(QT2);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_9 = new QLabel(addcourse);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout_5->addWidget(label_9);

        horizontalSpacer_5 = new QSpacerItem(37, 25, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        QT3 = new QLineEdit(addcourse);
        QT3->setObjectName("QT3");
        QT3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(QT3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(addcourse);
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

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(addcourse);
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

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(addcourse);

        QMetaObject::connectSlotsByName(addcourse);
    } // setupUi

    void retranslateUi(QDialog *addcourse)
    {
        addcourse->setWindowTitle(QCoreApplication::translate("addcourse", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addcourse", "Course name :", nullptr));
        label_2->setText(QCoreApplication::translate("addcourse", "Course year :   ", nullptr));
        label_3->setText(QCoreApplication::translate("addcourse", "Coourse coef : ", nullptr));
        label_4->setText(QCoreApplication::translate("addcourse", "Exams Percentages: (100%)", nullptr));
        label_5->setText(QCoreApplication::translate("addcourse", "Final exam:", nullptr));
        label_6->setText(QCoreApplication::translate("addcourse", "Midterm:    ", nullptr));
        label_7->setText(QCoreApplication::translate("addcourse", "Test 1:          ", nullptr));
        label_8->setText(QCoreApplication::translate("addcourse", "Test 2:         ", nullptr));
        label_9->setText(QCoreApplication::translate("addcourse", "Test 3:         ", nullptr));
        pushButton->setText(QCoreApplication::translate("addcourse", "add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addcourse", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addcourse: public Ui_addcourse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOURSE_H
