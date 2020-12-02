#include <iostream>
using namespace std;

class B {
public:
	B() {}
	virtual void p() { cout << "B::p()" << endl; }
	void q() { cout << "B::q()" << endl; }
};

class D :public B {
public:
	D() {}
	virtual void p() { cout << "D::p()" << endl; }
	void q() { cout << "D::q()" << endl; }
};

int main() {
	B b;
	D d;
	B* pb = new B();
	B* pd = new D();
	D* pd2 = new D();

	b.p(); 
	b.q();
	cout << "----" << endl;
	d.p(); 
	d.q();
	cout << "----" << endl;
	pb->p(); 
	pb->q();
	cout << "----" << endl;
	pd->p();
	pd->q();
	cout << "----" << endl;
	pd2->p(); 
	pd2->q();
	cout << "----" << endl;

	return 0;
}