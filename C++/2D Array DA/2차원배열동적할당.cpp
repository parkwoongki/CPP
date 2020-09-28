#include <iostream>
using namespace std;

int main() {
	int(*ptr)[5];
	int i, j;
	ptr = new int[4][5];

	for (i = 0; i < 4; i++)
		for (j = 0; j < 5; j++)
			ptr[i][j] = i + j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 5; j++)
			cout << ptr[i][j] << "\t";
		cout << endl;
	}

	delete[] ptr;

	return 0;
}