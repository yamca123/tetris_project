#pragma once

#include <array>

#include "Direction.h"
#include "Point.h"

class Shape {
public:
    std::array<Point, 4> points;
    Direction direction = Direction::STAY;
    double rotationPivotX = 1.0;
    double rotationPivotY = 1.0;

    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
    void setRotationPivot(double x, double y);
    void rotateClockwise();
    void rotateCounterClockwise();

private:
    void moveBy(int dx, int dy, Direction newDirection);
    void rotate(bool clockwise);
};