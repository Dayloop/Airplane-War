#include "main_form.h"
#include "config.h"
#include <QIcon>

// Constructor
Main_Form::Main_Form(QWidget *parent)
    : QWidget(parent)
{
    // Initialize the main form
    initMainForm();

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






