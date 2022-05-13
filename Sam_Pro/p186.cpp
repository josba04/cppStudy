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
		cout << "개소리 멍멍" << "    ";
	}
	 void EatDiets(const char* eat)const {
		 cout << eat << endl;
	 }
};
class Cat :public Animal {
public:
	 void SoundSpeak() { cout << "고양이 야옹" << "   "; }
	 void EatDiets(const char* eat)const {
		cout << eat << endl;
	}
};
int main(void) {
	Animal* ani = new Dog();
	ani->EatDiets("사료");


	Dog dog;
	dog.SoundSpeak();
	dog.EatDiets("개사료");
	
	Cat cat;
	cat.SoundSpeak();
	cat.EatDiets("고양이 사료");
	cout << sizeof(dog) << endl;
	cout << sizeof(cat) << endl;
	cout << sizeof(Animal) << endl;
	return 0;
}
