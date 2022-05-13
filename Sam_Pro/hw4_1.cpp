#include <iostream>
using namespace std;

int main() {
	char Q;
	int num;
	cout << "숫자를 입력하시오." << endl;
	cin >> num;

	cout << "문자를 입력하시오." << endl;
	cin >> Q;
	while (true) {
		if (Q == 'c') {
			for (int i = 1; i <= num; i++)
				cout << i << endl;
			break;
		}
		else cin >> Q;
		
	}
	return 0;
}