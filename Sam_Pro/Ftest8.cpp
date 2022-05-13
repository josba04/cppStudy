#include<iostream>
using namespace std;

int sum(int a, int b = 3) { return a + b; }

int main() {
	int num = sum(2);
	cout << num << endl;
}