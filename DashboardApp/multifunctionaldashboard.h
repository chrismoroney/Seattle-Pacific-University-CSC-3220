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

};
#endif // MULTIFUNCTIONALDASHBOARD_H
