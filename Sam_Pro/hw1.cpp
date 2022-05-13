#include <iostream>
using namespace std;

int main() {
	char a;
	int count = 0;
	

	while (true) {
		cout << "문자를 입력하시오." << endl;
		cin >> a;
		if (a == 'a') {
			count += 1;
			cout << count << endl;
		}
		else {
			cout << "입력이 옳지 않습니다." << endl;break;
		}
	}
	/*if (a) {
		for (;;) {
			count += 1;
			cout << count << endl;
		}
	}
	else {
		cout << "끝" << endl;
	}
	cout << count << endl;
	*/
}