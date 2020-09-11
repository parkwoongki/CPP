#include <iostream>
using namespace std;
#define PI 3.14

int getArea(int a, int b) {
	return a * b;
}

double getArea(int r) {
	return PI * r * r;
}

int main() {
	cout << getArea(5, 4) << endl;
	cout << getArea(4) << endl;

	return 0;
}