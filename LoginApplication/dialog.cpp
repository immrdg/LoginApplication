#include "dialog.h"
#include "ui_dialog.h"
#include<QMessageBox>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);


}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QString mail=ui->lineEdit->text();
        QString pass=ui->lineEdit_2->text();
        QString username=ui->lineEdit_3->text();
        if(mail.isEmpty() && !pass.isEmpty() && !username.isEmpty())
            QMessageBox::warning(this,"empty","FILL ALL FEILDS");
        else
        {
            qDebug()<<"Email:"<<mail;
            qDebug()<<"Password:"<<pass;
            qDebug()<<"UserName:"<<username;
        }

}

void Dialog::on_pushButton_2_clicked()
{
    QApplication::quit();
}
