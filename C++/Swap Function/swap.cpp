#include <iostream>
using namespace std;

void swap(int* px, int* py);

int main() {
	int a = 100, b = 200;
	printf("a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("a=%d b=%d\n", a, b);

	return 0;
}

void swap(int* px, int* py) {
	int tmp = 0;

	printf("*px=%d *py=%d\n", *px, *py);
	tmp = *px; *px = *py; *py = tmp;
	printf("*px=%d *py=%d\n", *px, *py);
}