#include "console.h"
#include "Point.h"

void Point::draw(char c) {
	gotoxy(x, y);
	set_color(color);
	std::cout << c << std::flush;
	reset_color();
}

void Point::translate(int dx, int dy) {
	x += dx;
	y += dy;
}

void Point::setPosition(int newX, int newY) {
	x = newX;
	y = newY;
}
