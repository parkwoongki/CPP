class Base {
private:
	int a_;
protected:
	int b_;
public:
	int c_;
};

class Derived : public Base {
private:
	int d_;
	void func1() { a_ = 1; b_ = 2; c_ = 3; d_ = 4; e_ = 5; f_ = 6; }
protected:
	int e_;
	void func2() { a_ = 1; b_ = 2; c_ = 3; d_ = 4; e_ = 5; f_ = 6; }
public:
	int f_;
	void func2() { a_ = 1; b_ = 2; c_ = 3; d_ = 4; e_ = 5; f_ = 6; }
};

int main() {
	Derived d_obj;
	d_obj.a_ = 1;
	d_obj.b_ = 1;
	d_obj.c_ = 1;
	d_obj.d_ = 1;
	d_obj.e_ = 1;
	d_obj.f_ = 1;
}