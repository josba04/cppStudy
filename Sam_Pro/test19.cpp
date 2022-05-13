#include <iostream>
using namespace std;

int main() {
	short arr[4] = { 1, 2, 3, 4 };
	cout << arr << endl;

	for (int i = 1; i < 4; i++) 
		cout << &arr[i] << " ";
	cout << endl;

	for (int i = 0; i < 4; i++)
		cout << arr[i] << " ";
	cout << endl;

		return 0;
	
}