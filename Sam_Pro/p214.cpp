#include<iostream>
#include<string>
using namespace std;

int main() {
	system("mode con:cols=100 lines=10"); // consolâ ������ ����
	//cols = ���� lines ����                 

	auto campus = [](string x, string y){
	cout << x + y << endl;
	};
	campus("�̸�", "���̽��Ͱ�");
	campus("�ѱ�", "���б�");
	


	return 0;
}