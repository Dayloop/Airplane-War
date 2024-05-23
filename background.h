#ifndef BACKGROUND_H
#define BACKGROUND_H
#include <QPixmap>


class Background
{
public:
    // Constructor
    Background();

    void Draw();
    // Background image
    static QPixmap BG_img;
    // Background position
    int Back_X;
    int Back_Y;

    int Back_Speed;




};

#endif // BACKGROUND_H
