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
	//����
	Student student;
	student.PrintMethod();

	Person p;
	p.PrintMethod();

	Person* p1 = new Student();
	p1->PrintMethod();
	//�Ƶ��� �޼ҵ带 �θ��� ���� �� ���1
	//((Student *)p1)->PrintMethod(); 
	delete p1;  // Person�� �Ҹ�� Student �Ҹ� �ȵ�
	return 0;
}