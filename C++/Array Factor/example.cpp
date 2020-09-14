#include <stdio.h>

void incr(int a[], int n) {
	for (int i = 0; i < n; i++)
		++a[i];
}

void out(const int a[], int n) {
	printf("%d:", n);
	for (int i = 0; i < n; i++)
		printf(" %d", a[i]);
	printf("\n");
}

int main() {
	int list[] = { 1, 2, 3 };
	int n = sizeof list / sizeof list[0];

	out(list, n);
	incr(list, n);
	out(list, n);

	return 0;
}
