#include <iostream>
using namespace std;

int main() {
	int num;

	cout << "1개의 정수 입력 (1~9) : ";
	cin >> num;

	try {
		if (num < 1 || num>9)
			throw num;

		cout << "제곱 값 : " << num * num << endl;
	}
	catch (int ex) {
		cout << ex << "을 입력하셨네요! 잘못 입력하셨습니다." << endl;
	}

	return 0;
}