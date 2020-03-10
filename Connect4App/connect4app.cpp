#include "connect4app.h"
#include "ui_connect4app.h"

#include <QMessageBox>
#include <QDebug>

connect4App::connect4App(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::connect4App)
{
    ui->setupUi(this);

    red = Qt::red;
    green = Qt::green;
    cyan = Qt::cyan;
    blue = Qt::blue;
    magenta = Qt::magenta;
    yellow = Qt::yellow;
    white = Qt::white;
    black = Qt::black;
    gold = Qt::darkYellow;
    maroon = Qt::darkRed;
    darkGreen = Qt::darkGreen;
    darkMagenta = Qt::darkMagenta;

    spaces = QList<QList<QLabel*>*>({
                                      new QList<QLabel*>({ui->space_1_6, ui->space_1_5, ui->space_1_4, ui->space_1_3, ui->space_1_2, ui->space_1_1}),
                                      new QList<QLabel*>({ui->space_2_6, ui->space_2_5, ui->space_2_4, ui->space_2_3, ui->space_2_2, ui->space_2_1}),
                                      new QList<QLabel*>({ui->space_3_6, ui->space_3_5, ui->space_3_4, ui->space_3_3, ui->space_3_2, ui->space_3_1}),
                                      new QList<QLabel*>({ui->space_4_6, ui->space_4_5, ui->space_4_4, ui->space_4_3, ui->space_4_2, ui->space_4_1}),
                                      new QList<QLabel*>({ui->space_5_6, ui->space_5_5, ui->space_5_4, ui->space_5_3, ui->space_5_2, ui->space_5_1}),
                                      new QList<QLabel*>({ui->space_6_6, ui->space_6_5, ui->space_6_4, ui->space_6_3, ui->space_6_2, ui->space_6_1}),
                                      new QList<QLabel*>({ui->space_7_6, ui->space_7_5, ui->space_7_4, ui->space_7_3, ui->space_7_2, ui->space_7_1}),
                                  });
    lastRows = QList<int>({
                              0, 0, 0, 0, 0, 0, 0
                          });


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

//TO DO::
//- implement check()
//- call check with the 7 posibilities

//===============

//// Vertical
//check(startPoint, 0, 1);

//// Horizontal
//check(1, 0);
//check(-1, 0);

//// Diagonal 1
//check(1, 1);
//check(-1, -1);

//// Diagonal 2
//check(1, -1);
//check(-1, 1);
//check(columnMovement, rowMovement) {
//   check if there's any way to win here [boundaries]
//   it applies the movement 3 times (current + 3)
//   if all are the same color, we have a winner
//

void connect4App::play(int columnNumber){

    QList<QLabel*>* columnSpaces = spaces.at(columnNumber - 1);
    int lastRow = lastRows.at(columnNumber - 1);

    if (columnSpaces->length() == lastRow)
    {
        QMessageBox invalidMove;
        invalidMove.setText("This Column is full! Please select another column.");
        invalidMove.setWindowTitle("Invalid Move");
        invalidMove.exec();
        return;
    }

    numClicks++;

    QString stylesheet = numClicks % 2 == 0 ? "background-color: rgb(255, 0, 0);" : "background-color: rgb(255, 253, 107);";
    QLabel* space = columnSpaces->at(lastRow);

    space->setText("");
    space->setStyleSheet(stylesheet);

    QString nextPlayer = numClicks % 2 == 0 ? "Go Player 2" : "Go Player 1";
    ui->playerLabel->setText(nextPlayer);

    lastRows[columnNumber - 1] = lastRow + 1;

}
void connect4App::on_firstColButton_clicked()
{
    play(1);
}

void connect4App::on_secondColButton_clicked()
{
    play(2);
}

void connect4App::on_thirdColButton_clicked()
{
    play(3);
}

void connect4App::on_fourthColButton_clicked()
{
    play(4);
}

void connect4App::on_fifthColButton_clicked()
{
    play(5);
}

void connect4App::on_sixthButtonCol_clicked()
{
    play(6);
}

void connect4App::on_seventhColButton_clicked()
{
    play(7);
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
