#pragma once

#include <iostream>
#include "console.h"

class Point {
	int x = 1, y = 1;
	char ch = '*';
	Color color = Color::White;
public:
	Point() = default;
	Point(int x1, int y1, char c = '*', Color myColor = Color::White)
		: x(x1), y(y1), ch(c), color(myColor) {}
	void draw() {
		draw(ch);
	}
	void draw(char c);
	void translate(int dx, int dy);
	void setPosition(int x, int y);
	int getX() const {
		return x;
	}
	int getY() const {
		return y;
	}
};

