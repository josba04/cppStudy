#include <iostream>
using namespace std;

class Horse {
public:
	Horse() {cout << "Horse 생성자" << endl;}
	virtual ~Horse() { cout << "Horse 소멸자" << endl; }
	void speak() {
		cout << "히히힝~" << endl;
	}
	void fly(){}
};

class Bird {
public:
	Bird() {cout << "Bird 생성자" << endl;}
	~Bird() { cout << "Bird 소멸자" << endl; }
	void speak() {
		cout << "짹짹~" << endl;
	}
	void fly() {
		cout << "날다" << endl;
	}
};

class Pegasus : public Horse { // is a: 상속, has a : 위임
	// public Bird, public Horse 이순서에 따라 생성자와 소멸자에 갔다오는 순서가 바뀐다.
	Bird b; //위임
public: // 메인에서 사용하려면 public이여야 함
	Pegasus() {
		cout << "Pegasus 생성자" << endl;
	}
	~Pegasus() {
		cout << "Pegasus 소멸자" << endl; 
	}
	/*void speak() {
		cout << "페가수스 히잉~" << endl;
	}*/
	void fly() {
		b.fly();
	}
};

int main() {
	/*Pegasus peg;
	peg.speak();
	//peg.speak(); 다중상속의 문제라 오류발생
	//Pegasus에 speak가 있다면 그 메소드를 사용
	peg.fly();*/
	// fly를 쓰기 위해서는 Bird는 위임이기 때문에 Pegasus에도 fly()이가 있어야 한다.

	Horse* peg = new Pegasus;
	peg->speak();
	peg->fly();
	//Horse* peg = new Pegasus; Horse타입은 speak까지만 쓸수 있기 때문에 fly()에서 오류
	//해결하기 위해서는 Horse에 fly()가 있으면 된다.
	delete peg;

}