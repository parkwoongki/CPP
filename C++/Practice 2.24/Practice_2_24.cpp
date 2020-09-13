#include <iostream>
using namespace std;

int ArithmeticSequence(int a1, int d, int n) {
	if (n == 1)
		return a1;

	ArithmeticSequence(a1 + d, d, n - 1);
}

int main() {
	cout << "첫항 1, 등차 2, 5번째 항 = " << ArithmeticSequence(1, 2, 5) << endl;
	cout << "첫항 100, 등차 -5, 10번째 항 = " << ArithmeticSequence(100, -5, 10) << endl;
	cout << "첫항 -1, 등차 -2, 5번째 항 = " << ArithmeticSequence(-1, -2, 5) << endl;

	return 0;
}