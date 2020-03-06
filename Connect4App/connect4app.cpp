#include "connect4app.h"
#include "ui_connect4app.h"

#include <QMessageBox>

connect4App::connect4App(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::connect4App)
{
    ui->setupUi(this);

    QColor color1 = {255, 0, 0};
    QColor color2 = {0, 255, 255};

    QColor currentColor = color1;
}

connect4App::~connect4App()
{
    delete ui;
}


void connect4App::on_instructionsButton_clicked()
{
    QMessageBox instructions;
    instructions.setText("How to Play Connect 4:\n\nOn your turn, push one of the buttons above the columns to place a piece that will fall to the lowest available space.\n\n"
                         "The goal of the game is to be the first to connect 4 of your pieces in a row, column, or diagonal in any direction. \n\n"
                         "If all spaces are filled with no row, column, or diagonal of four pieces from any player, then the game is a tie. \n\n"
                         "Good luck and have fun!!");
    instructions.setWindowTitle("How to Play:");
    instructions.exec();
}


void connect4App::on_firstColButton_clicked()
{
    if (ui->space_1_6->text() != "")
    {
        ui->space_1_6->setText("");
        if (currentColor == color1)
        {
            ui->space_1_6->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else
        {
            ui->space_1_6->setStyleSheet("background-color: rgb(0, 255, 255);");
        }

    }
}
