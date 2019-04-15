#include "Circle.hpp"
#define _USE_MATH_DEFINES
#include <cmath>
#include <sstream>

Circle::Circle(Point p, float r)
{
    this->points.reserve(1);
    this->points.push_back(p);
    this->radius = r;
}

float Circle::getArea()
{
    return M_PI * pow(this->radius, 2);
}

float Circle::getPerimeter()
{
    return 2 * M_PI * this->radius;
}

std::string Circle::toString()
{
    std::stringstream ss;
    ss << "circle(" << this->points[0].x << ' ' << this->points[0].y << ',' << this->radius << ')';
    return ss.str();
}