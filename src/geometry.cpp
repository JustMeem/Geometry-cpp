#include "geometry.hpp"
#include <cmath>

bool geometry::isIntersects(const Figure *f, const Circle *c){
    return 0;
}

bool geometry::isIntersects(const Circle *c, const Figure *f)
{
    return geometry::isIntersects(f, c);
}

bool isIntersects(const Circle *c1, const Circle *c2)
{
    return sqrt(powf(c1->points[0].x - c2->points[0].x, 2) + powf(c1->points[0].y - c2->points[0].y, 2)) <=
           c1->radius + c2->radius; // сравнение растояния между центрами и суммой радиусов
}
bool geometry::isIntersects(const Figure *f1, const Figure *f2){
    return 0;
}

Figure geometry::fromWKT(std::string str){}