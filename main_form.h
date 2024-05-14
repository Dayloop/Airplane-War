#ifndef MAIN_FORM_H
#define MAIN_FORM_H

#include <QWidget>

class Main_Form : public QWidget
{
    Q_OBJECT

public:
    // Main form constructor
    Main_Form(QWidget *parent = nullptr);
    // Main form destructor
    ~Main_Form();

    // Main form initializer
    void initMainForm();

    //

private:


};
#endif // MAIN_FORM_H
