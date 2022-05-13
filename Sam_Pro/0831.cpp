#include <iostream>
using namespace std;

class Person {
private:
	// 아들쪽으로 상속은 되지만 아들쪽에서 쓰지 못하기 때문에 메소드를 통해 사용
	// 메모리는 확보한다.
	string name;
	int age;
public:
	void test(string n, int a) {
		name = n;
		age = a;
	}
	virtual void setData(string n, int a, int g) {
		cout << "Person" << endl;
		// virtual을 만나서 Student setData로 감
	}
	virtual ~Person() {
		cout << "Person 소멸" << endl;
	}
};

class Student :public Person {
	int grade;
public:
	void setData(string n, int a, int g) {
		cout << "Student" << endl;
		test(n, a);
		// 아빠(Person)이 private 일때
		grade = g;
	}
	~Student() {
		cout << "Student 소멸" << endl;
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
	// Person만큼만 사용가능
	s1->setData("홍길동", 18, 2);
	//((Student*)s1)->setData("홍길동", 18, 2);
	delete s1;

	return 0;
}