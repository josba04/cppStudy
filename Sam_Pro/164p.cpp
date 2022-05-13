#include <iostream>
#include <string>
using namespace std;

class Animal {
	string name;
	int weight;
public:
	Animal() { cout << "Animal 생성자()" << endl; }
	Animal(string name, int w) {
		cout << "Animal 생성자()-매개변수" << endl;
		this->name = name;
		weight = w;
	}
	~Animal() { cout << "Animal 소멸자()" << endl; }
	void print1() {
		// 접근제어자가 protected 일 경우에는 virtual만 쓰고 내용은 필요 없음
		// 또는 아들쪽에만 print가 있으면 됨
		cout << name << "의 몸무게는 " << weight << "kg 이고,";
	}
};
class Dog :public Animal {
	int height;
public:
	Dog() { cout << "Dog 생성자()" << endl; }
	Dog(string name, int w, int h) :Animal(name,w), height(h){
		// 아무것도 안써주면 아빠기본생성자 호출
		//하지만 :Animal(name,w) 이렇게 써줘서 매개변수 있는 아빠 생성자 호출
		// 아빠 매개변수 있는 생성자 갔다온 뒤에 height 값 넣어줌
		cout << "Dog 생성자()-매개변수" << endl;
		//height = h;
	}
	~Dog() {cout << "Dog 소멸자()" << endl;}
	void print() {
		//이름이 같을 경우 Animal::print();
		print1(); // 아빠의 print1 메소드를 갔다온 후 키부터 출력
		cout<<"키는 " << height << "cm 입니다." << endl;
	}
};

int main() {
	Dog dog("멍멍이", 4, 50);
	dog.print();
	return 0;
}