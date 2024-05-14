#ifndef BACKGROUND_H
#define BACKGROUND_H
#include "Root_Object.h"
#include <QPixmap>


class Background:Root_Object
{
public:
    // Constructor
    Background();
    // Get background image
    QPixmap getBG_img();
    void Draw() override;

private:
    // Background image
    static QPixmap BG_img;



};

#endif // BACKGROUND_H
