#include <iostream>
using namespace std;

int main() {
	int sum = 1;
	for (int i = 2; i <= 20; i++) {
		cout << sum << " + "<< i << " = "<< sum << endl;
		sum = sum + i;
	}
	return 0;
}