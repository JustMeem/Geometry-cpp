#pragma once
#include <vector>
#include <string>

struct Point
{
    float x, y;
};

class Figure
{
  public:
    std::vector<Point> points;
    virtual float getArea();
    virtual float getPerimeter();
    virtual std::string toString();
};
