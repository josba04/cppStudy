#include <iostream>
using namespace std;
void main() {
	char addr[80];
	cout << "문자열 입력 : ";
	while (true) {
		cin.getline(addr, 80);
		if (strcmp(addr, "exit") == 0) break;
		cout << "문자열 출력 : " << addr << endl;
		cout << "문자열 입력 : ";
	}
}