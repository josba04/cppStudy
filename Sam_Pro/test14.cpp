#include <iostream>
using namespace std;

int main() {
	int menu_select;
	cout << "�޴��� �����ϼ���. " << endl;
	cout << "1. ���� " << endl;
	cout << "2. ġŲ " << endl;
	cout << "3. ���� " << endl;
	cin >> menu_select;
	
	switch (menu_select) {
	case 1: cout << "1�� ���ڰ� �ֹ��Ǿ����ϴ�." << endl; break;
	case 2: cout << "2�� ġŲ�� �ֹ��Ǿ����ϴ�." << endl; break;
	case 3: cout << "3�� ������ �ֹ��Ǿ����ϴ�." << endl; break;
	default:cout << "�ֹ��� �߸��Ǿ����ϴ�." << endl; break;

	}
}