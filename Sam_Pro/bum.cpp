#include <iostream>
using namespace std;

int main() {
	//char형 범위 구하기 - 1바이트
	char cMaxVal = 0x7F;
	unsigned char ucMaxVal = 0x7FF;
	cout << "char 형 범위(1바이트) :" << (int)(char)(cMaxVal + 1) << "~" << (int)cMaxVal << endl;
	cout<<"unsigned char형 범위(1바이트) :"<< (int)(char)(ucMaxVal + 1) << "~" << (int)ucMaxVal << endl;

	//short int 형 범위 구하기 - 2바이트
	short sMaxVal = 0x7FFF;
	unsigned short usMaxVal = 0x7FF;
	cout << "short 형 범위(2바이트) :" << (short)(cMaxVal + 1) << "~" << (short)sMaxVal << endl;
	cout << "unsigned short형 범위(2바이트) :" << (short)(usMaxVal + 1) << "~" << (short)usMaxVal << endl;

	//int 형 범위 구하기 - 4바이트
	int  iMaxVal = 0x7FFFFFFF;
	unsigned int uiMaxVal = 0x7FFFFFFFF;
	cout << "int 형 범위(4바이트) :" << (int)(iMaxVal + 1) << "~" << (int)iMaxVal << endl;
	cout << "unsigned int형 범위(4바이트) :" << (int)(uiMaxVal + 1) << "~" << (int)uiMaxVal << endl;
	
	//long 형 범위 구하기 - 4바이트
	int  lMaxVal = 0x7FFFFFFF;
	unsigned int ulMaxVal = 0x7FFFFFFFF;
	cout << "long 형 범위(4바이트) :" << (long)(lMaxVal + 1) << "~" << (long)lMaxVal << endl;
	cout << "unsigned long형 범위(4바이트) :" << (long)(ulMaxVal + 1) << "~" << (long)ulMaxVal << endl;

	return 0;
}