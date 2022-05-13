//2205 김지호
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int recude(long ar[], int n);
void show(const long ar[], int n);
int main() {
	long arr[10];
	
	int data;
	int count = 0;
	cout << "데이터 입력 : ";
	for (int i = 0; i < 10; i++) {
	cin >> data;
	arr[i] = data;
	count++;
	}
	cout << "데이터 출력 : ";
	show(arr, count);

	
	
	cout << "데이터 정렬 후 출력 : ";
	cout << recude(arr, count);
	
	cout << endl;
	cout << "중복 제거 후 출력 : ";
	for (int i = 0; i < count; i++) {
		cout << arr[i] << "  ";
	}
}
int recude(long ar[], int n) {
	vector<int> vec;
	//vec.assign(ar, ar + 6);
	sort(vec.begin(), vec.end());
	for (int i = 0; i < n; i++) {
		vec.push_back(ar[i]);
	}
	vec.erase(unique(vec.begin(), vec.end()), vec.end());


	//copy(vec.begin(), vec.end(), ar);
	for (int i = 0; i < sizeof(ar); i++) {
		return ar[i];
	}
	
}
void show(const long ar[], int n) {

	for (int i = 0; i < 10; i++) {
		cout << ar[i] << " ";
	}
	cout << endl;



}