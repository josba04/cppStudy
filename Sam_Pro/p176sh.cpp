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
		cout << "이름 : " << name << endl;
		cout << "학번 : " << hakbun << endl;
	}
};
class Student : public Person {
	string university;
	Student(string name, int hakbun, string school) :Person(na,hak)  {
		this->university = school;
	}
	void PrintShow() {
		cout << "이름 : " << name << endl;
		cout << "학번 : " << hakbun << endl;

	}
};

int main() {
	Student st2("홍길동", 2018, "학국대학교");
	st1.PrintShow();

	return 0;
}