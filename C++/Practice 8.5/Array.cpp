#include <iostream>
#include "Array.h"
using namespace std;

void Array::Print() {
	for (int i = 0; i < count_; i++) {
		cout << ary_[i] << " ";
	}
	cout << endl;
}

