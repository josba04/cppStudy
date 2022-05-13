#include<iostream>
using namespace std;

int main() {
	/*char a[] = "Mirim";
	const char* msg = "Hello";
	char* const pMessage = a;
	//pMessage = msg;
	*pMessage = 'A';
	cout << pMessage << endl;

	const char* pM = a;
	//*pM = 'A';
	pM = msg;
	cout << pM << endl;
	*/
	/*int a[] = { 1,2,3,4,5 };
	int* b = nullptr;
	int c = 10;
	b = &c;
	b = &a[0];
	b = &*a;//=a
	for (int i = 0; i < 5; i++) {
		cout << a[i] << *(b + i) << endl;
	}
	for (int i = 0; i < 5; i++) {
		cout << a[i] << *b << endl;
		b++;
	}
	for (int i = 0; i < 5; i++) {
		cout << b[i] << " " << *(a + i) << endl;
	}
}*/

	int nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* pArray;
	pArray = nArray;
	cout << pArray << endl;

	//nArray = pArray;
	pArray = nArray + 1;
	cout << pArray << endl;

}