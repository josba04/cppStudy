#include <iostream>
using namespace std;

int main() {
	int a = 1, b = 1;
	const int* const ptr = &a;
	//const int* ptr = &a;

	*ptr = 2;
	a = 3;
	ptr = &b;

	
}