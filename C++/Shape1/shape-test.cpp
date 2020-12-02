#include <iostream>
#include "shape.h"
#include "client.h"
using namespace std;

int main() {
	const int size = 5;
	CShape* shapes[size];

	// build shapes array
	shapes[0] = new CCircle();
	shapes[1] = new CCircle(2, 10, 20);
	shapes[2] = new CRect();
	shapes[3] = new CRect(3, 4, 30, 40);
	shapes[4] = new CTriangle(6, 4, 50, 60);

	// output shapes
	out_shapes(cout, shapes, size);

	// compute total area
	cout << "total area = " << total_area(shapes, size) << endl;

	for (int i = 0; i < size; i++)
		delete shapes[i];

	return 0;
}
