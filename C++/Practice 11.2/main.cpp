#include <iostream>
using namespace std;

#define PI 3.14

class Circle {
public:
	Circle(int x, int y, double radius) :x_(x), y_(y), radius_(radius) {}
	double GetArea() {
		return (PI * radius_ * radius_);
	}
	int GetX() {
		return x_;
	}
	int GetY() {
		return y_;
	}
	Circle& operator = (const Circle& cir) {
		cout << "Circle 대입 연산자" << endl;
		x_ = cir.x_, y_ = cir.y_, radius_ = cir.radius_;
		return (*this);
	}
protected:
	int x_, y_;
	double radius_;
};

class Sphere :public Circle {
public:
	Sphere(int x, int y, int z, double radius) :Circle(x, y, radius), z_(z) {}
	double GetArea() {
		return (4 * PI * radius_ * radius_);
	}
	double GetVolume() {
		return ((4.0 / 3.0) * PI * radius_ * radius_ * radius_);
	}
private:
	int z_;
};

class Point {
public:
	Point(int x, int y) :x_(x), y_(y) {};
protected:
	int x_, y_;
};

int main() {
	Point pt1(1, 1);
	Circle cir(2, 2, 2);
	Sphere sph(3, 3, 3, 3);

	Point pt2 = Point(cir.GetX(), cir.GetY());
	Circle cir2 = sph;
	Sphere sph2 =(Sphere&)cir;

	return 0;
}