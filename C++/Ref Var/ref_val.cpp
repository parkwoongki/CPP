#include <iostream>
using namespace std;

void Swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int num1 = 3, num2 = 4;
    cout << "교환 전 : num1 = " << num1 << ", num2 = "
        << num2 << endl;

    Swap(num1, num2);         // 교환
    cout << "교환 후 : num1 = " << num1 << ", num2 = "
        << num2 << endl;

    return 0;
}