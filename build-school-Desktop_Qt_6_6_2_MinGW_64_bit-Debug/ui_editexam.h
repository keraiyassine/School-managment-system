/********************************************************************************
** Form generated from reading UI file 'editexam.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITEXAM_H
#define UI_EDITEXAM_H

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

class Ui_EditExam
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *QFE;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *QMT;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *QT1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *QT2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *QT3;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *EditExam)
    {
        if (EditExam->objectName().isEmpty())
            EditExam->setObjectName("EditExam");
        EditExam->resize(546, 460);
        verticalLayout = new QVBoxLayout(EditExam);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(EditExam);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        QFE = new QLineEdit(EditExam);
        QFE->setObjectName("QFE");
        QFE->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(QFE);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(EditExam);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        QMT = new QLineEdit(EditExam);
        QMT->setObjectName("QMT");
        QMT->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(QMT);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(EditExam);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        QT1 = new QLineEdit(EditExam);
        QT1->setObjectName("QT1");
        QT1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(QT1);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(EditExam);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        QT2 = new QLineEdit(EditExam);
        QT2->setObjectName("QT2");
        QT2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(QT2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(EditExam);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        QT3 = new QLineEdit(EditExam);
        QT3->setObjectName("QT3");
        QT3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(QT3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        pushButton_2 = new QPushButton(EditExam);
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

        horizontalLayout_6->addWidget(pushButton_2);

        pushButton = new QPushButton(EditExam);
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

        horizontalLayout_6->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(EditExam);

        QMetaObject::connectSlotsByName(EditExam);
    } // setupUi

    void retranslateUi(QDialog *EditExam)
    {
        EditExam->setWindowTitle(QCoreApplication::translate("EditExam", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EditExam", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("EditExam", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("EditExam", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("EditExam", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("EditExam", "TextLabel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("EditExam", "Edit", nullptr));
        pushButton->setText(QCoreApplication::translate("EditExam", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditExam: public Ui_EditExam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITEXAM_H
