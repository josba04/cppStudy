#include<iostream>
using namespace std;


template <typename Q>
void swapTest(Q& x, Q& y);

template <typename Q>
void swapt(Q arr1, Q arr2, int length);

template <typename Q>
void Show(Q arr[]);

int main() {
	int x = 10, y = 20;
	double x1 = 10.23, y1 = 20.56;
	cout << "x=" << x << ",y =" << y << endl;
	swapTest<int>(x, y);
	cout << "x=" << x << ",y=" << y << endl;
	cout << "x1=" << x1 << ",y1 =" << y1 << endl;
	swapTest<double>(x1, y1);
	cout << "x1=" << x1 << ",y1 =" << y1 << endl;

	const int dim = 8;
	int arr1[dim] = { 0,7,0,4,1,9,9,8 };
	int arr2[dim] = { 0,6,2,0,2,0,0,3 };

	Show(arr1);
	Show(arr2);

	swapt(arr1, arr2, dim);

	Show(arr1);
	Show(arr2);

	const int dim1 = 5;
	double arr3[dim1] = { 0.3,7.2,0.5,4.0,1.0 };
	double arr4[dim1] = { 0.9,6.3,2.1,0.3,2.0 };


	Show(arr3);
	Show(arr4);

	swapt(arr1, arr2, dim);

	Show(arr3);
	Show(arr4);

	return 0;
}
template <typename Q>
void swapTest(Q& x, Q& y) {
	Q temp;
	temp = x;
	x = y;
	y = temp;
}
template <typename Q>
void swapt(Q arr1[], Q arr2[], int length) {
	int temp;
	for (int i = 0; i < length; i++) {
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}
template <typename Q>
void Show(Q arr[]) {
	for (int i = 0; i < sizeof(arr); i++) {
		cout << arr[i];
	}
}
