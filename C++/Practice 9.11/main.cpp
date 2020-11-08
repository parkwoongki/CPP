#include <iostream>
#include <time.h>
#include "Array.h"

int main() {

	srand((unsigned)time(NULL));

	Array ary1(5);
	Array ary2(3);

	cout << ary1 << endl;
	cout << ary2 << endl;

	ary1 = ary2;

	cout << ary1 << endl;
	cout << ary2 << endl;

	return 0;
}