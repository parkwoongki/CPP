#include <iostream>
using namespace std;

class Time {

public:
	Time(int hour = 0, int minute = 0, int second = 0) : hour_(hour), minute_(minute), second_(second) {}
	void Print() {
		cout  << hour_ << "½Ã " << minute_ << "ºÐ " << second_<<"ÃÊ"<< endl;
	}

	friend Time operator+(const Time& t1, const Time& t2);

private:
	int hour_;
	int minute_;
	int second_;
};

Time operator+(const Time& t1, const Time& t2) {
	int hour = 0;
	int minute = 0;
	int second = 0;

	second = t1.second_ + t2.second_;
	if (second / 60 > 0) {
		minute += second / 60;
		second %= 60;
	}

	minute = minute + t1.minute_ + t2.minute_;
	if (minute / 60 > 0) {
		hour += minute / 60;
		minute %= 60;
	}

	hour = hour + t1.hour_ + t2.hour_;

	return Time(hour, minute, second);
}

int main() {

	Time time1(4, 50,40);
	Time time2(3, 40, 30);
	Time time3 = time1 + time2;

	time1.Print();
	time2.Print();
	time3.Print();

	return 0;
}