#include <iostream>
using namespace std;

int main() {
	/*
	int count = 0;
	int *addr = nullptr;//c++
	addr = &count;
	count = 10;
	cout << count << endl;
	cout << *addr << endl;
	*addr = 20;
	cout << count << endl;
	cout << *addr << endl;
	*/
	void* pValue = 0;
	//캐스팅을 위해서 void로 잡는다.
	int val = 100;
	pValue = &val;
	cout << val << endl;
	cout << *(int*)pValue << endl;
	//*pValue = 200;
	//오류 발행
	//캐스팅 해야함.
	//(타입*) 이것이 캐스팅이다.
	*(int*)pValue = 200;
	int value = 300;
	pValue = &value;
	cout << value << endl;
	cout << *(int*)pValue << endl;

	return 0;
}