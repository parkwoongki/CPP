#include <iostream>
using namespace std;

class Base {

public:
	Base() : num_(0) { cout << "������ Base(" << num_ << ")" << endl; }
	Base(int n) : num_(n) { cout << "������ Base(" << num_ << ")" << endl; }
	~Base() { cout << "�Ҹ��� Base(" << num_ << ")" << endl; }
protected:
	int num_;
};

class Derived : public Base {
public:
	Derived() {
		cout << "������ Derived(" << num_ << ")" << endl;
	}
	Derived(int num) : Base(num) {
		cout << "������ Derived(" << num_ << ")" << endl;
	}
	~Derived() { cout << "�Ҹ��� Derived(" << num_ << ")" << endl; }
};

Derived d1;

void main() {
	Derived* d2 = new Derived(1);
	Derived d3(2);

	delete d2;
}