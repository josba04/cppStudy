#include <iostream>
using namespace std;

int main() {
	char Q;
	int num;
	cout << "���ڸ� �Է��Ͻÿ�." << endl;
	cin >> num;

	cout << "���ڸ� �Է��Ͻÿ�." << endl;
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