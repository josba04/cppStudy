#include<iostream>
using namespace std;

class Animal {
	
public:
	virtual ~Animal(){}

	virtual void SoundSpeak() = 0;
	virtual void EatDiets(const char* eat)const = 0;

};
class Dog : public Animal{
public:
	 void SoundSpeak() {
		cout << "���Ҹ� �۸�" << "    ";
	}
	 void EatDiets(const char* eat)const {
		 cout << eat << endl;
	 }
};
class Cat :public Animal {
public:
	 void SoundSpeak() { cout << "����� �߿�" << "   "; }
	 void EatDiets(const char* eat)const {
		cout << eat << endl;
	}
};
int main(void) {
	Animal* ani = new Dog();
	ani->EatDiets("���");


	Dog dog;
	dog.SoundSpeak();
	dog.EatDiets("�����");
	
	Cat cat;
	cat.SoundSpeak();
	cat.EatDiets("����� ���");
	cout << sizeof(dog) << endl;
	cout << sizeof(cat) << endl;
	cout << sizeof(Animal) << endl;
	return 0;
}
