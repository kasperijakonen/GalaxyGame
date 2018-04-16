#ifndef STARTWINDOW_HH
#define STARTWINDOW_HH

#ifdef English_dox
/**
 * @file
 * @brief Defines the window showed when game starts
 */
#endif

#include <QDialog>
#include <memory>
#include "initialize.hh"
#include "galaxy.hh"

namespace Ui {
class StartWindow;
}

class StartWindow : public QDialog
{
    Q_OBJECT

public:

    #ifdef English_dox
    /**
     * @brief Constructs a new StartWindow object
     */
    #endif
    explicit StartWindow(QWidget *parent = 0);

    #ifdef English_dox
    /**
     * @brief Destructor of the StartWindow
     */
    #endif
    ~StartWindow();

public slots:

    #ifdef English_dox
    /**
     * @brief Opens the main window where the game is played
     */
    #endif
    void openMainWindow();

private:
    Ui::StartWindow *ui;
    int counter_ = 0;
};

#endif // STARTWINDOW_HH
