#include <iostream>
using namespace std;
void main() {
	char addr[80];
	cout << "���ڿ� �Է� : ";
	while (true) {
		cin.getline(addr, 80);
		if (strcmp(addr, "exit") == 0) break;
		cout << "���ڿ� ��� : " << addr << endl;
		cout << "���ڿ� �Է� : ";
	}
}