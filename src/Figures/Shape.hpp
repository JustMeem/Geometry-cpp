#pragma once
#include "Figure.hpp"

class Shape : public Figure
{
  private:
    /* data */
  public:
    Shape(std::vector<Point> points);
    ~Shape();
    virtual float getArea();
    virtual float getPerimeter();
    virtual std::string toString();
};
