#include <iostream>
using namespace std;

int main() {
	int nArray[] = { 10,2,3,4,5,6,7,8,9 };
	int* pArray = nArray;
	int count = sizeof(nArray) / sizeof(int);

	for (int i = 0; i < count; i++)
		cout << i << ": �ּ� : " << (pArray + i) << ", �� : " << *(pArray + i) << endl;

	for (int i = 0; i < count; i++)
		cout << i << ": �ּ� : " << pArray + i << ", �� : " << *pArray + i << endl;

	cout << sizeof(nArray) << endl;
}