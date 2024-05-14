#include "background.h"
#include "config.h"


Background::Background()
{
    // Load background
    BG_img.load(BG_Path);

    // Initialize image position
    setX(BG_X);
    setY(BG_Y);
    setSpeed(BG_Speed);

}

QPixmap Background::getBG_img()
{
    return this->BG_img;
}

void Background::Draw()
{
    // Update Y position
    setY(getY() + BG_Speed);
    /* While background move to the end,
    move it to the top */
    if (getY() >= 0){
        setY(BG_Y);
    }
}
