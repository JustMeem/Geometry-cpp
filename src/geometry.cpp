#include "geometry.hpp"
#include <cmath>
#include <string>

bool geometry::isIntersects(const Figure *f, const Circle *c)
{
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
bool geometry::isIntersects(const Figure *f1, const Figure *f2)
{
    return 0;
}

std::vector<std::string> split(std::string str, char splitter)
{
    std::vector<std::string> v;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == splitter)
        {
            str[i] = '\0';
            if (str[i + 1] != splitter && str[i + 1] != '\0')
                v.push_back(std::string(str, i + 1));
        }
    }
    return v;
}

Figure *geometry::fromWKT(std::string str)
{
    Figure *fig;
    std::vector<std::string> v = split(str, '(');
    split(v[1], ')');
    std::vector<std::string> pairs = split(v[1], ',');
    if (v[0] == "circle")
    {
        if (pairs.size != 2)
            throw "Wrong input format";
        std::vector<std::string> point = split(pairs[0], ' ');
        if (point.size != 2)
            throw "Wrong input format";
        Point p = {stof(point[0]), stof(point[1])};
        fig = new Circle(p, stof(pairs[1]));
    }
    else if (v[0] == "triangle")
    {
        if (pairs.size != 4)
            throw "Wrong input format";
        std::vector<Point> points;
        std::vector<std::string> buffer;
        for (std::string num : pairs)
        {
            buffer = split(num, ' ');
            if(buffer.size != 2)
                throw "Wrong input format";
            points.push_back({stof(buffer[0]), stof(buffer[1])});
        }
        fig = new Triangle(points);
    }
    else if (v[0] == "shape")
    {
        std::vector<Point> points;
        std::vector<std::string> buffer;
        for (std::string num : pairs)
        {
            buffer = split(num, ' ');
            if(buffer.size != 2)
                throw "Wrong input format";
            points.push_back({stof(buffer[0]), stof(buffer[1])});
        }
        fig = new Shape(points);
    }
    else
    {
        throw "Wrong figure exception";
    }
    return fig;
}