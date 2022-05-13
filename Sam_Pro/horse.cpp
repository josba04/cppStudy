#include <iostream>
using namespace std;

class Horse {
public:
	Horse() {cout << "Horse ������" << endl;}
	virtual ~Horse() { cout << "Horse �Ҹ���" << endl; }
	void speak() {
		cout << "������~" << endl;
	}
	void fly(){}
};

class Bird {
public:
	Bird() {cout << "Bird ������" << endl;}
	~Bird() { cout << "Bird �Ҹ���" << endl; }
	void speak() {
		cout << "±±~" << endl;
	}
	void fly() {
		cout << "����" << endl;
	}
};

class Pegasus : public Horse { // is a: ���, has a : ����
	// public Bird, public Horse �̼����� ���� �����ڿ� �Ҹ��ڿ� ���ٿ��� ������ �ٲ��.
	Bird b; //����
public: // ���ο��� ����Ϸ��� public�̿��� ��
	Pegasus() {
		cout << "Pegasus ������" << endl;
	}
	~Pegasus() {
		cout << "Pegasus �Ҹ���" << endl; 
	}
	/*void speak() {
		cout << "�䰡���� ����~" << endl;
	}*/
	void fly() {
		b.fly();
	}
};

int main() {
	/*Pegasus peg;
	peg.speak();
	//peg.speak(); ���߻���� ������ �����߻�
	//Pegasus�� speak�� �ִٸ� �� �޼ҵ带 ���
	peg.fly();*/
	// fly�� ���� ���ؼ��� Bird�� �����̱� ������ Pegasus���� fly()�̰� �־�� �Ѵ�.

	Horse* peg = new Pegasus;
	peg->speak();
	peg->fly();
	//Horse* peg = new Pegasus; HorseŸ���� speak������ ���� �ֱ� ������ fly()���� ����
	//�ذ��ϱ� ���ؼ��� Horse�� fly()�� ������ �ȴ�.
	delete peg;

}