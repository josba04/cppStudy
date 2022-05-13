#include<iostream>
#include<string>
using namespace std;

template <class Q1, class Q2>
void printShow(Q1 a, Q2 b) {
	cout << "Q1 : " << a;
	cout << " ,Q2 : " << b << endl;
};

int main(void) {
	string s1 = "Computer", s2 = "science";
	int num1 = 100, num2 = 200;
	double d1 = 12.34, d2 = 56.78;

	printShow(s1, s2);
	printShow(s1, num1);
	printShow(num1, num2);
	printShow(num1, d1);
	printShow(d1, d2);
	printShow(d1, s1);

	

	
	return 0;
}