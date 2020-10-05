#pragma once
#include <iostream>
using namespace std;

class Point {
public:
	Point(int x, int y) :x_(x), y_(y) {};
	void Move(int x, int y);
	void Print();

private:
	int x_;
	int y_;
};

inline void Point::Move(int x, int y) {
	x_ = x_ + x;
	y_ = y_ + y;
}