#include <iostream>
using namespace std;

int nValue = 100; 
void sunFunc() {
	int nVal = 20;
	cout << "subFunc :: �������� : " << nValue << endl;
	cout << "subFunc :: �������� : " << nVal << endl;
	nValue = 200;
	nVal = 10;
	cout << "subFunc :: �������� : " << nValue << endl;
	cout << "subFunc :: �������� : " << nVal << endl;
}
int main() {
	int nValue = 10; 
	//������������ ������������ �����ϴ�.
	//���������� �����Ϸ��� ���� ������(::)�� ����Ѵ�.
	cout << "main ::�������� : " << ::nValue << endl;
	//������������ ����Ѵ�.
	cout << "main :: �������� : " << nValue << endl;

	sunFunc();
	//���� �Լ��� ȣ���Ѵ�.
	cout << "main :: �������� : " << nValue << endl;
	cout << "main ::�������� : " << nValue << endl;

return 0;
}