#include <iostream>
using namespace std;

//int sum(int a, int b = 0, int c = 0) { return a + b + c; }
//int sum(double a, double b) { return a + b; }
//
//int mian()
//{
//	cout << sum(1) << endl;
//	cout << sum(1, 2) << endl;
//	cout << sum(1, 2, 3) << endl;
//	cout << sum(1.1, 2.2) << endl;
//
//}


//int sum(int a, int b = 3) { return a + b; }
//int main(void)
//{
//	int num = sum(2);
//	cout << num << endl;
//}

int func(int a = 4) { return a; }
void func1(int i, int j) { cout << i + j << endl; }
int main()
{
	cout << func() << endl;
	int a = 3, b = 4;
	func1(a + b, b);
}

//int sum(int a, int b) {
//	int sum;
//	sum = a + b;
//	return b, a, sum;
//}
//
//int main()
//{
//	sum(3, 5);
//}