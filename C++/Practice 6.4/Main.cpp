#include <iostream>
#include "Student.h"
using namespace std;

int main() {
	Student st1("ȫ�浿", 11111111, 25);
	Student st2;

	st1.Print();
	st2.Print();

	st2.SetName("�̼���");
	st2.SetNumber(22222222);
	st2.SetAge(30);

	st2.Print();

	return 0;
}