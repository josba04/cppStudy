#include <iostream>
#include <string>
using namespace std;

class Animal {
	string name;
	int weight;
public:
	Animal() { cout << "Animal ������()" << endl; }
	Animal(string name, int w) {
		cout << "Animal ������()-�Ű�����" << endl;
		this->name = name;
		weight = w;
	}
	~Animal() { cout << "Animal �Ҹ���()" << endl; }
	void print1() {
		// ���������ڰ� protected �� ��쿡�� virtual�� ���� ������ �ʿ� ����
		// �Ǵ� �Ƶ��ʿ��� print�� ������ ��
		cout << name << "�� �����Դ� " << weight << "kg �̰�,";
	}
};
class Dog :public Animal {
	int height;
public:
	Dog() { cout << "Dog ������()" << endl; }
	Dog(string name, int w, int h) :Animal(name,w), height(h){
		// �ƹ��͵� �Ƚ��ָ� �ƺ��⺻������ ȣ��
		//������ :Animal(name,w) �̷��� ���༭ �Ű����� �ִ� �ƺ� ������ ȣ��
		// �ƺ� �Ű����� �ִ� ������ ���ٿ� �ڿ� height �� �־���
		cout << "Dog ������()-�Ű�����" << endl;
		//height = h;
	}
	~Dog() {cout << "Dog �Ҹ���()" << endl;}
	void print() {
		//�̸��� ���� ��� Animal::print();
		print1(); // �ƺ��� print1 �޼ҵ带 ���ٿ� �� Ű���� ���
		cout<<"Ű�� " << height << "cm �Դϴ�." << endl;
	}
};

int main() {
	Dog dog("�۸���", 4, 50);
	dog.print();
	return 0;
}