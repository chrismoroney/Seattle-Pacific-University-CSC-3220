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

    loadBackgroundImage();
    loadImage1();
    loadImage2();
    loadImage3();
    loadImage4();
    loadImage5();
    loadImage6();

    ui->backgroundLabel->setPixmap(background);

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
    //ui->photoSlide->setPixmap(image1);

    QTime time = QTime::currentTime();
    QString hour = time.toString("hh");
    QString minute = time.toString("mm");
    QString second = time.toString("ss");

    ui->hourLCD->display(hour);
    ui->minuteLCD->display(minute);
    ui->secondLCD->display(second);

    picTimer = second.toInt();
    initialPicSwitch = 0;
    picTimerSwitch = 10;
    picTimerSwitch1 = 20;
    picTimerSwitch2 = 30;
    picTimerSwitch3 = 40;
    picTimerSwitch4 = 50;

        // change pic
    if (picTimer == initialPicSwitch)
    {
        ui->photoSlide->setPixmap(image1);
    }
    else if (picTimer == picTimerSwitch)
    {
        ui->photoSlide->setPixmap(image2);
    }
    else if (picTimer == picTimerSwitch1)
    {
        ui->photoSlide->setPixmap(image3);
    }
    else if (picTimer == picTimerSwitch2)
    {
        ui->photoSlide->setPixmap(image4);
    }
    else if (picTimer == picTimerSwitch3)
    {
        ui->photoSlide->setPixmap(image5);
    }
    else if (picTimer == picTimerSwitch4)
    {
        ui->photoSlide->setPixmap(image6);
    }
}

void multiFunctionalDashBoard::loadBackgroundImage()
{
    QString back = ":/White.jpg";
    if(background.load(back))
    {
        background = background.scaled(ui->backgroundLabel->size(), Qt::KeepAspectRatioByExpanding);
    }
}

void multiFunctionalDashBoard::loadImage1()
{
    QString back = ":/a3b1b655-bbec-437a-a622-d8f8af94db44.jpg";
    if(image1.load(back))
    {
        image1 = image1.scaled(ui->photoSlide->size(), Qt::KeepAspectRatioByExpanding);
    }
}

void multiFunctionalDashBoard::loadImage2()
{
    QString back = ":/DSC_0027-2.jpg";
    if(image2.load(back))
    {
        image2 = image2.scaled(ui->photoSlide->size(), Qt::KeepAspectRatioByExpanding);
    }
}

void multiFunctionalDashBoard::loadImage3()
{
    QString back = ":/Headshot LinkedIn.jpg";
    if(image3.load(back))
    {
        image3 = image3.scaled(ui->photoSlide->size(), Qt::KeepAspectRatioByExpanding);
    }
}

void multiFunctionalDashBoard::loadImage4()
{
    QString back = ":/room.jpeg";
    if(image4.load(back))
    {
        image4 = image4.scaled(ui->photoSlide->size(), Qt::KeepAspectRatioByExpanding);
    }
}

void multiFunctionalDashBoard::loadImage5()
{
    QString back = ":/room4.jpeg";
    if(image5.load(back))
    {
        image5 = image5.scaled(ui->photoSlide->size(), Qt::KeepAspectRatioByExpanding);
    }
}

void multiFunctionalDashBoard::loadImage6()
{
    QString back = ":/room3.jpeg";
    if(image6.load(back))
    {
        image6 = image6.scaled(ui->photoSlide->size(), Qt::KeepAspectRatioByExpanding);
    }
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
    int humidity = json->value("main").toArray()[0].toObject()["humidity"].toInt();
    double temperature = json->value("main").toObject()["temp"].toDouble();
    double temp_min = json->value("main").toObject()["temp_min"].toDouble();
    double temp_max = json->value("main").toObject()["temp_max"].toDouble();

    QString iconCode = json->value("weather").toArray()[0].toObject()["icon"].toString();
    httpManager->sendWeatherIconRequest(iconCode);


    ui->tempLabel->setText(QString::number(temperature) + " F");
    ui->tempHiLabel->setText("HI: " + QString::number(temp_max) + " F");
    ui->tempLowLabel->setText("LO: " + QString::number(temp_min) + " F");
    ui->weatherLabel->setText(weather);
    ui->humidityLabel->setText("Humidity: " + QString::number(humidity) + " g");

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
