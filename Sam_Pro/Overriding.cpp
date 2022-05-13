#include <iostream>
class Person {
public:
	virtual void PrintMethod() {
		std::cout << "Person's Method" << std::endl;
	}
};
class Student :public Person {
public:
	void PrintMethod() {
		Person::PrintMethod();
		std::cout << "Child Method" << std::endl;
	}
};
int main() {
	//정적
	Student student;
	student.PrintMethod();

	Person p;
	p.PrintMethod();

	Person* p1 = new Student();
	p1->PrintMethod();
	//아들의 메소드를 부르고 싶을 때 방법1
	//((Student *)p1)->PrintMethod(); 
	delete p1;  // Person만 소멸됨 Student 소멸 안됨
	return 0;
}