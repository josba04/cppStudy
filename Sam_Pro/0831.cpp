#include <iostream>
using namespace std;

class Person {
private:
	// �Ƶ������� ����� ������ �Ƶ��ʿ��� ���� ���ϱ� ������ �޼ҵ带 ���� ���
	// �޸𸮴� Ȯ���Ѵ�.
	string name;
	int age;
public:
	void test(string n, int a) {
		name = n;
		age = a;
	}
	virtual void setData(string n, int a, int g) {
		cout << "Person" << endl;
		// virtual�� ������ Student setData�� ��
	}
	virtual ~Person() {
		cout << "Person �Ҹ�" << endl;
	}
};

class Student :public Person {
	int grade;
public:
	void setData(string n, int a, int g) {
		cout << "Student" << endl;
		test(n, a);
		// �ƺ�(Person)�� private �϶�
		grade = g;
	}
	~Student() {
		cout << "Student �Ҹ�" << endl;
	}

};

int main() {
	// Perso* p[10];
	//int i=1;
	//cin>>su;
	/*switch(su){
		case 1 : p[++i]=new Student(); break;
		case 2 : p[++i]=new Teacher(); break;
	}*/
	Person* s1 = new Student();
	// Person��ŭ�� ��밡��
	s1->setData("ȫ�浿", 18, 2);
	//((Student*)s1)->setData("ȫ�浿", 18, 2);
	delete s1;

	return 0;
}