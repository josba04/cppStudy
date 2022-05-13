#include <iostream>
using namespace std;

int main(){
	int a = 10, b = 20;
	int &ra = a;
	ra = b;
	cout << a<<endl;
	cout << b<<endl;
}