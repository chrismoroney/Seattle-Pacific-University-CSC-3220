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
    if (ui->space_1_1->text() == "")
    {
        QMessageBox invalidMove;
        invalidMove.setText("This Column is full! Please select another column.");
        invalidMove.setWindowTitle("Invalid Move");
        invalidMove.exec();
    }
    else
    {
        numClicks++;
    }

    if (numClicks % 2 == 0)
    {
        if (ui->space_1_6->text() != "")
        {
            ui->space_1_6->setText("");
            ui->space_1_6->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_1_5->text() != "")
        {
            ui->space_1_5->setText("");
            ui->space_1_5->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_1_4->text() != "")
        {
            ui->space_1_4->setText("");
            ui->space_1_4->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_1_3->text() != "")
        {
            ui->space_1_3->setText("");
            ui->space_1_3->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_1_2->text() != "")
        {
            ui->space_1_2->setText("");
            ui->space_1_2->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_1_1->text() != "")
        {
            ui->space_1_1->setText("");
            ui->space_1_1->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
    }
    else
    {
        if (ui->space_1_6->text() != "")
        {
            ui->space_1_6->setText("");
            ui->space_1_6->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_1_5->text() != "")
        {
            ui->space_1_5->setText("");
            ui->space_1_5->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_1_4->text() != "")
        {
            ui->space_1_4->setText("");
            ui->space_1_4->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_1_3->text() != "")
        {
            ui->space_1_3->setText("");
            ui->space_1_3->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_1_2->text() != "")
        {
            ui->space_1_2->setText("");
            ui->space_1_2->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_1_1->text() != "")
        {
            ui->space_1_1->setText("");
            ui->space_1_1->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
    }
}

void connect4App::on_secondColButton_clicked()
{
    if (ui->space_2_1->text() == "")
    {
        QMessageBox invalidMove;
        invalidMove.setText("This Column is full! Please select another column.");
        invalidMove.setWindowTitle("Invalid Move");
        invalidMove.exec();
    }
    else
    {
        numClicks++;
    }

    if (numClicks % 2 == 0)
    {
        if (ui->space_2_6->text() != "")
        {
            ui->space_2_6->setText("");
            ui->space_2_6->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_2_5->text() != "")
        {
            ui->space_2_5->setText("");
            ui->space_2_5->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_2_4->text() != "")
        {
            ui->space_2_4->setText("");
            ui->space_2_4->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_2_3->text() != "")
        {
            ui->space_2_3->setText("");
            ui->space_2_3->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_2_2->text() != "")
        {
            ui->space_2_2->setText("");
            ui->space_2_2->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_2_1->text() != "")
        {
            ui->space_2_1->setText("");
            ui->space_2_1->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
    }
    else
    {
        if (ui->space_2_6->text() != "")
        {
            ui->space_2_6->setText("");
            ui->space_2_6->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_2_5->text() != "")
        {
            ui->space_2_5->setText("");
            ui->space_2_5->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_2_4->text() != "")
        {
            ui->space_2_4->setText("");
            ui->space_2_4->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_2_3->text() != "")
        {
            ui->space_2_3->setText("");
            ui->space_2_3->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_2_2->text() != "")
        {
            ui->space_2_2->setText("");
            ui->space_2_2->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_2_1->text() != "")
        {
            ui->space_2_1->setText("");
            ui->space_2_1->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
    }
}

void connect4App::on_thirdColButton_clicked()
{
    if (ui->space_3_1->text() == "")
    {
        QMessageBox invalidMove;
        invalidMove.setText("This Column is full! Please select another column.");
        invalidMove.setWindowTitle("Invalid Move");
        invalidMove.exec();
    }
    else
    {
        numClicks++;
    }

    if (numClicks % 2 == 0)
    {
        if (ui->space_3_6->text() != "")
        {
            ui->space_3_6->setText("");
            ui->space_3_6->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_3_5->text() != "")
        {
            ui->space_3_5->setText("");
            ui->space_3_5->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_3_4->text() != "")
        {
            ui->space_3_4->setText("");
            ui->space_3_4->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_3_3->text() != "")
        {
            ui->space_3_3->setText("");
            ui->space_3_3->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_3_2->text() != "")
        {
            ui->space_3_2->setText("");
            ui->space_3_2->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_3_1->text() != "")
        {
            ui->space_3_1->setText("");
            ui->space_3_1->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
    }
    else
    {
        if (ui->space_3_6->text() != "")
        {
            ui->space_3_6->setText("");
            ui->space_3_6->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_3_5->text() != "")
        {
            ui->space_3_5->setText("");
            ui->space_3_5->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_3_4->text() != "")
        {
            ui->space_3_4->setText("");
            ui->space_3_4->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_3_3->text() != "")
        {
            ui->space_3_3->setText("");
            ui->space_3_3->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_3_2->text() != "")
        {
            ui->space_3_2->setText("");
            ui->space_3_2->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_3_1->text() != "")
        {
            ui->space_3_1->setText("");
            ui->space_3_1->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
    }
}

void connect4App::on_fourthColButton_clicked()
{
    if (ui->space_4_1->text() == "")
    {
        QMessageBox invalidMove;
        invalidMove.setText("This Column is full! Please select another column.");
        invalidMove.setWindowTitle("Invalid Move");
        invalidMove.exec();
    }
    else
    {
        numClicks++;
    }

    if (numClicks % 2 == 0)
    {
        if (ui->space_4_6->text() != "")
        {
            ui->space_4_6->setText("");
            ui->space_4_6->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_4_5->text() != "")
        {
            ui->space_4_5->setText("");
            ui->space_4_5->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_4_4->text() != "")
        {
            ui->space_4_4->setText("");
            ui->space_4_4->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_4_3->text() != "")
        {
            ui->space_4_3->setText("");
            ui->space_4_3->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_4_2->text() != "")
        {
            ui->space_4_2->setText("");
            ui->space_4_2->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_4_1->text() != "")
        {
            ui->space_4_1->setText("");
            ui->space_4_1->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
    }
    else
    {
        if (ui->space_4_6->text() != "")
        {
            ui->space_4_6->setText("");
            ui->space_4_6->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_4_5->text() != "")
        {
            ui->space_4_5->setText("");
            ui->space_4_5->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_4_4->text() != "")
        {
            ui->space_4_4->setText("");
            ui->space_4_4->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_4_3->text() != "")
        {
            ui->space_4_3->setText("");
            ui->space_4_3->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_4_2->text() != "")
        {
            ui->space_4_2->setText("");
            ui->space_4_2->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_4_1->text() != "")
        {
            ui->space_4_1->setText("");
            ui->space_4_1->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
    }
}

void connect4App::on_fifthColButton_clicked()
{
    if (ui->space_5_1->text() == "")
    {
        QMessageBox invalidMove;
        invalidMove.setText("This Column is full! Please select another column.");
        invalidMove.setWindowTitle("Invalid Move");
        invalidMove.exec();
    }
    else
    {
        numClicks++;
    }

    if (numClicks % 2 == 0)
    {
        if (ui->space_5_6->text() != "")
        {
            ui->space_5_6->setText("");
            ui->space_5_6->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_5_5->text() != "")
        {
            ui->space_5_5->setText("");
            ui->space_5_5->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_5_4->text() != "")
        {
            ui->space_5_4->setText("");
            ui->space_5_4->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_5_3->text() != "")
        {
            ui->space_5_3->setText("");
            ui->space_5_3->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_5_2->text() != "")
        {
            ui->space_5_2->setText("");
            ui->space_5_2->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_5_1->text() != "")
        {
            ui->space_5_1->setText("");
            ui->space_5_1->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
    }
    else
    {
        if (ui->space_5_6->text() != "")
        {
            ui->space_5_6->setText("");
            ui->space_5_6->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_5_5->text() != "")
        {
            ui->space_5_5->setText("");
            ui->space_5_5->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_5_4->text() != "")
        {
            ui->space_5_4->setText("");
            ui->space_5_4->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_5_3->text() != "")
        {
            ui->space_5_3->setText("");
            ui->space_5_3->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_5_2->text() != "")
        {
            ui->space_5_2->setText("");
            ui->space_5_2->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_5_1->text() != "")
        {
            ui->space_5_1->setText("");
            ui->space_5_1->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
    }
}

void connect4App::on_sixthButtonCol_clicked()
{
    if (ui->space_6_1->text() == "")
    {
        QMessageBox invalidMove;
        invalidMove.setText("This Column is full! Please select another column.");
        invalidMove.setWindowTitle("Invalid Move");
        invalidMove.exec();
    }
    else
    {
        numClicks++;
    }

    if (numClicks % 2 == 0)
    {
        if (ui->space_6_6->text() != "")
        {
            ui->space_6_6->setText("");
            ui->space_6_6->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_6_5->text() != "")
        {
            ui->space_6_5->setText("");
            ui->space_6_5->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_6_4->text() != "")
        {
            ui->space_6_4->setText("");
            ui->space_6_4->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_6_3->text() != "")
        {
            ui->space_6_3->setText("");
            ui->space_6_3->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_6_2->text() != "")
        {
            ui->space_6_2->setText("");
            ui->space_6_2->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_6_1->text() != "")
        {
            ui->space_6_1->setText("");
            ui->space_6_1->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
    }
    else
    {
        if (ui->space_6_6->text() != "")
        {
            ui->space_6_6->setText("");
            ui->space_6_6->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_6_5->text() != "")
        {
            ui->space_6_5->setText("");
            ui->space_6_5->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_6_4->text() != "")
        {
            ui->space_6_4->setText("");
            ui->space_6_4->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_6_3->text() != "")
        {
            ui->space_6_3->setText("");
            ui->space_6_3->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_6_2->text() != "")
        {
            ui->space_6_2->setText("");
            ui->space_6_2->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_6_1->text() != "")
        {
            ui->space_6_1->setText("");
            ui->space_6_1->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
    }
}

void connect4App::on_seventhColButton_clicked()
{
    if (ui->space_7_1->text() == "")
    {
        QMessageBox invalidMove;
        invalidMove.setText("This Column is full! Please select another column.");
        invalidMove.setWindowTitle("Invalid Move");
        invalidMove.exec();
    }
    else
    {
        numClicks++;
    }

    if (numClicks % 2 == 0)
    {
        if (ui->space_7_6->text() != "")
        {
            ui->space_7_6->setText("");
            ui->space_7_6->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_7_5->text() != "")
        {
            ui->space_7_5->setText("");
            ui->space_7_5->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_7_4->text() != "")
        {
            ui->space_7_4->setText("");
            ui->space_7_4->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_7_3->text() != "")
        {
            ui->space_7_3->setText("");
            ui->space_7_3->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_7_2->text() != "")
        {
            ui->space_7_2->setText("");
            ui->space_7_2->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
        else if (ui->space_7_1->text() != "")
        {
            ui->space_7_1->setText("");
            ui->space_7_1->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
    }
    else
    {
        if (ui->space_7_6->text() != "")
        {
            ui->space_7_6->setText("");
            ui->space_7_6->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_7_5->text() != "")
        {
            ui->space_7_5->setText("");
            ui->space_7_5->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_7_4->text() != "")
        {
            ui->space_7_4->setText("");
            ui->space_7_4->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_7_3->text() != "")
        {
            ui->space_7_3->setText("");
            ui->space_7_3->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_7_2->text() != "")
        {
            ui->space_7_2->setText("");
            ui->space_7_2->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
        else if (ui->space_7_1->text() != "")
        {
            ui->space_7_1->setText("");
            ui->space_7_1->setStyleSheet("background-color: rgb(255, 253, 107);");
        }
    }
}
