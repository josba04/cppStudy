#include <iostream>
using namespace std;

int func(int a = 4) { return a;}

int main() {
	cout << func() << endl;
}