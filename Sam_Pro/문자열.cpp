#include <iostream>
using namespace std;

int main() {
	const char* pMessage = "Welcome to Korea";

	cout << *pMessage << endl;
	cout << *(pMessage + 1) << endl;
	cout << *(pMessage + 2) << endl;
	cout << *(pMessage + 3) << endl;
	cout << *(pMessage + 4) << endl;
	cout << *(pMessage + 5) << endl;
	cout << *(pMessage + 6) << endl;
	cout << *(pMessage + 7) << endl;
	cout << *(pMessage + 8) << endl;
	cout << *(pMessage + 9) << endl;
	cout << *(pMessage + 10) << endl;
	cout << *(pMessage + 11) << endl;
	cout << *(pMessage + 12) << endl;
	cout << *(pMessage + 13) << endl;
	cout << *(pMessage + 14) << endl;
	cout << *(pMessage + 15) << endl;

	int i = 0;
	for (i = 0; *(pMessage + i) != NULL; i++)
		
		cout << *(pMessage + i) << endl;
	cout << i << endl;
	cout << pMessage+0 << endl;
	for (i = 0; *(pMessage + i) != NULL; i++)
		cout << pMessage + i << endl;
	
	/*for (int i = 0; i < 16; i++)
		cout << (char)*(pMessage + i) << endl;
			*/
}