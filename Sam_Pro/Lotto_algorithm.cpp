#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//1~46 6°³
vector<int> Lotto(int shell, int range);
void show(const int& v);
int main() {
	srand(time(NULL));
	vector<int> v;
	v = Lotto(6, 46);
	for_each(v.begin(), v.end(), show);
	return 0;
}

vector<int> Lotto(int shell, int range) {

	vector<int> v1;

	for (int i = 1; i < range+1; i++) {
		v1.push_back(i);
	}

	random_shuffle(v1.begin(), v1.end());

	v1.resize(shell);
	

	return v1;
}

void show(const int& v) {
	cout << v << " ";
}