#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

class Date {
public:
	Date(int year, int month, int day) :year_(year), month_(month), day_(day) {};
	void Print() {
		cout << "날짜 : " << year_ << "년 " << month_ << "월 " << day_ << "일 " << endl;
	}
private:
	int year_;
	int month_;
	int day_;
};

class Time {
public:
	Time(int hour, int minute, int second) :hour_(hour), minute_(minute), second_(second) {};
	void Print() {
		cout << "시간 : " << hour_ << "시 " << minute_ << "분 " << second_ << "초 " << endl;
	}
private:
	int hour_;
	int minute_;
	int second_;
};

class DateTime : public Date, public Time {
public:
	DateTime(int year, int month, int day, int hour, int minute, int second, const char* todo) : Date(year, month, day), Time(hour, minute, second) {
		len_ = strlen(todo);
		todo_ = new char[len_ + 1];
		strcpy(todo_, todo);
	};
	void Print() {
		Date::Print();
		Time::Print();
		cout << "할일 : " << todo_ << endl;
	}
private:
	int len_;
	char* todo_;
};

int main() {

	DateTime dt(20, 12, 25, 20, 4, 5, "공부하기");
	dt.Print();

	return 0;
}