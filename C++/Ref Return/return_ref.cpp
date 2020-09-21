#include <iostream>
using namespace std;

// 1.
int& Min(int& x, int& y) {
	return ((x < y) ? x : y);
}

// 2.
int& GetArray(int* ary, int index) {
	return ary[index];
}

int main() {
	// 1.
	int num1 = 3, num2 = 4;

	Min(num1, num2) = 5;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl<<endl;

	// 2.
	int i;
	int ary[5];

	for (i = 0; i < 5; i++)
		GetArray(ary, i) = i;

	for (i = 0; i < 5; i++)
		cout << "ary[" << i << "] " << GetArray(ary, i) << endl;
}