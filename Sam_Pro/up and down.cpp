#include<iostream>
using namespace std;

int main() {
	int num = rand() % 10 + 1;
	unsigned int A;
	cout << "�����մϴ�!" << endl;
	cout << "���� �����ϰ� �Է��ϼ���. : ";
	for (int i = 0; i < 4; i++) {
		cin >> A;
		if (A > num) {
			cout << "DOWN" << endl;
		}
		else if (A < num) {
			cout << "UP" << endl;
		}
		else {
			cout << "!!!! �����Դϴ� !!!!" << endl;
		}
	}
	cout << "Ʋ�Ƚ��ϴ�." << "������ " << num << "�Դϴ�." << endl;
}
		/*while(n != 0){
		cout << n % 10 << endl;				
		n = n / 10;
		}*/