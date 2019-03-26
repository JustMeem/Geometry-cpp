#pragma once
#include "Shape.hpp"



class Triangle : public Shape
{
  public:
    std::string toString();
    Triangle(std::vector<Point> Points);
}