#include <iostream>
using namespace std;

#define multiple_define(A) ((A)*(A))
int multiple_inline(int A);

int main()
{
	int a = 3;

	cout << "inline ��ũ�� ���� " << multiple_inline(++a) << endl;
	a = 3;
	cout << "define �Լ��� ���� " << multiple_define(++a) << endl;

	return 0;
}

inline int multiple_inline(int A)
{
	return A * A;
}