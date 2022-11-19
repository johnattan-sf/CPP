#include "point2d.h"

// construtor padrão
point2d::point2d()
{
    this->x = 0.0;
    this->y = 0.0;
}

// construtor parametrizado
point2d::point2d(float nx, float ny)
{
    this->x = nx;
    this->y = ny;
}

// construtor de cópia
point2d::point2d(const point2d &p)
{
    this->x = p.getX();
    this->y = p.getY();
}

// setters:
void point2d::setX(float nx)
{
    this->x = nx;
}

void point2d::setY(float ny)
{
    this->y = ny;
}
