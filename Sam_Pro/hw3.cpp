#include <iostream>
using namespace std;

int main() {
	int count = 0;
	int n;
	cout << "수를 입력하시오." << endl;
	cin >> n;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			cout << i << endl;
			/*count += (n % 1);
			cout << count << endl;
			*/
		}
	}
}