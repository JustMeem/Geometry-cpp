#pragma once
#include "src/Figures/Circle.hpp"
#include "src/Figures/Shape.hpp"
#include "src/Figures/Triangle.hpp"

namespace geometry
{
bool isIntersects(const Figure *f1, const Figure *f2);
bool isIntersects(const Circle *c, const Figure *f);
bool isIntersects(const Figure *f, const Circle *c);
bool isIntersects(const Circle *c1, const Circle *c2);

Figure *fromWKT(std::string str);
std::vector<std::string> split(std::string str, char splitter);
} // namespace geometry