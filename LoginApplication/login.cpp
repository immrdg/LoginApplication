#include "login.h"
#include<QLabel>
#include<QLineEdit>
#include<QPushButton>
#include<QMessageBox>
#include<dialog.h>
Login::Login(QWidget *parent)
    : QMainWindow(parent)
{
    QLabel *iicon=new QLabel(this);
    iicon->setGeometry(270,50,221,191);
    iicon->setStyleSheet("border-image:url(:/i/login.png)");

    QLabel *iuser=new QLabel(this);
    iuser->setGeometry(190,280,41,31);
    iuser->setStyleSheet("border-image:url(:/i/user.png)");

    QLabel *ipass=new QLabel(this);
    ipass->setGeometry(190,330,41,31);
    ipass->setStyleSheet("border-image:url(:/i/pass.png)");

    QFont winterland("winterland", 11, QFont::Bold);

    QLabel *user=new QLabel(this);
    user->setGeometry(240,280,101,31);
    user->setText("USERNAME");
    user->setFont(winterland);

    QLabel *pass=new QLabel(this);
    pass->setGeometry(240,330,101,41);
    pass->setText("PASSWORD");
    pass->setFont(winterland);

    QLineEdit *username=new QLineEdit(this);
    username->setGeometry(370,280,151,31);
    username->setPlaceholderText("Enter User Name");
    username->setStyleSheet("border: 2px solid red;border-radius: 3px");

    QLineEdit *password=new QLineEdit(this);
    password->setGeometry(370,330,151,31);
    password->setPlaceholderText("Enter password");
    password->setEchoMode(QLineEdit::Password);
    password->setStyleSheet("border: 2px solid blue;border-radius: 3px");

   QPushButton *login=new QPushButton(this);
   login->setGeometry(330,380,111,31);
   login->setText("LOGIN");

   connect(login,&QPushButton::clicked,[=](){
           QString uname=username->text();
           QString p=password->text();
           if(uname=="Immrdg"&& p=="212218104044")
           {
               QMessageBox::information(this,"Login","Login Successful!!");
           }
           else
           {
               QMessageBox::information(this,"Login Failed","Username or Password incorrect!");
           }
       });
   QLabel *newaccount=new QLabel(this);
   newaccount->setGeometry(210,430,201,21);
   newaccount->setText("Don't have an account?");
   newaccount->setStyleSheet("font-size:18px");

   QPushButton *signup=new QPushButton(this);
   signup->setGeometry(420,430,93,28);
   signup->setText("SIGN UP");

   connect(signup,&QPushButton::clicked,[=](){
           Dialog *d=new Dialog(this);
           d->setFixedSize(793,493);
           d->exec();
       });

}

Login::~Login()
{
}

