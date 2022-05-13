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
		cout << "이름:" << name <<endl;
		cout << "학번:" << hakbun << endl;
	}
};
class Student :public Person {
	string university;
	Student(string name, int hakbun, string university) : Person(name, hakbun) {
		university = university;
	}
	void PrintShow() {
		cout << "이름:" << name ;
		cout << "학번:" << hakbun ;
		cout << "학교:" << university;
	}
};

int main() {
	Student st1("홍길동", 2018, "한국대학교");
	st1.PrintShow();

	return 0;
}