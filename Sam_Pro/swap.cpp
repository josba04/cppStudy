#include<iostream>
using namespace std;

void swap_v(int x, int y) {
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}
void swap_p(int* x, int* y) {
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
void swap_r(int& x, int& y) {
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}
int main() {
	int a = 3; 
	int b = 5;
	swap_v(a, b);
	cout << "a = " << a << " " <<"b = " << b << endl;
	swap_p(&a, &b);
	cout << "a = " << a << " " << "b = " << b << endl; swap_p(&a, &b);
	swap_v(a, b);
	cout << "a = " << a << " " << "b = " << b << endl;
}