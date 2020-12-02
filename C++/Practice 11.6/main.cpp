#include <iostream>
using namespace std;

class Shape {
public:
	Shape(int x, int y) :x_(x), y_(y) {}
	void Move(int x, int y) {
		x += x;
		y += y;
	}
	virtual double GetArea() = 0;
	virtual void Print() = 0;
	friend ostream& operator<<(ostream& out, const Shape& shape);

protected:
	int x_, y_;
};

ostream& operator<<(ostream& out, Shape& shape) {
	shape.Print();
	return out;
}

class Circle : public Shape {
public:
	Circle(int x, int y, double radius) : Shape(x, y), radius_(radius) {}
	virtual double GetArea() { return (3.14 * radius_ * radius_); }
	virtual void Print() {
		cout << "원의 면적 : " << GetArea() << endl;
	}

private:
	double radius_;
};

class Rect : public Shape {
public:
	Rect(int x, int y, int garo, int sero) : Shape(x, y), garo_(garo), sero_(sero) {}
	virtual double GetArea() { return (garo_ * sero_); }
	virtual void Print() {
		cout << "사각형의 면적 : " << GetArea() << endl;
	}

private:
	int garo_, sero_;
};

int main() {
	Circle cir(1, 1, 1);
	Rect rect(2, 2, 2, 2);
	Shape* p_spe;

	p_spe = &cir;
	cout << *p_spe;

	p_spe = &rect;
	cout << *p_spe;
}