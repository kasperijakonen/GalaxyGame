/********************************************************************************
** Form generated from reading UI file 'settingswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWINDOW_H
#define UI_SETTINGSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_SettingsWindow
{
public:
    QPushButton *close_button;
    QLabel *label;
    QRadioButton *easyButton;
    QRadioButton *mediumButton;
    QRadioButton *hardButton;
    QPushButton *ok_button;

    void setupUi(QDialog *SettingsWindow)
    {
        if (SettingsWindow->objectName().isEmpty())
            SettingsWindow->setObjectName(QStringLiteral("SettingsWindow"));
        SettingsWindow->resize(624, 281);
        close_button = new QPushButton(SettingsWindow);
        close_button->setObjectName(QStringLiteral("close_button"));
        close_button->setGeometry(QRect(480, 230, 91, 28));
        label = new QLabel(SettingsWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 20, 111, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        easyButton = new QRadioButton(SettingsWindow);
        easyButton->setObjectName(QStringLiteral("easyButton"));
        easyButton->setGeometry(QRect(50, 120, 109, 25));
        mediumButton = new QRadioButton(SettingsWindow);
        mediumButton->setObjectName(QStringLiteral("mediumButton"));
        mediumButton->setGeometry(QRect(240, 120, 109, 25));
        hardButton = new QRadioButton(SettingsWindow);
        hardButton->setObjectName(QStringLiteral("hardButton"));
        hardButton->setGeometry(QRect(440, 120, 109, 25));
        ok_button = new QPushButton(SettingsWindow);
        ok_button->setObjectName(QStringLiteral("ok_button"));
        ok_button->setGeometry(QRect(370, 230, 91, 28));

        retranslateUi(SettingsWindow);
        QObject::connect(close_button, SIGNAL(clicked()), SettingsWindow, SLOT(close()));
        QObject::connect(ok_button, SIGNAL(clicked()), SettingsWindow, SLOT(accept()));

        QMetaObject::connectSlotsByName(SettingsWindow);
    } // setupUi

    void retranslateUi(QDialog *SettingsWindow)
    {
        SettingsWindow->setWindowTitle(QApplication::translate("SettingsWindow", "Settings", 0));
        close_button->setText(QApplication::translate("SettingsWindow", "Close", 0));
        label->setText(QApplication::translate("SettingsWindow", "Difficulty", 0));
        easyButton->setText(QApplication::translate("SettingsWindow", "Easy", 0));
        mediumButton->setText(QApplication::translate("SettingsWindow", "Medium", 0));
        hardButton->setText(QApplication::translate("SettingsWindow", "Hard", 0));
        ok_button->setText(QApplication::translate("SettingsWindow", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingsWindow: public Ui_SettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWINDOW_H
