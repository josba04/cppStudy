#include <iostream>
using namespace std;

void swap_v(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
void swap_p(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void swap_r(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int main() {
	int a = 3;
	int b = 5;

	swap_v(a, b);
	cout << a << " " << b << endl;

	swap_p(&a, &b);
	cout << a << " " << b << endl;
	
	swap_r(a, b);
	cout << a << " " << b << endl;
}