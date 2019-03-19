#pragma once
#include <vector>
#include <string>

struct Point
{
    float x, y;
};

class Figure
{
  protected:
    std::vector<Point> points();

  public:
    virtual float getArea();
    virtual float getPerimeter();
    virtual std::string toString();
};
