#include<iostream>
using namespace std;

template <typename T>
T GreatValue(T a, T b) {
	if (a > b) return a;
	else return b;

}
template <> //명시적 특수화
char* GreatValue(char* a, char* b) {
	cout << "Max(char* a, char* b)" << endl;
	return strlen(a) > strlen(b) ? a : b;
}
template<> //명시적 특수화
const char* GreatValue(const char* a, const char* b) {
	cout << "Max(const char* a, const char* b)" << endl;
	return strcmp(a, b) > 0 ? a : b;

}
int main(void) {
	cout << GreatValue(100, 200) << " ";
	cout << GreatValue('A', 'B') << " ";
	cout << GreatValue(12.34, 56.78) << " " << endl;
	cout << GreatValue("Computer","Science") << endl;
	char str1[] = "Meister";
	char str2[] = "Mirim";
	cout << GreatValue(str1, str2) << endl;
	
	return 0;

}
/*
우선순위 1)1. 템플릿이 아닌 함수원형
우선순위 3)2. 템플릿
우선순위 2)3. 명시적 특수화
*/