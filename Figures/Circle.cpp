#include "Circle.hpp"
#include <cmath>


Circle::Circle(Point p, float r)
{
    this->points[0] = p;
    this->radius = r; 
}

float Circle::getArea(){
    return M_PI * pow(this->radius, 2);
}

float Circle::getPerimeter(){
    return 2 * M_PI * this->radius;
}

Circle::~Circle(){}