#include <iostream>
#include "Array.h"
using namespace std;

ostream& operator<<(ostream& out, const Array& array) {
	for (int i = 0; i < array.count_; i++) {
		cout << array.ary_[i] << "\t";
	}
	cout << endl;

	return out;
}