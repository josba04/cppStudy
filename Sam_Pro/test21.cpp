#include <iostream>
using namespace std;

int main() {
	char str[15] = "HELLO WORLD"; int strlength = 0;
	for (int i = 0; str[i] != NULL; i++)
		strlength++;
	cout << "HELLOWORLD의 문자 길이는 " << strlength << endl;
}