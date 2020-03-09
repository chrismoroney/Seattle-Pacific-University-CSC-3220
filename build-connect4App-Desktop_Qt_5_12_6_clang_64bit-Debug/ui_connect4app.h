/********************************************************************************
** Form generated from reading UI file 'connect4app.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECT4APP_H
#define UI_CONNECT4APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_connect4App
{
public:
    QAction *actionClose_Application;
    QAction *actionClose_Application_2;
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *space_1_1;
    QLabel *space_1_2;
    QLabel *space_1_3;
    QLabel *space_1_5;
    QLabel *space_1_4;
    QLabel *space_1_6;
    QLabel *space_2_5;
    QLabel *space_2_3;
    QLabel *space_2_4;
    QLabel *space_2_6;
    QLabel *space_2_2;
    QLabel *space_2_1;
    QLabel *space_3_5;
    QLabel *space_3_3;
    QLabel *space_3_4;
    QLabel *space_3_6;
    QLabel *space_3_2;
    QLabel *space_3_1;
    QLabel *space_4_5;
    QLabel *space_4_3;
    QLabel *space_4_4;
    QLabel *space_4_6;
    QLabel *space_4_2;
    QLabel *space_4_1;
    QLabel *space_5_5;
    QLabel *space_5_3;
    QLabel *space_5_4;
    QLabel *space_5_6;
    QLabel *space_5_2;
    QLabel *space_5_1;
    QLabel *space_6_5;
    QLabel *space_6_3;
    QLabel *space_6_4;
    QLabel *space_6_6;
    QLabel *space_6_2;
    QLabel *space_6_1;
    QLabel *space_7_5;
    QLabel *space_7_3;
    QLabel *space_7_4;
    QLabel *space_7_6;
    QLabel *space_7_2;
    QLabel *space_7_1;
    QPushButton *firstColButton;
    QPushButton *secondColButton;
    QPushButton *thirdColButton;
    QPushButton *fourthColButton;
    QPushButton *fifthColButton;
    QPushButton *sixthButtonCol;
    QPushButton *seventhColButton;
    QPushButton *instructionsButton;
    QLabel *player_label;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *connect4App)
    {
        if (connect4App->objectName().isEmpty())
            connect4App->setObjectName(QString::fromUtf8("connect4App"));
        connect4App->resize(984, 722);
        actionClose_Application = new QAction(connect4App);
        actionClose_Application->setObjectName(QString::fromUtf8("actionClose_Application"));
        actionClose_Application_2 = new QAction(connect4App);
        actionClose_Application_2->setObjectName(QString::fromUtf8("actionClose_Application_2"));
        centralwidget = new QWidget(connect4App);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(110, 130, 711, 451));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        space_1_1 = new QLabel(frame);
        space_1_1->setObjectName(QString::fromUtf8("space_1_1"));
        space_1_1->setGeometry(QRect(40, 40, 51, 31));
        space_1_2 = new QLabel(frame);
        space_1_2->setObjectName(QString::fromUtf8("space_1_2"));
        space_1_2->setGeometry(QRect(40, 110, 51, 31));
        space_1_3 = new QLabel(frame);
        space_1_3->setObjectName(QString::fromUtf8("space_1_3"));
        space_1_3->setGeometry(QRect(40, 190, 51, 31));
        space_1_5 = new QLabel(frame);
        space_1_5->setObjectName(QString::fromUtf8("space_1_5"));
        space_1_5->setGeometry(QRect(40, 320, 51, 31));
        space_1_4 = new QLabel(frame);
        space_1_4->setObjectName(QString::fromUtf8("space_1_4"));
        space_1_4->setGeometry(QRect(40, 260, 51, 31));
        space_1_6 = new QLabel(frame);
        space_1_6->setObjectName(QString::fromUtf8("space_1_6"));
        space_1_6->setGeometry(QRect(40, 390, 51, 31));
        space_2_5 = new QLabel(frame);
        space_2_5->setObjectName(QString::fromUtf8("space_2_5"));
        space_2_5->setGeometry(QRect(130, 320, 51, 31));
        space_2_3 = new QLabel(frame);
        space_2_3->setObjectName(QString::fromUtf8("space_2_3"));
        space_2_3->setGeometry(QRect(130, 190, 51, 31));
        space_2_4 = new QLabel(frame);
        space_2_4->setObjectName(QString::fromUtf8("space_2_4"));
        space_2_4->setGeometry(QRect(130, 260, 51, 31));
        space_2_6 = new QLabel(frame);
        space_2_6->setObjectName(QString::fromUtf8("space_2_6"));
        space_2_6->setGeometry(QRect(130, 390, 51, 31));
        space_2_2 = new QLabel(frame);
        space_2_2->setObjectName(QString::fromUtf8("space_2_2"));
        space_2_2->setGeometry(QRect(130, 110, 51, 31));
        space_2_1 = new QLabel(frame);
        space_2_1->setObjectName(QString::fromUtf8("space_2_1"));
        space_2_1->setGeometry(QRect(130, 40, 51, 31));
        space_3_5 = new QLabel(frame);
        space_3_5->setObjectName(QString::fromUtf8("space_3_5"));
        space_3_5->setGeometry(QRect(230, 320, 51, 31));
        space_3_3 = new QLabel(frame);
        space_3_3->setObjectName(QString::fromUtf8("space_3_3"));
        space_3_3->setGeometry(QRect(230, 190, 51, 31));
        space_3_4 = new QLabel(frame);
        space_3_4->setObjectName(QString::fromUtf8("space_3_4"));
        space_3_4->setGeometry(QRect(230, 260, 51, 31));
        space_3_6 = new QLabel(frame);
        space_3_6->setObjectName(QString::fromUtf8("space_3_6"));
        space_3_6->setGeometry(QRect(230, 390, 51, 31));
        space_3_2 = new QLabel(frame);
        space_3_2->setObjectName(QString::fromUtf8("space_3_2"));
        space_3_2->setGeometry(QRect(230, 110, 51, 31));
        space_3_1 = new QLabel(frame);
        space_3_1->setObjectName(QString::fromUtf8("space_3_1"));
        space_3_1->setGeometry(QRect(230, 40, 51, 31));
        space_4_5 = new QLabel(frame);
        space_4_5->setObjectName(QString::fromUtf8("space_4_5"));
        space_4_5->setGeometry(QRect(330, 320, 51, 31));
        space_4_3 = new QLabel(frame);
        space_4_3->setObjectName(QString::fromUtf8("space_4_3"));
        space_4_3->setGeometry(QRect(330, 190, 51, 31));
        space_4_4 = new QLabel(frame);
        space_4_4->setObjectName(QString::fromUtf8("space_4_4"));
        space_4_4->setGeometry(QRect(330, 260, 51, 31));
        space_4_6 = new QLabel(frame);
        space_4_6->setObjectName(QString::fromUtf8("space_4_6"));
        space_4_6->setGeometry(QRect(330, 390, 51, 31));
        space_4_2 = new QLabel(frame);
        space_4_2->setObjectName(QString::fromUtf8("space_4_2"));
        space_4_2->setGeometry(QRect(330, 110, 51, 31));
        space_4_1 = new QLabel(frame);
        space_4_1->setObjectName(QString::fromUtf8("space_4_1"));
        space_4_1->setGeometry(QRect(330, 40, 51, 31));
        space_5_5 = new QLabel(frame);
        space_5_5->setObjectName(QString::fromUtf8("space_5_5"));
        space_5_5->setGeometry(QRect(420, 320, 51, 31));
        space_5_3 = new QLabel(frame);
        space_5_3->setObjectName(QString::fromUtf8("space_5_3"));
        space_5_3->setGeometry(QRect(420, 190, 51, 31));
        space_5_4 = new QLabel(frame);
        space_5_4->setObjectName(QString::fromUtf8("space_5_4"));
        space_5_4->setGeometry(QRect(420, 260, 51, 31));
        space_5_6 = new QLabel(frame);
        space_5_6->setObjectName(QString::fromUtf8("space_5_6"));
        space_5_6->setGeometry(QRect(420, 390, 51, 31));
        space_5_2 = new QLabel(frame);
        space_5_2->setObjectName(QString::fromUtf8("space_5_2"));
        space_5_2->setGeometry(QRect(420, 110, 51, 31));
        space_5_1 = new QLabel(frame);
        space_5_1->setObjectName(QString::fromUtf8("space_5_1"));
        space_5_1->setGeometry(QRect(420, 40, 51, 31));
        space_6_5 = new QLabel(frame);
        space_6_5->setObjectName(QString::fromUtf8("space_6_5"));
        space_6_5->setGeometry(QRect(520, 320, 51, 31));
        space_6_3 = new QLabel(frame);
        space_6_3->setObjectName(QString::fromUtf8("space_6_3"));
        space_6_3->setGeometry(QRect(520, 190, 51, 31));
        space_6_4 = new QLabel(frame);
        space_6_4->setObjectName(QString::fromUtf8("space_6_4"));
        space_6_4->setGeometry(QRect(520, 260, 51, 31));
        space_6_6 = new QLabel(frame);
        space_6_6->setObjectName(QString::fromUtf8("space_6_6"));
        space_6_6->setGeometry(QRect(520, 390, 51, 31));
        space_6_2 = new QLabel(frame);
        space_6_2->setObjectName(QString::fromUtf8("space_6_2"));
        space_6_2->setGeometry(QRect(520, 110, 51, 31));
        space_6_1 = new QLabel(frame);
        space_6_1->setObjectName(QString::fromUtf8("space_6_1"));
        space_6_1->setGeometry(QRect(520, 40, 51, 31));
        space_7_5 = new QLabel(frame);
        space_7_5->setObjectName(QString::fromUtf8("space_7_5"));
        space_7_5->setGeometry(QRect(610, 320, 51, 31));
        space_7_3 = new QLabel(frame);
        space_7_3->setObjectName(QString::fromUtf8("space_7_3"));
        space_7_3->setGeometry(QRect(610, 190, 51, 31));
        space_7_4 = new QLabel(frame);
        space_7_4->setObjectName(QString::fromUtf8("space_7_4"));
        space_7_4->setGeometry(QRect(610, 260, 51, 31));
        space_7_6 = new QLabel(frame);
        space_7_6->setObjectName(QString::fromUtf8("space_7_6"));
        space_7_6->setGeometry(QRect(610, 390, 51, 31));
        space_7_2 = new QLabel(frame);
        space_7_2->setObjectName(QString::fromUtf8("space_7_2"));
        space_7_2->setGeometry(QRect(610, 110, 51, 31));
        space_7_1 = new QLabel(frame);
        space_7_1->setObjectName(QString::fromUtf8("space_7_1"));
        space_7_1->setGeometry(QRect(610, 40, 51, 31));
        firstColButton = new QPushButton(centralwidget);
        firstColButton->setObjectName(QString::fromUtf8("firstColButton"));
        firstColButton->setGeometry(QRect(120, 70, 91, 41));
        secondColButton = new QPushButton(centralwidget);
        secondColButton->setObjectName(QString::fromUtf8("secondColButton"));
        secondColButton->setGeometry(QRect(210, 70, 91, 41));
        thirdColButton = new QPushButton(centralwidget);
        thirdColButton->setObjectName(QString::fromUtf8("thirdColButton"));
        thirdColButton->setGeometry(QRect(310, 70, 91, 41));
        fourthColButton = new QPushButton(centralwidget);
        fourthColButton->setObjectName(QString::fromUtf8("fourthColButton"));
        fourthColButton->setGeometry(QRect(410, 70, 91, 41));
        fifthColButton = new QPushButton(centralwidget);
        fifthColButton->setObjectName(QString::fromUtf8("fifthColButton"));
        fifthColButton->setGeometry(QRect(510, 70, 91, 41));
        sixthButtonCol = new QPushButton(centralwidget);
        sixthButtonCol->setObjectName(QString::fromUtf8("sixthButtonCol"));
        sixthButtonCol->setGeometry(QRect(600, 70, 91, 41));
        seventhColButton = new QPushButton(centralwidget);
        seventhColButton->setObjectName(QString::fromUtf8("seventhColButton"));
        seventhColButton->setGeometry(QRect(700, 70, 91, 41));
        instructionsButton = new QPushButton(centralwidget);
        instructionsButton->setObjectName(QString::fromUtf8("instructionsButton"));
        instructionsButton->setGeometry(QRect(870, 10, 111, 41));
        player_label = new QLabel(centralwidget);
        player_label->setObjectName(QString::fromUtf8("player_label"));
        player_label->setGeometry(QRect(430, 20, 81, 31));
        player_label->setWordWrap(false);
        connect4App->setCentralWidget(centralwidget);
        menubar = new QMenuBar(connect4App);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 984, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        connect4App->setMenuBar(menubar);
        statusbar = new QStatusBar(connect4App);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        connect4App->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionClose_Application_2);

        retranslateUi(connect4App);

        QMetaObject::connectSlotsByName(connect4App);
    } // setupUi

    void retranslateUi(QMainWindow *connect4App)
    {
        connect4App->setWindowTitle(QApplication::translate("connect4App", "connect4App", nullptr));
        actionClose_Application->setText(QApplication::translate("connect4App", "Close Application", nullptr));
        actionClose_Application_2->setText(QApplication::translate("connect4App", "Close Application", nullptr));
        space_1_1->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_1_2->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_1_3->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_1_5->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_1_4->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_1_6->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_2_5->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_2_3->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_2_4->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_2_6->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_2_2->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_2_1->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_3_5->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_3_3->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_3_4->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_3_6->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_3_2->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_3_1->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_4_5->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_4_3->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_4_4->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_4_6->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_4_2->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_4_1->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_5_5->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_5_3->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_5_4->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_5_6->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_5_2->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_5_1->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_6_5->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_6_3->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_6_4->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_6_6->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_6_2->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_6_1->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_7_5->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_7_3->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_7_4->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_7_6->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_7_2->setText(QApplication::translate("connect4App", "Space", nullptr));
        space_7_1->setText(QApplication::translate("connect4App", "Space", nullptr));
        firstColButton->setText(QApplication::translate("connect4App", "Drop Piece", nullptr));
        secondColButton->setText(QApplication::translate("connect4App", "Drop Piece", nullptr));
        thirdColButton->setText(QApplication::translate("connect4App", "Drop Piece", nullptr));
        fourthColButton->setText(QApplication::translate("connect4App", "Drop Piece", nullptr));
        fifthColButton->setText(QApplication::translate("connect4App", "Drop Piece", nullptr));
        sixthButtonCol->setText(QApplication::translate("connect4App", "Drop Piece", nullptr));
        seventhColButton->setText(QApplication::translate("connect4App", "Drop Piece", nullptr));
        instructionsButton->setText(QApplication::translate("connect4App", "Instructions", nullptr));
        player_label->setText(QApplication::translate("connect4App", "Player 1 turn", nullptr));
        menuFile->setTitle(QApplication::translate("connect4App", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class connect4App: public Ui_connect4App {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECT4APP_H
