#ifndef MULTIFUNCTIONALDASHBOARD_H
#define MULTIFUNCTIONALDASHBOARD_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>

#include "httpmanager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class multiFunctionalDashBoard; }
QT_END_NAMESPACE

class multiFunctionalDashBoard : public QMainWindow
{
    Q_OBJECT

public:
    multiFunctionalDashBoard(QWidget *parent = nullptr);
    ~multiFunctionalDashBoard();

private slots:
    void setCurrentTime();
    void processImage(QPixmap *image);
    void processWeatherIcon(QPixmap *image);
    void processWeatherJson(QJsonObject *json);

    void on_imageDownloadDisplay_clicked();

    void on_weatherDownloadButton_clicked();

private:
    Ui::multiFunctionalDashBoard *ui;
    QTimer *timer;
    HTTPManager *httpManager;

    int picTimer;
    int initialPicSwitch;
    int picTimerSwitch;
    int picTimerSwitch1;
    int picTimerSwitch2;
    int picTimerSwitch3;
    int picTimerSwitch4;


    QPixmap image1;
    QPixmap image2;
    QPixmap image3;
    QPixmap image4;
    QPixmap image5;
    QPixmap image6;
    QPixmap background;

    void loadBackgroundImage();
    void loadImage1();
    void loadImage2();
    void loadImage3();
    void loadImage4();
    void loadImage5();
    void loadImage6();
};
#endif // MULTIFUNCTIONALDASHBOARD_H
