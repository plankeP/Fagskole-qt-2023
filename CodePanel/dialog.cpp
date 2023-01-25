#include "dialog.h"
#include "./ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->lblNotify->setText("Skriv inn ditt nye passord: ");
    connect(ui->pushButton_0, &QPushButton::clicked, this, &Dialog::setlblNotify);
    connect(ui->pushButton_1, &QPushButton::clicked, this, &Dialog::setlblNotify);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &Dialog::setlblNotify);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &Dialog::setlblNotify);
    connect(ui->pushButton_4, &QPushButton::clicked, this, &Dialog::setlblNotify);
    connect(ui->pushButton_5, &QPushButton::clicked, this, &Dialog::setlblNotify);
    connect(ui->pushButton_6, &QPushButton::clicked, this, &Dialog::setlblNotify);
    connect(ui->pushButton_7, &QPushButton::clicked, this, &Dialog::setlblNotify);
    connect(ui->pushButton_8, &QPushButton::clicked, this, &Dialog::setlblNotify);
    connect(ui->pushButton_9, &QPushButton::clicked, this, &Dialog::setlblNotify);

    ui->btnSave->setEnabled(true);
    ui->btnVerify->setEnabled(false);
    ui->btnReset->setEnabled(false);
}

Dialog::~Dialog()
{
    delete ui;
}





void Dialog::setlblNotify()
{
    QPushButton* btn=qobject_cast<QPushButton*>(sender());
    if(!btn) return;
    temp += btn->text();

    ui->lblNotify->setText("typed: " + temp);

}





void Dialog::on_btnSave_clicked()
{
    password = temp;
    temp.clear();

    ui->lblNotify->setText("text saved. ");
    ui->btnSave->setEnabled(false);
    ui->btnVerify->setEnabled(true);
    ui->btnReset->setEnabled(true);
}


void Dialog::on_btnVerify_clicked()
{
    if(password.isEmpty()){
        QMessageBox::critical(this, "Error", "passordet er ikke satt enda");
    }
    else{
        if(temp == password){
            QMessageBox::information(this, "good job", "passordet er likt og blir lagret");
        }
        else{
            QMessageBox::critical(this, "Error", "passord macher ikke, prøv igjen");
        }
    }
       temp.clear();
}


void Dialog::on_lblNotify_linkActivated(const QString &link)
{

}


void Dialog::on_btnReset_clicked()
{
    password.clear();
        ui->btnSave->setEnabled(true);
        ui->btnVerify->setEnabled(false);
        ui->btnReset->setEnabled(false);
}


void Dialog::on_pushButton_11_clicked()
{
//    if(temp.isEmpty()){   //do nothing
//    QMessageBox::information(this, "Information", "Nothing to erase");
    //slett siste tallet skrevet i label.
//    else{
        temp.pop_back();

//        }
//    }
}

