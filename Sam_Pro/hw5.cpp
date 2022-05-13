//10진수를 2진수로 바꿔주는 프로그램을 작성하시오.
#include<iostream>
using namespace std;
int arr[5];
int main() {
	int i = 0;
	int Q;
	cout << "수를 입력하세요." << endl; 
	cin >> Q;

	while (i < 10) {
		arr[i] = Q % 2;
		Q = Q / 2;
		i++;

		if (Q == 0) {
			break;
		}	
	}
	for (i = 5; i >= 0; i--) {
		cout << arr[i];
	}
}