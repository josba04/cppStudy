#include <iostream>
using namespace std;

int main() {
	char a;
	int count = 0;
	

	while (true) {
		cout << "���ڸ� �Է��Ͻÿ�." << endl;
		cin >> a;
		if (a == 'a') {
			count += 1;
			cout << count << endl;
		}
		else {
			cout << "�Է��� ���� �ʽ��ϴ�." << endl;break;
		}
	}
	/*if (a) {
		for (;;) {
			count += 1;
			cout << count << endl;
		}
	}
	else {
		cout << "��" << endl;
	}
	cout << count << endl;
	*/
}