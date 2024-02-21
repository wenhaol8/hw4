#include "square.hpp"

Square::Square(Point center, std::string name, double side)
        : Rectangle(center, std::move(name), side, side) {}

Shape* Square::clone() const {
    return new Square(*this);
}
