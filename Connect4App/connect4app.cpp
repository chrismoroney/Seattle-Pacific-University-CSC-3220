#include "connect4app.h"
#include "ui_connect4app.h"

connect4App::connect4App(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::connect4App)
{
    ui->setupUi(this);
}

connect4App::~connect4App()
{
    delete ui;
}

