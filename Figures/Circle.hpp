#pragma once
#include "Figure.hpp"

class Circle : public Figure
{
  private:
    float radius;

  public:
    Circle(Point p, float r);
    ~Circle();
    float getArea();
    float getPerimeter();
    std::string toString();
};