#include <iostream>
using namespace std;

class Base {

public:
	Base() : num_(0) { cout << "持失切 Base(" << num_ << ")" << endl; }
	Base(int n) : num_(n) { cout << "持失切 Base(" << num_ << ")" << endl; }
	~Base() { cout << "社瑚切 Base(" << num_ << ")" << endl; }
protected:
	int num_;
};

class Derived : public Base {
public:
	Derived() {
		cout << "持失切 Derived(" << num_ << ")" << endl;
	}
	Derived(int num) : Base(num) {
		cout << "持失切 Derived(" << num_ << ")" << endl;
	}
	~Derived() { cout << "社瑚切 Derived(" << num_ << ")" << endl; }
};

Derived d1;

void main() {
	Derived* d2 = new Derived(1);
	Derived d3(2);

	delete d2;
}