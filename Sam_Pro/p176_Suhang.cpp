#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class Person {
public:
	string name;
	int hakbun;
	Person(string na, int hak) { name = na; hakbun = hak; }
	void PrintShow() {
		cout << "�̸�:" << name <<endl;
		cout << "�й�:" << hakbun << endl;
	}
};
class Student :public Person {
	string university;
	Student(string name, int hakbun, string university) : Person(name, hakbun) {
		university = university;
	}
	void PrintShow() {
		cout << "�̸�:" << name ;
		cout << "�й�:" << hakbun ;
		cout << "�б�:" << university;
	}
};

int main() {
	Student st1("ȫ�浿", 2018, "�ѱ����б�");
	st1.PrintShow();

	return 0;
}