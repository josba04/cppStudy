#include <iostream>
using namespace std;

int add(int x, int y) {
	return (x + y);
}

int substract(int x, int y) {
	return (x - y);
}

int mult(int x, int y) {
	return (x * y);
}

int main() {
	int a, b;
	cout << "�� �Է� :";
	cin >> a;
	cout << "�� �Է� : ";
	cin >> b;
	int op;
	cout << "1. ����, 2. ����, 3.���� : ";
	cin >> op;

	//���� binding�� ����

	int (*funcptr)(int, int) = nullptr;	//������ ������ �Լ��� ȣ���� �� ����Ѵ�. �Ķ������ ������ ���ƾ� ����� �� �ִ�.
	switch (op) {
	case 1: funcptr = add; break;
	case 2: funcptr = substract; break;
	case 3: funcptr = mult; break;
	}
	
	cout << funcptr(a, b) << endl;

	//���� binding�� ����
	/*int result = 0;
	switch (op) {
	case 1: result = add(a, b); break;
	case 2: result = substract(a, b); break;
	case 3: result = mult(a, b); break;
	}

	cout << result << endl;*/
}