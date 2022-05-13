#include <iostream>
using namespace std;

int main() {
	int* ptr;
	int arr[4] = { 10, 20, 30, 40 };
	ptr = arr;

	for (int i = 0; i < 4; i++)
		cout << *ptr + i << " ";
	cout << endl;

	for (int i = 0; i < 4; i++)
		cout << arr[i] << " ";
	cout << endl;

	for (int i = 0; i < 4; i++)
		cout << *(ptr + i) << " ";
	cout << endl;

	for (int i = 0; i < 4; i++)
		cout << *(arr + i) << " ";
	cout << endl;
	
	for (int i = 0; i < 4; i++) {
		cout << *ptr << " ";
		ptr++;
	}
	cout << endl;
	for (int i = 0; i < 4; i++) {
		cout << ptr << endl;
		ptr++;
	}
	for (int i = 0; i < 4; i++) {
		cout << *arr << " ";
		//arr++;+
	}
	cout << endl;

	for (int i = 0; i < 4; i++) 
		cout << *ptr + i << " ";

	return 0;
}