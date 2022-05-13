#include <iostream>
using namespace std;

int add(int x, int y) {
	return (x + y);
}

int substract(int x, int y) {
	return (x - y);
}

int mult(int x, int y) {
	return (x * y);
}

int main() {
	int a, b;
	cout << "수 입력 :";
	cin >> a;
	cout << "수 입력 : ";
	cin >> b;
	int op;
	cout << "1. 덧셈, 2. 뺄셈, 3.곱셈 : ";
	cin >> op;

	//동적 binding의 예시

	int (*funcptr)(int, int) = nullptr;	//동일한 형태의 함수를 호출할 때 사용한다. 파라미터의 갯수가 같아야 사용할 수 있다.
	switch (op) {
	case 1: funcptr = add; break;
	case 2: funcptr = substract; break;
	case 3: funcptr = mult; break;
	}
	
	cout << funcptr(a, b) << endl;

	//정적 binding의 예시
	/*int result = 0;
	switch (op) {
	case 1: result = add(a, b); break;
	case 2: result = substract(a, b); break;
	case 3: result = mult(a, b); break;
	}

	cout << result << endl;*/
}