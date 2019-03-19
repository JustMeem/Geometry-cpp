#include "Figure.hpp"
#include <vector>
#include <string>

class Shape: public Figure
{
private:
    /* data */
public:
    Shape(std::vector<Point> points);
    ~Shape();
};
