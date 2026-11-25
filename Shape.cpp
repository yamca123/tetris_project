#include "Shape.h"

#include <cmath>

void Shape::moveUp() {
    moveBy(0, -1, Direction::UP);
}

void Shape::moveDown() {
    moveBy(0, 1, Direction::DOWN);
}

void Shape::moveLeft() {
    moveBy(-1, 0, Direction::LEFT);
}

void Shape::moveRight() {
    moveBy(1, 0, Direction::RIGHT);
}

void Shape::moveBy(int dx, int dy, Direction newDirection) {
    for (Point& point : points) {
        point.translate(dx, dy);
    }

    rotationPivotX += dx;
    rotationPivotY += dy;
    direction = newDirection;
}

void Shape::setRotationPivot(double x, double y) {
    rotationPivotX = x;
    rotationPivotY = y;
}

void Shape::rotateClockwise() {
    rotate(true);
}

void Shape::rotateCounterClockwise() {
    rotate(false);
}

void Shape::rotate(bool clockwise) {
    for (Point& point : points) {
        const double offsetX = point.getX() - rotationPivotX;
        const double offsetY = point.getY() - rotationPivotY;
        const double newX = clockwise
            ? rotationPivotX - offsetY
            : rotationPivotX + offsetY;
        const double newY = clockwise
            ? rotationPivotY + offsetX
            : rotationPivotY - offsetX;

        point.setPosition(
            static_cast<int>(std::lround(newX)),
            static_cast<int>(std::lround(newY)));
    }
}