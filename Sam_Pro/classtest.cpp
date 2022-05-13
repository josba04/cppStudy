#include<iostream>
using namespace std;

/*int& increment(int& val) {
	val++;
	return val;
}

int main() {
	int n = 10;
	int& ref = increment(n);

	cout << "n :" << n << endl;
	cout << "ref: " << ref << endl;
	return 0;
	
}*/

int& function(void) {
	int val = 10;
	return val;
}
int main(void) {
	int& ref = function();
	cout << ref << endl;
	return 0;
}