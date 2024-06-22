/********************************************************************************
** Form generated from reading UI file 'studentview.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTVIEW_H
#define UI_STUDENTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_studentview
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *ID_label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *Name_label;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *Year_label;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLabel *Group_label;
    QHBoxLayout *horizontalLayout_4;
    QLabel *NC_lable;
    QSpacerItem *horizontalSpacer;
    QLabel *TA_label;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLabel *average;
    QPushButton *pushButton;

    void setupUi(QDialog *studentview)
    {
        if (studentview->objectName().isEmpty())
            studentview->setObjectName("studentview");
        studentview->resize(512, 497);
        verticalLayout = new QVBoxLayout(studentview);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(studentview);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout->addWidget(label, 0, Qt::AlignLeft);

        ID_label = new QLabel(studentview);
        ID_label->setObjectName("ID_label");
        ID_label->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(ID_label, 0, Qt::AlignLeft);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(studentview);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout_2->addWidget(label_2);

        Name_label = new QLabel(studentview);
        Name_label->setObjectName("Name_label");
        Name_label->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(Name_label);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(studentview);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout_3->addWidget(label_3);

        Year_label = new QLabel(studentview);
        Year_label->setObjectName("Year_label");
        Year_label->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(Year_label);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_4 = new QLabel(studentview);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout_6->addWidget(label_4);

        Group_label = new QLabel(studentview);
        Group_label->setObjectName("Group_label");
        Group_label->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_6->addWidget(Group_label);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        NC_lable = new QLabel(studentview);
        NC_lable->setObjectName("NC_lable");
        NC_lable->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout_4->addWidget(NC_lable);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        TA_label = new QLabel(studentview);
        TA_label->setObjectName("TA_label");
        TA_label->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout_4->addWidget(TA_label);


        verticalLayout->addLayout(horizontalLayout_4);

        tableWidget = new QTableWidget(studentview);
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
"font: 600 12pt \"Segoe UI Semibold\";"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_2 = new QPushButton(studentview);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 900 11pt \"Segoe UI Black\";\n"
"border-radius: 15px;\n"
"margin-left: 4px; border-radius: 15px; background: rgba(49, 45, 52, 253); color: #4A0C46;\n"
"color : white;\n"
" border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 15px;\n"
"     border-color: beige;\n"
"     font: bold 13px;\n"
"     min-width: 4em;\n"
"     padding: 5px;"));

        horizontalLayout_5->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        spinBox = new QSpinBox(studentview);
        spinBox->setObjectName("spinBox");
        spinBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 12pt \"Segoe UI\";\n"
""));

        horizontalLayout_5->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_5 = new QLabel(studentview);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(162, 0, 0);"));

        horizontalLayout_7->addWidget(label_5);

        average = new QLabel(studentview);
        average->setObjectName("average");
        average->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Perpetua\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_7->addWidget(average);


        verticalLayout->addLayout(horizontalLayout_7);

        pushButton = new QPushButton(studentview);
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


        retranslateUi(studentview);

        QMetaObject::connectSlotsByName(studentview);
    } // setupUi

    void retranslateUi(QDialog *studentview)
    {
        studentview->setWindowTitle(QCoreApplication::translate("studentview", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("studentview", "ID :", nullptr));
        ID_label->setText(QCoreApplication::translate("studentview", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("studentview", "Name :", nullptr));
        Name_label->setText(QCoreApplication::translate("studentview", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("studentview", "Year :", nullptr));
        Year_label->setText(QCoreApplication::translate("studentview", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("studentview", "Group :", nullptr));
        Group_label->setText(QCoreApplication::translate("studentview", "TextLabel", nullptr));
        NC_lable->setText(QCoreApplication::translate("studentview", "number of courses : ", nullptr));
        TA_label->setText(QCoreApplication::translate("studentview", "total absences : ", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("studentview", "course", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("studentview", "absence", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("studentview", "average", nullptr));
        pushButton_2->setText(QCoreApplication::translate("studentview", "edit exam", nullptr));
        label_5->setText(QCoreApplication::translate("studentview", "Total average:", nullptr));
        average->setText(QCoreApplication::translate("studentview", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("studentview", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class studentview: public Ui_studentview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTVIEW_H
