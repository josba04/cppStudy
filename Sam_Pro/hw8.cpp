#include <iostream>
using namespace std;

int main() {
	unsigned int A, B;
	int sum = 0;
	int cnt = 0;
	cout << "�� �ΰ� �Է�(���� ��, ū ��) : ";
	cin >> A;
	cin >> B;
	cout << "���� ��� : " << A << endl;
	cout << "�� �� : " << B << endl;
	cout << "0����" << B << "������ �ִ� " << A << " �� ��� :";
	for (int i = 0; i <= B; i++){
		if (i % A == 0) {
			cout << i << "  ";
			sum += i;
			cnt++;
		}
	}
	cout << endl;
	cout << "0����" << B << "������ �ִ� " << A << " �� ����� ���� : "<< cnt <<"��"<<endl;
	cout << "0����" << B << "������ �ִ� " << A << " �� ����� �� : "<<sum << endl;
}