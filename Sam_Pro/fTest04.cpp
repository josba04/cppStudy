#include <iostream>
using namespace std;

int square_sum(int &num) {
	num = num * num;
	return num + num;  // 3^2 + 3^3
}

int main() {
	int a = 3;
	/*int &b = a;
	b = 10;*/
	cout << square_sum(a) << endl;
	cout << "a ���� �ٲ���ٸ� 9�� ��µ˴ϴ� : " << a << endl;
}