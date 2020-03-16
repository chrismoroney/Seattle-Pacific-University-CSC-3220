#include "connect4app.h"
#include "ui_connect4app.h"

#include <QMessageBox>
#include <QDebug>
#include <QMessageBox>

connect4App::connect4App(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::connect4App)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

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
    ui->cyanButton->setStyleSheet("background-color: rgb(33, 255, 251); color: rgb(214, 205, 24)");
    ui->blueButton->setStyleSheet("background-color: rgb(33, 151, 255); color: rgb(252, 255, 51)");
    ui->magentaButton->setStyleSheet("background-color: rgb(255, 51, 245); color: rgb(34, 107, 17)");
    ui->yellowButton->setStyleSheet("background-color: rgb(252, 255, 51); color: rgb(33, 151, 255)");
    ui->whiteButton->setStyleSheet("background-color: rgb(255, 255, 255); color: rgb(0, 0, 0)");
    ui->blackButton->setStyleSheet("background-color: rgb(0, 0, 0); color: rgb(255, 255, 255)");
    ui->goldButton->setStyleSheet("background-color: rgb(214, 205, 24); color: rgb(33, 255, 251)");
    ui->maroonButton->setStyleSheet("background-color: rgb(153, 24, 24); color: rgb(214, 205, 24)");
    ui->darkGreenButton->setStyleSheet("background-color: rgb(34, 107, 17); color: rgb(255, 51, 245)");
    ui->darkMagButton->setStyleSheet("background-color: rgb(128, 13, 112); color: rgb(120, 255, 156)");

    ui->redButton_2->setStyleSheet("background-color: rgb(252, 66, 66); color: rgb(214, 205, 24)");
    ui->greenButton_2->setStyleSheet("background-color: rgb(120, 255, 156); color: rgb(128, 13, 112)");
    ui->cyanButton_2->setStyleSheet("background-color: rgb(33, 255, 251); color: rgb(214, 205, 24)");
    ui->blueButton_2->setStyleSheet("background-color: rgb(33, 151, 255); color: rgb(252, 255, 51)");
    ui->magentaButton_2->setStyleSheet("background-color: rgb(255, 51, 245); color: rgb(34, 107, 17)");
    ui->yellowButton_2->setStyleSheet("background-color: rgb(252, 255, 51); color: rgb(33, 151, 255)");
    ui->whiteButton_2->setStyleSheet("background-color: rgb(255, 255, 255)");
    ui->blackButton_2->setStyleSheet("background-color: rgb(0, 0, 0); color: rgb(255, 255, 255)");
    ui->goldButton_2->setStyleSheet("background-color: rgb(214, 205, 24); color: rgb(33, 255, 251)");
    ui->maroonButton_2->setStyleSheet("background-color: rgb(153, 24, 24); color: rgb(214, 205, 24)");
    ui->darkGreenButton_2->setStyleSheet("background-color: rgb(34, 107, 17); color: rgb(255, 51, 245)");
    ui->darkMagButton_2->setStyleSheet("background-color: rgb(128, 13, 112); color: rgb(120, 255, 156)");

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

    QString stylesheet = numClicks % 2 == 0 ? "background-color: #" + QString::number(selectedColor1.rgb(), 16) : "background-color: #" + QString::number(selectedColor2.rgb(), 16);
    QLabel* space = columnSpaces->at(lastRow);

    space->setText("");
    space->setStyleSheet(stylesheet);

    QString nextPlayer = numClicks % 2 == 0 ? name2 + "'s turn" : name1 + "'s turn";
    ui->player_label->setText(nextPlayer);

    lastRows[columnNumber - 1] = lastRow + 1;

    for(int column = 1; column <= spaces.length(); column++)
    {
        for(int row = 1; row <= columnSpaces->length(); row++)
        {
            if(check(column, row, 1, 0) ||
                    check(column, row, 0, 1) ||
                    check(column, row, 1, -1) ||
                    check(column, row, -1, -1)) {
                return;
            }

        }
    }
}

bool connect4App::check(int firstColumn, int firstRow, int horizontalMove, int verticalMove){


    QString firstColor = getColor(firstColumn, firstRow);

    if(firstColor == NULL)
        return false;
    for (int index = 1; index <= 3; index++) {
        int currentColumn = firstColumn + horizontalMove * index;
        int currentRow = firstRow + verticalMove * index;
        QString color = getColor(currentColumn, currentRow);
        if (color == NULL || color != firstColor) {
            return false;
        }
    }

    if (numClicks % 2 == 0)
    {
        QMessageBox message;
        message.setText(name1 + " is the winner! \n\nCONGRATULATIONS!");
        message.exec();
        close();
        return true;
    } else
    {
        QMessageBox message;
        message.setText(name2 + " is the winner! \n\nCONGRADULATIONS!!!");
        message.exec();
        close();
        return true;
    }

}

QString connect4App::getColor(int column, int row) {

    if(column < 1 || column > spaces.length())
        return NULL;

    QList<QLabel*>* columnSpaces = spaces.at(column - 1);

    if(row < 1 || row > columnSpaces->length())
        return NULL;

    QLabel* space = columnSpaces->at(row - 1);
    return space->styleSheet();

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
    if (ui->currentCol->text() != "None")
    {
        ui->stackedWidget->setCurrentIndex(1);
    }
    else
    {
        QMessageBox selectColor;
        selectColor.setText("Please select a color before moving on.");
        selectColor.setWindowTitle("Select Color");
        selectColor.exec();
    }
    name1 = ui->enteredName->text();

    if (name1 == "")
    {
        name1 = "Player 1";
    }
    ui->name1Button->setText(name1);
    selectedTextColor1 = textColor;
    ui->name1Button->setStyleSheet("background-color: #" + QString::number(selectedColor1.rgb(), 16) + "; " + "color: #" + QString::number(selectedTextColor1.rgb(), 16));
}

void connect4App::on_nextButton_2_clicked()
{
    if (ui->currentCol_2->text() != "None")
    {
        ui->stackedWidget->setCurrentIndex(2);
    }
    else
    {
        QMessageBox selectColor;
        selectColor.setText("Please select a color before moving on.");
        selectColor.setWindowTitle("Select Color");
        selectColor.exec();
    }
    name2 = ui->enteredName_2->text();

    if (name2 == "")
    {
        name2 = "Player 2";
    }
    ui->name2Button->setText(name2);
    selectedTextColor2 = textColor;
    ui->name2Button->setStyleSheet("background-color: #" + QString::number(selectedColor2.rgb(), 16) + "; " + "color: #" + QString::number(selectedTextColor2.rgb(), 16));

}

void connect4App::on_nextButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void connect4App::on_redButton_clicked()
{
    ui->currentCol->setStyleSheet("QLabel {background-color: rgb(252, 66, 66); color: rgb(214, 205, 24)}");
    ui->currentCol->setText("Red");
    selectedColor1 = red;
    textColor = gold;
}

void connect4App::on_greenButton_clicked()
{
    ui->currentCol->setStyleSheet("QLabel {background-color: rgb(120, 255, 156); color: rgb(128, 13, 112)}");
    ui->currentCol->setText("Green");
    selectedColor1 = green;
    textColor = darkMagenta;
}

void connect4App::on_cyanButton_clicked()
{
    ui->currentCol->setStyleSheet("QLabel {background-color: rgb(33, 255, 251); color: rgb(214, 205, 24)}");
    ui->currentCol->setText("Cyan");
    selectedColor1 = cyan;
    textColor = gold;
}

void connect4App::on_blueButton_clicked()
{
    ui->currentCol->setStyleSheet("QLabel {background-color: rgb(33, 151, 255); color: rgb(252, 255, 51)}");
    ui->currentCol->setText("Blue");
    selectedColor1 = blue;
    textColor = yellow;
}

void connect4App::on_magentaButton_clicked()
{
    ui->currentCol->setStyleSheet("QLabel {background-color: rgb(255, 51, 245); color: rgb(34, 107, 17)}");
    ui->currentCol->setText("Magenta");
    selectedColor1 = magenta;
    textColor = darkGreen;
}

void connect4App::on_yellowButton_clicked()
{
    ui->currentCol->setStyleSheet("QLabel {background-color: rgb(252, 255, 51); color: rgb(33, 151, 255)}");
    ui->currentCol->setText("Yellow");
    selectedColor1 = yellow;
    textColor = blue;
}

void connect4App::on_whiteButton_clicked()
{
    ui->currentCol->setStyleSheet("QLabel {background-color: rgb(255, 255, 255); color: rgb(0, 0, 0)}");
    ui->currentCol->setText("White");
    selectedColor1 = white;
    textColor = black;
}

void connect4App::on_blackButton_clicked()
{
    ui->currentCol->setStyleSheet("QLabel {background-color: rgb(0, 0, 0); color: rgb(255, 255, 255)}");
    ui->currentCol->setText("Black");
    selectedColor1 = black;
    textColor = white;
}

void connect4App::on_goldButton_clicked()
{
    ui->currentCol->setStyleSheet("QLabel {background-color: rgb(214, 205, 24); color: rgb(33, 255, 251)}");
    ui->currentCol->setText("Gold");
    selectedColor1 = gold;
    textColor = cyan;
}

void connect4App::on_maroonButton_clicked()
{
    ui->currentCol->setStyleSheet("QLabel {background-color: rgb(153, 24, 24); color: rgb(214, 205, 24)}");
    ui->currentCol->setText("Maroon");
    selectedColor1 = maroon;
    textColor = gold;
}

void connect4App::on_darkGreenButton_clicked()
{
    ui->currentCol->setStyleSheet("QLabel {background-color: rgb(34, 107, 17); color: rgb(255, 51, 245)}");
    ui->currentCol->setText("Dark Green");
    selectedColor1 = darkGreen;
    textColor = magenta;
}

void connect4App::on_darkMagButton_clicked()
{
    ui->currentCol->setStyleSheet("QLabel {background-color: rgb(128, 13, 112); color: rgb(120, 255, 156)}");
    ui->currentCol->setText("Dark Magenta");
    selectedColor1 = darkMagenta;
    textColor = green;
}

void connect4App::on_redButton_2_clicked()
{
    ui->currentCol_2->setStyleSheet("QLabel {background-color: rgb(252, 66, 66); color: rgb(214, 205, 24)}");
    ui->currentCol_2->setText("Red");
    selectedColor2 = red;
    textColor = gold;
}

void connect4App::on_greenButton_2_clicked()
{
    ui->currentCol_2->setStyleSheet("QLabel {background-color: rgb(120, 255, 156); color: rgb(128, 13, 112)}");
    ui->currentCol_2->setText("Green");
    selectedColor2 = green;
    textColor = darkMagenta;
}

void connect4App::on_cyanButton_2_clicked()
{
    ui->currentCol_2->setStyleSheet("QLabel {background-color: rgb(33, 255, 251); color: rgb(214, 205, 24)}");
    ui->currentCol_2->setText("Cyan");
    selectedColor2 = cyan;
    textColor = gold;
}

void connect4App::on_blueButton_2_clicked()
{
    ui->currentCol_2->setStyleSheet("QLabel {background-color: rgb(33, 151, 255); color: rgb(252, 255, 51)}");
    ui->currentCol_2->setText("Blue");
    selectedColor2 = blue;
    textColor = yellow;
}

void connect4App::on_magentaButton_2_clicked()
{
    ui->currentCol_2->setStyleSheet("QLabel {background-color: rgb(255, 51, 245); color: rgb(34, 107, 17)}");
    ui->currentCol_2->setText("Magenta");
    selectedColor2 = magenta;
    textColor = darkGreen;
}

void connect4App::on_yellowButton_2_clicked()
{
    ui->currentCol_2->setStyleSheet("QLabel {background-color: rgb(252, 255, 51); color: rgb(33, 151, 255)}");
    ui->currentCol_2->setText("Yellow");
    selectedColor2 = yellow;
    textColor = blue;
}

void connect4App::on_whiteButton_2_clicked()
{
    ui->currentCol_2->setStyleSheet("QLabel {background-color: rgb(255, 255, 255); color: rgb(0, 0, 0)}");
    ui->currentCol_2->setText("White");
    selectedColor2 = white;
    textColor = black;
}

void connect4App::on_blackButton_2_clicked()
{
    ui->currentCol_2->setStyleSheet("QLabel {background-color: rgb(0, 0, 0); color: rgb(255, 255, 255)}");
    ui->currentCol_2->setText("Black");
    selectedColor2 = black;
    textColor = white;
}

void connect4App::on_goldButton_2_clicked()
{
    ui->currentCol_2->setStyleSheet("QLabel {background-color: rgb(214, 205, 24); color: rgb(33, 255, 251)}");
    ui->currentCol_2->setText("Gold");
    selectedColor2 = gold;
    textColor = cyan;
}

void connect4App::on_maroonButton_2_clicked()
{
    ui->currentCol_2->setStyleSheet("QLabel {background-color: rgb(153, 24, 24); color: rgb(214, 205, 24)}");
    ui->currentCol_2->setText("Maroon");
    selectedColor2 = maroon;
    textColor = gold;
}

void connect4App::on_darkGreenButton_2_clicked()
{
    ui->currentCol_2->setStyleSheet("QLabel {background-color: rgb(34, 107, 17); color: rgb(255, 51, 245)}");
    ui->currentCol_2->setText("Dark Green");
    selectedColor2 = darkGreen;
    textColor = magenta;
}

void connect4App::on_darkMagButton_2_clicked()
{
    ui->currentCol_2->setStyleSheet("QLabel {background-color: rgb(128, 13, 112); color: rgb(120, 255, 156)}");
    ui->currentCol_2->setText("Dark Magenta");
    selectedColor2 = darkMagenta;
    textColor = green;
}

void connect4App::on_name1Button_clicked()
{
    numClicks = -1;
    ui->player_label->setText(name1 + "'s turn");
    ui->currentPickFirst->setText(name1);
    ui->currentPickFirst->setStyleSheet("background-color: #" + QString::number(selectedColor1.rgb(), 16) + "; " + "color: #" + QString::number(selectedTextColor1.rgb(), 16));
}

void connect4App::on_name2Button_clicked()
{
    numClicks = 0;
    ui->player_label->setText(name2 + "'s turn");
    ui->currentPickFirst->setText(name2);
    ui->currentPickFirst->setStyleSheet("background-color: #" + QString::number(selectedColor2.rgb(), 16) + "; " + "color: #" + QString::number(selectedTextColor2.rgb(), 16));
}
