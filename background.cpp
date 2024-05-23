#include "background.h"
#include "config.h"


Background::Background()
{
    // Load background
    BG_img.load(BG_Path);

    // Initialize image position
    Back_X = BG_X;
    Back_Y = BG_Y;
    Back_Speed = BG_Speed;

}

void Background::Draw()
{
    // Update Y position
    Back_Y += Back_Speed;
    /* While background move to the end,
    move it to the top */
    if (Back_Y >= 0){
        Back_Y = BG_Y;
    }
}
