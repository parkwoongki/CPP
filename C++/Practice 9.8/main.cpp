#include <iostream>
using namespace std;

class Point {
public:
	Point(int x = 0, int y = 0) :x_(x), y_(y) {}
	Point operator--() {
		x_--;
		y_--;
		return (*this);
	}
	Point operator--(int NotUsed) {
		Point temp = (*this);
		x_--;
		y_--;
		return temp;
	}
	void Print() {
		cout << "(" << x_ << ", " << y_ << ")" << endl;
	}

private:
	int x_;
	int y_;
};

int main() {
	Point pt1(3, 3);
	Point pt2 = --pt1;
	Point pt3 = --(--pt1);

	pt1.Print();
	pt2.Print();
	pt3.Print();

	Point pt4(3, 3);
	Point pt5 = pt4--;
	Point pt6 = (pt4--)--;

	pt4.Print();
	pt5.Print();
	pt6.Print();

	return 0;
}