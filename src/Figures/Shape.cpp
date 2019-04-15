#include "Shape.hpp"
#include <cmath>

Shape::Shape(std::vector<Point> points)
{
    int i = 0;
    for(Point point: points){
        this->points[i++] = point;
    }
}
float Shape::getArea()
//формула площади Гаусса
{
    int S = 0;
    for (size_t i = 0; i < (this->points.size() - 1); i++)
    {
        S += this->points[i].x * this->points[i + 1].y -
             this->points[i].y * this->points[i + 1].x;
    }
    return abs(S);
}

float Shape::getPerimeter()
{
    float P = 0;
    for (size_t i = 0; i < this->points.size() - 1; i++)
    {
        P += (float)sqrt(pow(this->points[i].x - this->points[i + 1].x, 2) +
                         pow(this->points[i].y - this->points[i + 1].y, 2));
    }
    return P;
}

std::string Shape::toString()
{
    std::string buffer = "shape((";
    for (size_t i = 0; i < this->points.size(); i++)
    {
        buffer += ' ' + this->points[i].x + ' ';
        buffer += this->points[i].y + ',';
    }
    buffer += "))";
    return buffer;
}