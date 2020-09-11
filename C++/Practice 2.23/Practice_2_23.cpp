#include <iostream>
using namespace std;

int sum(int n1, int n2, int n3 = 0, int n4 = 0, int n5 = 0) {
	return n1 + n2 + n3 + n4 + n5;
}

int main() {
	cout << sum(1, 2) << endl;
	cout << sum(1, 2, 3, 4, 5) << endl;

	return 0;
}