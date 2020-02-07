#ifndef LOGINAUTHENTICATOR_H
#define LOGINAUTHENTICATOR_H

#include <QDialog>

namespace Ui {
class LoginAuthenticator;
}

class LoginAuthenticator : public QDialog
{
    Q_OBJECT

public:
    explicit LoginAuthenticator(QWidget *parent = nullptr);
    ~LoginAuthenticator();

private:
    Ui::LoginAuthenticator *ui;
};

#endif // LOGINAUTHENTICATOR_H
