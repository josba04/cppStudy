#include<iostream>
using namespace std;

int main() {
	int num = rand() % 10 + 1;
	unsigned int A;
	cout << "시작합니다!" << endl;
	cout << "수를 예상하고 입력하세요. : ";
	for (int i = 0; i < 4; i++) {
		cin >> A;
		if (A > num) {
			cout << "DOWN" << endl;
		}
		else if (A < num) {
			cout << "UP" << endl;
		}
		else {
			cout << "!!!! 정답입니다 !!!!" << endl;
		}
	}
	cout << "틀렸습니다." << "정답은 " << num << "입니다." << endl;
}
		/*while(n != 0){
		cout << n % 10 << endl;				
		n = n / 10;
		}*/