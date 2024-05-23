#include "main_form.h"
#include "config.h"
#include <QIcon>
#include <QPainter>

// Constructor
Main_Form::Main_Form(QWidget *parent)
    : QWidget(parent)
{
    // Initialize the main form
    initMainForm();
    Game_Start();

}

Main_Form::~Main_Form()
{
}

void Main_Form::initMainForm()
{
    // Set the size of form
    setFixedSize(Form_Width, Form_Height);
    // Set the title
    setWindowTitle(Form_Title);
    // Set window icon
    setWindowIcon(QIcon(Game_Icon));
    // Set timer interval
    m_Timer.setInterval(UD_Rate);
}



void Main_Form::Update_po()
{
    BG.Draw();
}

void Main_Form::paintEvent(QPaintEvent *)
{
    // Create a new painter
    QPainter painter(this);
    // Draw background
    painter.drawPixmap(BG_X, BG_Y, BG.BG_img);
}






