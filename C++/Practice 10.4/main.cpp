#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

class Date {
public:
	Date(int year, int month, int day) :year_(year), month_(month), day_(day) {};
	void Print() {
		cout << "��¥ : " << year_ << "�� " << month_ << "�� " << day_ << "�� " << endl;
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
		cout << "�ð� : " << hour_ << "�� " << minute_ << "�� " << second_ << "�� " << endl;
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
		cout << "���� : " << todo_ << endl;
	}
private:
	int len_;
	char* todo_;
};

int main() {

	DateTime dt(20, 12, 25, 20, 4, 5, "�����ϱ�");
	dt.Print();

	return 0;
}