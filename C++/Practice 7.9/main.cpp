#include <iostream>
#include "Shape.h"
using namespace std;

int main() {

	Shape shape1(1, 5);
	Shape shape2(2, 5);
	Shape* p_rect = new Shape[3];

	cout << "�簢�� ����	: " << Shape::GetRectCount() << endl;
	cout << "�� ����		: " << Shape::GetCircleCount() << endl;
	cout << "shape1�� ����	: " << shape1.GetArea() << endl;

	delete[] p_rect;

	cout << "�簢�� ����	: " << Shape::GetRectCount() << endl;
	cout << "�� ����		: " << Shape::GetCircleCount() << endl;
	cout << "shape2�� ����	: " << shape2.GetArea() << endl;

	getchar();
	getchar();

	return 0;
}