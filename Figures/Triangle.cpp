#include "Triangle.hpp"
#include <string>

using namespace std;

string Triangle::toString()
{
    string buffer = "Triangle((";
    for (size_t i = 0; i < this->points.size(); i++)
    {
        buffer += ' ' + this->points[i].x + ' ';
        buffer += this->points[i].y;
    }
    buffer += "))";
}