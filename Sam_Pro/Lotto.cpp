#include <iostream>
#include <vector>
using namespace std;
//1~46 6°³

int main() {
	srand((unsigned)time(0));
	int cnt = 0;
	for (int k = 0; k <= 100; k++) {
		vector<int> v;

		for (int j = 0; j < 6; j++) {
			int num = rand() % 46 + 1;
			for (auto& e : v) {
				if (e == num) {
					cnt = 1;
					break;
				}
			}
			if (cnt == 1) {
				j--;
			}
			else v.push_back(num);
			cnt = 0;
		}
		for (auto& ptr1 : v) {
			cout << ptr1 << " ";
		}
		cout << endl;
	}

	return 0;
}