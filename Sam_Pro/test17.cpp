#include <iostream>
using namespace std;

int main() {

	int a = 3;
	int* ptr = 0;
	ptr = &a;
	cout << "a�� �ּ� ���� �����մϴ�.   " << ptr << endl;
	cout << "a�� ���� ���� �����մϴ�.   " << *ptr << endl;

	*ptr = 10;
	cout << "a�� ���� ���� ������ �ٲߴϴ�.  " << *ptr << endl;
	cout << "a�� �ּ� ���� �ٲ��� �ʽ��ϴ�.  " << ptr << endl;

	return 0;
}