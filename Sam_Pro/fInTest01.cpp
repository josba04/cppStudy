#include <iostream>
using namespace std;
#define func(x) ((x)*(x))  //(3+2) * (3+2) 
//#define func(x) (x*x)  //3+ 2*3 +2

inline int funcf(int x) {
	return x * x;
}
void print(int a); 

int main() {
	cout << func(3 + 2) << endl; //25(��ȣ �̿�)
	cout << funcf(3 + 2) << endl; //25
	int a = 5;
	cout << func(++a) << endl; //36  49  (++a) * (++a) 
	a = 5;
	cout << funcf(++a) << endl; //36

	print(5);
}

void print(int a) { 
	cout << a << endl;
}

//���� bool ���C++
//�� ���� bool ���
//#include <iostream>
//using namespace std;
//
//bool IsEvenNumber(int num);
//void main()
//{
//    bool check = false;
//    int num = 0;
//
//    cout << "�ƹ� ���� �Է��ϼ���." << endl;
//    cin >> num;
//
//    check = IsEvenNumber(num);
//
//    if (check)
//    {
//        cout << num << "��(��) ¦���Դϴ�." << endl;
//    }
//    else
//    {
//        cout << num << "��(��) Ȧ���Դϴ�." << endl;
//    }
//}
//
//bool IsEvenNumber(int num)
//{
//    return (num % 2) == 0;
//}