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
		cout << "�̸� : " << name << endl;
		cout << "�й� : " << hakbun << endl;
	}
};
class Student : public Person {
	string university;
	Student(string name, int hakbun, string school) :Person(na,hak)  {
		this->university = school;
	}
	void PrintShow() {
		cout << "�̸� : " << name << endl;
		cout << "�й� : " << hakbun << endl;

	}
};

int main() {
	Student st2("ȫ�浿", 2018, "�б����б�");
	st1.PrintShow();

	return 0;
}