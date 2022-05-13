#include <iostream>
using namespace std;

void jungjuk() {
	static int a = 0;
	cout << "정적 변수 a는 " << a << endl;
	a++;
}

int main() {
	jungjuk();
	jungjuk();
	jungjuk();
}