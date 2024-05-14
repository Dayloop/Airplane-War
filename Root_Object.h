#ifndef ROOT_OBJECT_H
#define ROOT_OBJECT_H
// Add new things
// Direction
enum Direction{
    Up, Down, Left, Right
};


class Root_Object
{
public:
    Root_Object();

    //Bean function
    int getX();
    void setX(int x);

    int getY();
    void setY(int y);

    int getWidth();
    void setWidth(int width);

    int getHeight();
    void setHeight(int height);

    int getSpeed();
    void setSpeed(int speed);

    Direction getDirc();
    void setDirc(Direction dirc);

    // Draw image
    virtual void Draw();


private:
    // Object position
    int X;
    int Y;
    // Object size
    int Width;
    int Height;
    // Others
    int Speed;
    Direction Dirc;



};

#endif // ROOT_OBJECT_H
