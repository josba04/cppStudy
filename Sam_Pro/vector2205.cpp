//2205 ����ȣ
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
	cout << "������ �Է� : ";
	for (int i = 0; i < 10; i++) {
	cin >> data;
	arr[i] = data;
	count++;
	}
	cout << "������ ��� : ";
	show(arr, count);

	
	
	cout << "������ ���� �� ��� : ";
	cout << recude(arr, count);
	
	cout << endl;
	cout << "�ߺ� ���� �� ��� : ";
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