#include <iostream>
using namespace std;

const int MAX_COUNT = 100;

#define MAX(a,b) a > b ? a : b

int main() {
	cout << MAX_COUNT << endl;
	int nMax = MAX(100, 200);
	cout << nMax << endl;

	return 0;
}