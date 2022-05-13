#include<iostream>
using namespace std;

void func1(int i, int j){cout << i + j << endl;}

int main() {
	int a = 3, b = 4;
	func1(a + b, b);
}