#include<iostream>
#include<fstream>
using namespace std;

int main() {
	ifstream input("input.txt");
	if (input.fail()) {
		cout << "������ ���µ� �����߽��ϴ�." << endl;
		return 1;
	}
	input.seekg(0, ios::end);
	cout << (char)input.get() << endl;
	input.clear();
	input.seekg(-5, ios::cur);
	cout << (char)input.get() << endl;
	input.close();
	return 0;
}

//c++�� ��Ʈ���� eofbit��� �÷��׸� ������ �ִµ�, ����� �Լ��� �����ϸ� ������ ���� �ٽ� ������ Ŀ���� �̵���Ű�� ���ؼ� clear�Լ��� ����ؾ� �Ѵ�.