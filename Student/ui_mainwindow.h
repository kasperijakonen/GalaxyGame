/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *closeButton;
    QGraphicsView *graphicsView;
    QLabel *lostShipsLabel;
    QLCDNumber *abandonedShipsLcdNumber;
    QLabel *savedShipsLabel;
    QLCDNumber *savedShipsLcdNumber;
    QPushButton *pause_button;
    QPushButton *newGameButton;
    QLabel *saveLabel;
    QLabel *recordLabel;
    QLCDNumber *recordLcdNumber;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1188, 833);
        QFont font;
        font.setPointSize(11);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        closeButton = new QPushButton(centralwidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(1010, 500, 161, 51));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 0, 961, 791));
        lostShipsLabel = new QLabel(centralwidget);
        lostShipsLabel->setObjectName(QStringLiteral("lostShipsLabel"));
        lostShipsLabel->setGeometry(QRect(1000, 10, 161, 41));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        lostShipsLabel->setFont(font1);
        lostShipsLabel->setScaledContents(false);
        lostShipsLabel->setAlignment(Qt::AlignCenter);
        abandonedShipsLcdNumber = new QLCDNumber(centralwidget);
        abandonedShipsLcdNumber->setObjectName(QStringLiteral("abandonedShipsLcdNumber"));
        abandonedShipsLcdNumber->setGeometry(QRect(1030, 50, 101, 61));
        savedShipsLabel = new QLabel(centralwidget);
        savedShipsLabel->setObjectName(QStringLiteral("savedShipsLabel"));
        savedShipsLabel->setGeometry(QRect(1000, 150, 161, 41));
        savedShipsLabel->setFont(font1);
        savedShipsLabel->setScaledContents(false);
        savedShipsLabel->setAlignment(Qt::AlignCenter);
        savedShipsLcdNumber = new QLCDNumber(centralwidget);
        savedShipsLcdNumber->setObjectName(QStringLiteral("savedShipsLcdNumber"));
        savedShipsLcdNumber->setGeometry(QRect(1030, 190, 101, 61));
        pause_button = new QPushButton(centralwidget);
        pause_button->setObjectName(QStringLiteral("pause_button"));
        pause_button->setGeometry(QRect(1010, 430, 161, 51));
        newGameButton = new QPushButton(centralwidget);
        newGameButton->setObjectName(QStringLiteral("newGameButton"));
        newGameButton->setGeometry(QRect(1010, 430, 161, 51));
        saveLabel = new QLabel(centralwidget);
        saveLabel->setObjectName(QStringLiteral("saveLabel"));
        saveLabel->setGeometry(QRect(980, 290, 201, 71));
        QFont font2;
        font2.setPointSize(12);
        saveLabel->setFont(font2);
        saveLabel->setFrameShape(QFrame::Box);
        saveLabel->setFrameShadow(QFrame::Sunken);
        saveLabel->setLineWidth(1);
        saveLabel->setAlignment(Qt::AlignCenter);
        recordLabel = new QLabel(centralwidget);
        recordLabel->setObjectName(QStringLiteral("recordLabel"));
        recordLabel->setGeometry(QRect(1000, 660, 161, 41));
        recordLabel->setFont(font1);
        recordLabel->setScaledContents(false);
        recordLabel->setAlignment(Qt::AlignCenter);
        recordLcdNumber = new QLCDNumber(centralwidget);
        recordLcdNumber->setObjectName(QStringLiteral("recordLcdNumber"));
        recordLcdNumber->setGeometry(QRect(1030, 700, 101, 61));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1188, 28));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(closeButton, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QalaxyQuest", 0));
        closeButton->setText(QApplication::translate("MainWindow", "Close", 0));
        lostShipsLabel->setText(QApplication::translate("MainWindow", "Lost ships:", 0));
        savedShipsLabel->setText(QApplication::translate("MainWindow", "Saved ships:", 0));
        pause_button->setText(QApplication::translate("MainWindow", "Pause", 0));
        newGameButton->setText(QApplication::translate("MainWindow", "Start New Game", 0));
        saveLabel->setText(QString());
        recordLabel->setText(QApplication::translate("MainWindow", "Current record:", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
