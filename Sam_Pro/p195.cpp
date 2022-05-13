#include<iostream>
using namespace std;

template <typename Q>
Q Max(Q a, Q b) {
	if (a > b)return a;
	else return b;
}
const char* Max(const char* a, const char* b) {	//template을 사용하지 않은 함수원형
	if (strlen(a) > strlen(b)) return a;
	else return b;
}
int main(void) {
	cout << Max(100, 200) << " ";
	cout << Max('A', 'B') << " ";
	cout << Max(12.34, 56.78) << " ";
	cout << Max("Computer", "Science") << endl;

	return 0;
}