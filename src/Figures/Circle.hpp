#pragma once
#include "Figure.hpp"

class Circle : public Figure
{
  public:
    float radius;
    Circle(Point p, float r);
    ~Circle();
    float getArea();
    float getPerimeter();
    std::string toString();
};