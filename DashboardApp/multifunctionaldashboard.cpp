#include "multifunctionaldashboard.h"
#include "ui_multifunctionaldashboard.h"

#include <QJsonObject>
#include <QJsonArray>

multiFunctionalDashBoard::multiFunctionalDashBoard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::multiFunctionalDashBoard)
    , timer(new QTimer)
    , httpManager(new HTTPManager)

{
    ui->setupUi(this);
    connect(timer, SIGNAL(timeout()),
            this, SLOT(setCurrentTime()));

    setCurrentTime();
    timer->start(1000);

    connect(httpManager, SIGNAL(ImageReady(QPixmap *)),
            this, SLOT(processImage(QPixmap *)));

    connect(httpManager, SIGNAL(WeatherJsonReady(QJsonObject *)),
            this, SLOT(processWeatherJson(QJsonObject *)));

    connect(httpManager, SIGNAL(WeatherIconReady(QPixmap *)),
            this, SLOT(processWeatherIcon(QPixmap *)));
}

multiFunctionalDashBoard::~multiFunctionalDashBoard()
{
    delete ui;
}

void multiFunctionalDashBoard::setCurrentTime()
{
    /*
    photoTimer++;
    if(photoTimer>10){
        // change picture
        photoTimer =0;
    }
    */
    QTime time = QTime::currentTime();
    QString hour = time.toString("hh");
    QString minute = time.toString("mm");
    QString second = time.toString("ss");

    ui->hourLCD->display(hour);
    ui->minuteLCD->display(minute);
    ui->secondLCD->display(second);
}

void multiFunctionalDashBoard::processImage(QPixmap *image)
{
    ui->imageLabel->setPixmap(*image);
}

void multiFunctionalDashBoard::processWeatherIcon(QPixmap *image)
{
    ui->weatherIcon->setPixmap(*image);
}

void multiFunctionalDashBoard::processWeatherJson(QJsonObject *json)
{
    qDebug() << "Json ready";
    QString weather = json->value("weather").toArray()[0].toObject()["main"].toString();
    QString weatherDesc = json->value("weather").toArray()[0].toObject()["description"].toString();
    double temperature = json->value("main").toObject()["temp"].toDouble();
    double temp_min = json->value("main").toObject()["temp_min"].toDouble();
    double temp_max = json->value("main").toObject()["temp_max"].toDouble();

    QString iconCode = json->value("weather").toArray()[0].toObject()["icon"].toString();
    httpManager->sendWeatherIconRequest(iconCode);

    qDebug() << weather;
    qDebug() << weatherDesc;
    qDebug() << temperature;
    qDebug() << temp_min;
    qDebug() << temp_max;

    ui->weatherLabel->setText("Current Weather: " + weather + ", temp: " + QString::number(temperature));
    //ui->weatherIcon->setPixmap();



    /*
     * {
     * "coord":{"lon":-122.36,"lat":47.64},
     * "weather":[{"id":800,"main":"Clear","description":"clear sky","icon":"01n"}],
     * "base":"stations",
     * "main":{"temp":36.63,"feels_like":31.89,"temp_min":30.99,"temp_max":41,"pressure":1024,"humidity":69},
     * "visibility":16093,
     * "wind":{"speed":0.96,"deg":130},
     * "clouds":{"all":1},"dt":1582271133,
     * "sys":{"type":1,"id":3417,"country":"US","sunrise":1582211245,"sunset":1582249159},
     * "timezone":-28800,"id":0,"name":"Seattle","cod":200}
     * }
     */
}

void multiFunctionalDashBoard::on_imageDownloadDisplay_clicked()
{
    QString zip = ui->zipEdit->text();
    qDebug() << zip;
    httpManager->sendImageRequest(zip);
}

void multiFunctionalDashBoard::on_weatherDownloadButton_clicked()
{
    QString zip = ui->zipEdit->text();
    qDebug() << zip;
    httpManager->sendWeatherRequest(zip);

}
