//암스트롱수 구하기
#include<iostream>
using namespace std;

int main() {
	for (int i = 100; i < 1000; i++){
		int a = i / 100 ;
		int b = i % 100 / 10;
		int c = i % 10;
		a = a * a * a;
		b = b * b * b;
		c = c * c * c;
		if (a + b + c == i){
			cout << i << endl;
		}

	 }
	return 0;
	
}