/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *btnReset;
    QPushButton *btnSave;
    QPushButton *btnVerify;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_8;
    QPushButton *pushButton_4;
    QPushButton *pushButton_1;
    QPushButton *pushButton_9;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_0;
    QLabel *lblNotify;
    QPushButton *pushButton;
    QPushButton *pushButton_11;
    QPushButton *pushButton_10;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(527, 313);
        btnReset = new QPushButton(Dialog);
        btnReset->setObjectName(QString::fromUtf8("btnReset"));
        btnReset->setGeometry(QRect(110, 240, 80, 24));
        btnSave = new QPushButton(Dialog);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(230, 240, 80, 24));
        btnVerify = new QPushButton(Dialog);
        btnVerify->setObjectName(QString::fromUtf8("btnVerify"));
        btnVerify->setGeometry(QRect(350, 240, 80, 24));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(100, 10, 331, 181));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 30, 254, 138));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 3, 1, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_1 = new QPushButton(layoutWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));

        gridLayout->addWidget(pushButton_1, 1, 0, 1, 1);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout->addWidget(pushButton_9, 3, 2, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 2, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 3, 0, 1, 1);

        pushButton_0 = new QPushButton(layoutWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));

        gridLayout->addWidget(pushButton_0, 4, 1, 1, 1);

        lblNotify = new QLabel(layoutWidget);
        lblNotify->setObjectName(QString::fromUtf8("lblNotify"));

        gridLayout->addWidget(lblNotify, 0, 0, 1, 3);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 4, 0, 1, 1);

        pushButton_11 = new QPushButton(layoutWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        gridLayout->addWidget(pushButton_11, 4, 2, 1, 1);

        pushButton_10 = new QPushButton(Dialog);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(110, 200, 81, 24));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        btnReset->setText(QCoreApplication::translate("Dialog", "Reset", nullptr));
        btnSave->setText(QCoreApplication::translate("Dialog", "Save", nullptr));
        btnVerify->setText(QCoreApplication::translate("Dialog", "Verify", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "Group_numbers", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Dialog", "8", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog", "4", nullptr));
        pushButton_1->setText(QCoreApplication::translate("Dialog", "1", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Dialog", "9", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dialog", "5", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "3", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Dialog", "6", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Dialog", "7", nullptr));
        pushButton_0->setText(QCoreApplication::translate("Dialog", "0", nullptr));
        lblNotify->setText(QString());
        pushButton->setText(QCoreApplication::translate("Dialog", "Login", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Dialog", "Slett", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Dialog", "New pwd", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
