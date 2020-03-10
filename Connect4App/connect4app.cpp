#include "connect4app.h"
#include "ui_connect4app.h"

#include <QMessageBox>

connect4App::connect4App(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::connect4App)
{
    ui->setupUi(this);

    red = QColor(252, 66, 66);
    green = QColor(120, 255, 156);
    cyan = QColor(33, 255, 251);
    blue = QColor(33, 151, 255);
    magenta = QColor(255, 51, 245);
    yellow = QColor(252, 255, 51);
    white = QColor(255, 255, 255);
    black = QColor(0, 0, 0);
    gold = QColor(214, 205, 24);
    maroon = QColor(153, 24, 24);
    darkGreen = QColor(34, 107, 17);
    darkMagenta = QColor(128, 13, 112);

    ui->redButton->setStyleSheet("background-color: rgb(252, 66, 66); color: rgb(214, 205, 24)");
    ui->greenButton->setStyleSheet("background-color: rgb(120, 255, 156); color: rgb(128, 13, 112)");
    ui->cyanButton->setStyleSheet("background-color: rgb(33, 255, 251)");
    ui->blueButton->setStyleSheet("background-color: rgb(33, 151, 255)");
    ui->magentaButton->setStyleSheet("background-color: rgb(255, 51, 245)");
    ui->yellowButton->setStyleSheet("background-color: rgb(252, 255, 51)");
    ui->whiteButton->setStyleSheet("background-color: rgb(255, 255, 255)");
    ui->blackButton->setStyleSheet("background-color: rgb(0, 0, 0); color: rgb(255, 255, 255)");
    ui->goldButton->setStyleSheet("background-color: rgb(214, 205, 24)");
    ui->maroonButton->setStyleSheet("background-color: rgb(153, 24, 24)");
    ui->darkGreenButton->setStyleSheet("background-color: rgb(34, 107, 17)");
    ui->darkMagButton->setStyleSheet("background-color: rgb(128, 13, 112)");

    ui->redButton_2->setStyleSheet("background-color: rgb(252, 66, 66)");
    ui->greenButton_2->setStyleSheet("background-color: rgb(120, 255, 156)");
    ui->cyanButton_2->setStyleSheet("background-color: rgb(33, 255, 251)");
    ui->blueButton_2->setStyleSheet("background-color: rgb(33, 151, 255)");
    ui->magentaButton_2->setStyleSheet("background-color: rgb(255, 51, 245)");
    ui->yellowButton_2->setStyleSheet("background-color: rgb(252, 255, 51)");
    ui->whiteButton_2->setStyleSheet("background-color: rgb(255, 255, 255)");
    ui->blackButton_2->setStyleSheet("background-color: rgb(0, 0, 0)");
    ui->goldButton_2->setStyleSheet("background-color: rgb(214, 205, 24)");
    ui->maroonButton_2->setStyleSheet("background-color: rgb(153, 24, 24)");
    ui->darkGreenButton_2->setStyleSheet("background-color: rgb(34, 107, 17)");
    ui->darkMagButton_2->setStyleSheet("background-color: rgb(128, 13, 112)");

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
        ui->player_label->setText("Player 2 turn");
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
        ui->player_label->setText("Player 1 turn");
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
        ui->player_label->setText("Player 2 turn");
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
        ui->player_label->setText("Player 1 turn");
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
        ui->player_label->setText("Player 2 turn");
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
        ui->player_label->setText("Player 1 turn");
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
        ui->player_label->setText("Player 2 turn");
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
        ui->player_label->setText("Player 1 turn");
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
        ui->player_label->setText("Player 2 turn");
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
        ui->player_label->setText("Player 1 turn");
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
        ui->player_label->setText("Player 2 turn");
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
        ui->player_label->setText("Player 1 turn");
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
        ui->player_label->setText("Player 2 turn");
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
        ui->player_label->setText("Player 1 turn");
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

void connect4App::on_nextButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void connect4App::on_nextButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void connect4App::on_nextButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}
