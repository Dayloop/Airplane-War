#include "root_object.h"
// Add new
Root_Object::Root_Object()
{

}

int Root_Object::getX()
{
    return this->X;
}

void Root_Object::setX(int x)
{
    this->X = x;
}

int Root_Object::getY()
{
    return this->Y;
}

void Root_Object::setY(int y)
{
    this->Y = y;
}

int Root_Object::getWidth()
{
    return this->Width;
}

void Root_Object::setWidth(int width)
{
    this->Width = width;
}

int Root_Object::getHeight()
{
    return this->Height;
}

void Root_Object::setHeight(int height)
{
    this->Height = height;
}

int Root_Object::getSpeed()
{
    return this->Speed;
}

void Root_Object::setSpeed(int speed)
{
    this->Speed = speed;
}

Direction Root_Object::getDirc()
{
    return this->Dirc;
}

void Root_Object::setDirc(Direction dirc)
{
    this->Dirc = dirc;
}







