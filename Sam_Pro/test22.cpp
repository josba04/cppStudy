#include <iostream>
using namespace std;

int main() {
	char* sce = nullptr; 
	char dest[] = "same";
	
	//cout << sce <<endl;
	cout << dest << endl;

	sce = dest;
	cout << sce << endl;
	cout << dest << endl;

	*sce = 'g';
	cout << sce << endl;
	cout << dest << endl;

	*(sce + 2) = 'z';
	cout << sce << endl;
	cout << dest << endl;

	cout << *(sce + 0) << endl;
	cout << *(sce + 1) << endl;
	cout << *(sce + 2) << endl;
	cout << *(sce + 3) << endl;
	
	for (int i = 0; i < sizeof(dest); i++) {
		cout << sce + i << endl;
	}
}