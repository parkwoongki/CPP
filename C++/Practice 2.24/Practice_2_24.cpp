#include <iostream>
using namespace std;

int ArithmeticSequence(int a1, int d, int n) {
	if (n == 1)
		return a1;

	ArithmeticSequence(a1 + d, d, n - 1);
}

int main() {
	cout << "ù�� 1, ���� 2, 5��° �� = " << ArithmeticSequence(1, 2, 5) << endl;
	cout << "ù�� 100, ���� -5, 10��° �� = " << ArithmeticSequence(100, -5, 10) << endl;
	cout << "ù�� -1, ���� -2, 5��° �� = " << ArithmeticSequence(-1, -2, 5) << endl;

	return 0;
}