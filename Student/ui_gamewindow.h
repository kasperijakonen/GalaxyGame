/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_gamewindow
{
public:
    QPushButton *playButton;
    QPushButton *playButton_2;

    void setupUi(QDialog *gamewindow)
    {
        if (gamewindow->objectName().isEmpty())
            gamewindow->setObjectName(QStringLiteral("gamewindow"));
        gamewindow->resize(668, 533);
        playButton = new QPushButton(gamewindow);
        playButton->setObjectName(QStringLiteral("playButton"));
        playButton->setGeometry(QRect(110, 410, 111, 51));
        playButton_2 = new QPushButton(gamewindow);
        playButton_2->setObjectName(QStringLiteral("playButton_2"));
        playButton_2->setGeometry(QRect(410, 410, 111, 51));

        retranslateUi(gamewindow);

        QMetaObject::connectSlotsByName(gamewindow);
    } // setupUi

    void retranslateUi(QDialog *gamewindow)
    {
        gamewindow->setWindowTitle(QApplication::translate("gamewindow", "Dialog", 0));
        playButton->setText(QApplication::translate("gamewindow", "Let's Play!", 0));
        playButton_2->setText(QApplication::translate("gamewindow", "Quit", 0));
    } // retranslateUi

};

namespace Ui {
    class gamewindow: public Ui_gamewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
