//10������ 2������ �ٲ��ִ� ���α׷��� �ۼ��Ͻÿ�.
#include<iostream>
using namespace std;
int arr[5];
int main() {
	int i = 0;
	int Q;
	cout << "���� �Է��ϼ���." << endl; 
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