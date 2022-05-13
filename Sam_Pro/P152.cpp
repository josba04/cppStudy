#include<iostream>
using namespace std;
class Circle {
private:
	int radius;
public:
	Circle(int n) { radius = n; }
	Circle(Circle& c);
};
Circle::Circle(Circle& c) {
	this->radius = c.radius;
}
int main() {
	Circle src(30);
	Circle dest(src);
}