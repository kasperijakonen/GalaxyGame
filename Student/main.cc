/*
 * TIE-02401 Ohjelmoinnin tekniikat syksy 2017
 * Harjoitustyö Galaxy Quest
 * Kasperi Jakonen
 */


/*
 * DESCRIPTION OF THE GAME:
 * The player's task is to save ships that are in distress.
 * Ships that are in distress turn red and the player saves them by going on top of them.
 * Ship can be lost if the player does not save it quickly enough.
 * The game ends when there are 10 lost ships.
 */


#include <QApplication>
#include <memory>
#include <time.h>
#include <QTimer>
#include "startwindow.hh"
#include "galaxy.hh"
#include "initialize.hh"
#include "igamerunner.hh"
#include "utility.hh"
#include "eventhandler.hh"
#include "mainwindow.hh"
#include "starsystem.hh"
#include "galaxy.hh"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    StartWindow* startwindow = new StartWindow();

    startwindow->show();

    return a.exec();
}


