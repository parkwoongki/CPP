#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class Student {

public:
	Student() {
		strcpy(name_, "noname");
		number_ = 0;
		age_ = 0;
	};
	Student(const char name[20], int number, int age) {
		strcpy(name_, name);
		number_ = number;
		age_ = age;
	};
	void Print();
	void SetName(const char name[20]);
	void SetNumber(int number);
	void SetAge(int age);

private:
	char name_[20];
	int number_;
	int age_;
};

inline void Student::Print() {
	cout << "이름 : " << name_ << endl;
	cout << "학번 : " << number_ << endl;
	cout << "나이 : " << age_ << endl;
}

inline void Student::SetName(const char name[20]) {
	strcpy(name_, name);
}

inline void Student::SetNumber(int number) {
	number_ = number;
}

inline void Student::SetAge(int age) {
	age_ = age;
}