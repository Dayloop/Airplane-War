#ifndef MAIN_FORM_H
#define MAIN_FORM_H

#include <QWidget>
#include <QTimer>
#include "Background.h"

class Main_Form : public QWidget
{
    Q_OBJECT

public:
    // Main form constructor
    // Constructor
    // Constructor
    // Constructor
    Main_Form(QWidget *parent = nullptr);
    // Main form destructor
    ~Main_Form();

    // Main form initializer
    void initMainForm();

    // Start game
    void Game_Start();

    // Update position
    void Update_po();

    // Draw all the elements
    void paintEvent(QPaintEvent *);



    // Background
    Background BG;
    // Timer
    QTimer m_Timer;


};
#endif // MAIN_FORM_H
