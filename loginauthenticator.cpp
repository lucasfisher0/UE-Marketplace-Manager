#include "loginauthenticator.h"
#include "ui_loginauthenticator.h"

LoginAuthenticator::LoginAuthenticator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginAuthenticator)
{
    ui->setupUi(this);
}

LoginAuthenticator::~LoginAuthenticator()
{
    delete ui;
}
