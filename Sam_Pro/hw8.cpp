#include <iostream>
using namespace std;

int main() {
	unsigned int A, B;
	int sum = 0;
	int cnt = 0;
	cout << "수 두개 입력(작은 수, 큰 수) : ";
	cin >> A;
	cin >> B;
	cout << "구할 배수 : " << A << endl;
	cout << "끝 값 : " << B << endl;
	cout << "0부터" << B << "까지에 있는 " << A << " 의 배수 :";
	for (int i = 0; i <= B; i++){
		if (i % A == 0) {
			cout << i << "  ";
			sum += i;
			cnt++;
		}
	}
	cout << endl;
	cout << "0부터" << B << "까지에 있는 " << A << " 의 배수의 갯수 : "<< cnt <<"개"<<endl;
	cout << "0부터" << B << "까지에 있는 " << A << " 의 배수의 합 : "<<sum << endl;
}