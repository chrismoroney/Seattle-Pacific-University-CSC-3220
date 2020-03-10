#ifndef CONNECT4APP_H
#define CONNECT4APP_H

#include <QMainWindow>
#include <QLabel>
#include <QList>

QT_BEGIN_NAMESPACE
namespace Ui { class connect4App; }
QT_END_NAMESPACE

class connect4App : public QMainWindow
{
    Q_OBJECT

public:
    connect4App(QWidget *parent = nullptr);
    ~connect4App();

private slots:
    void on_instructionsButton_clicked();

    void on_firstColButton_clicked();

    void on_secondColButton_clicked();

    void on_thirdColButton_clicked();

    void on_fourthColButton_clicked();

    void on_fifthColButton_clicked();

    void on_sixthButtonCol_clicked();

    void on_seventhColButton_clicked();

    void on_nextButton_clicked();

    void on_nextButton_2_clicked();

    void on_nextButton_3_clicked();

private:
    Ui::connect4App *ui;

    QColor red;
    QColor green;
    QColor cyan;
    QColor blue;
    QColor magenta;
    QColor yellow;
    QColor white;
    QColor black;
    QColor gold;
    QColor maroon;
    QColor darkGreen;
    QColor darkMagenta;

    QColor selectedColor1;
    QColor selectedColor2;

    int numClicks = -1;

    QList<QList<QLabel*>*> spaces;
    QList<int> lastRows;

    void play(int columnNumber);


};
#endif // CONNECT4APP_H
