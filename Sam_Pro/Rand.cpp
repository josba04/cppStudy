#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	char a[12] = "Minimum";
	char b[12] = "Mirim";
	
	cout << strcmp(a, b) << endl;
	
	cout << strcpy(a, b) << endl;

//#include <iostream>
//#include <time.h>
//using namespace std;
//
//int main()
//{
//	srand((unsigned)time);
//	int N = rand() % 10 + 1;
//	int num;
//
//}
	//srand((unsigned)time(0));
	//for (int i = 0; i < 5; i++) {
	//	cout << i + 1 << " : " << rand() << endl;
	//}
	//10~17
	//0~7 = rand()%8+10
}