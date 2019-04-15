#include "Triangle.hpp"
#include <string>

using namespace std;

string Triangle::toString()
{
    string buffer = "triangle((";
    for (size_t i = 0; i < this->points.size(); i++)
    {
        buffer += ' ' + this->points[i].x + ' ';
        buffer += this->points[i].y;
    }
    buffer += "))";
    return buffer;
}
/*
Triangle::Triangle(std::vector<Point> points)
{
    int i = 0;
    for(Point point: points){
        this->points[i++] = point;
    }
}
*/