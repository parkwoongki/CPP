#include <iostream>
using namespace std;

int main() {
	int num;

	cout << "1���� ���� �Է� (1~9) : ";
	cin >> num;

	try {
		if (num < 1 || num>9)
			throw num;

		cout << "���� �� : " << num * num << endl;
	}
	catch (int ex) {
		cout << ex << "�� �Է��ϼ̳׿�! �߸� �Է��ϼ̽��ϴ�." << endl;
	}

	return 0;
}