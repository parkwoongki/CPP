#include <iostream>
#include "Shape.h"
using namespace std;

int main() {

	Shape shape1(1, 5);
	Shape shape2(2, 5);
	Shape* p_rect = new Shape[3];

	cout << "사각형 개수	: " << Shape::GetRectCount() << endl;
	cout << "원 개수		: " << Shape::GetCircleCount() << endl;
	cout << "shape1의 면적	: " << shape1.GetArea() << endl;

	delete[] p_rect;

	cout << "사각형 개수	: " << Shape::GetRectCount() << endl;
	cout << "원 개수		: " << Shape::GetCircleCount() << endl;
	cout << "shape2의 면적	: " << shape2.GetArea() << endl;

	getchar();
	getchar();

	return 0;
}