#ifndef CONNECT4APP_H
#define CONNECT4APP_H

#include <QMainWindow>

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

private:
    Ui::connect4App *ui;

    QColor currentColor;
    QColor color1;
    QColor color2;
};
#endif // CONNECT4APP_H
