#include "loginwindow.h"
#include "./ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}


void LoginWindow::on_unlock_button_clicked()
{
    // Login validate stuff
    std::string master_key = ui->masterkey_entry->text().toStdString();
    std::cout << master_key;
}
