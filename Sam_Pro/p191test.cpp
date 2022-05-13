#include<iostream>
using namespace std;

class Shape {
	int x;
	int y;
public:
	Shape() { x = 0; y = 0; }
	Shape(int x){
		this->x = x;
	}
	Shape(int x, int y) {
		this->x = x;
		this->y = y;
	}
	virtual void drawCalc() {
		cout << "��ǥ(" << getX() << ", " << getY() << ")�� ";
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
};

class Rectangle : public Shape{
	int width;
	int height;
public:
	Rectangle(int x, int y, int w, int h) : Shape(x, y) {
		this->width = w;
		this->height = h;

	}

	void drawCalc() {
		Shape::drawCalc;
		cout << "�簢���� ������ " << width * height << endl;
	}

};
class Triangle : public Shape {
	int width;
	int height;
public:
	Triangle(int x, int y, int w, int h): Shape(x, y) {
		this->width = w;
		this->height = h;
	}
	void drawCalc() {
		Shape::drawCalc;
		cout << "�ﰢ���� ������ " << (width * height) /2 << endl;
	}
	~Triangle() {
		cout << "Triangle �Ҹ���" << endl;
	}

};

class Circle : public Shape {
	double radius;
	static const double PI;
public:
	Circle(int x, int y, int radius) : Shape(x, y) {
		this->radius = radius;
	}
	void drawCalc() {
		Shape::drawCalc;
		cout << "������ ������ " <<  radius * radius * 3.14 << endl;
	}
	~Circle() {
		cout << "Circle �Ҹ���" << endl;
	}
};

int main() {
	Shape *ps1 = new Rectangle(10, 20, 34, 56);
	ps1->drawCalc();
	Shape *ps2 = new Triangle(30, 40, 34, 56);
	ps2->drawCalc();
	Shape *ps3 = new Circle(50, 60, 8);
	ps3->drawCalc();
	Shape k(1, 2);

	delete ps1;
	delete ps2;
	delete ps3;
}