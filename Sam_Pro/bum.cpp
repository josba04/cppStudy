#include <iostream>
using namespace std;

int main() {
	//char�� ���� ���ϱ� - 1����Ʈ
	char cMaxVal = 0x7F;
	unsigned char ucMaxVal = 0x7FF;
	cout << "char �� ����(1����Ʈ) :" << (int)(char)(cMaxVal + 1) << "~" << (int)cMaxVal << endl;
	cout<<"unsigned char�� ����(1����Ʈ) :"<< (int)(char)(ucMaxVal + 1) << "~" << (int)ucMaxVal << endl;

	//short int �� ���� ���ϱ� - 2����Ʈ
	short sMaxVal = 0x7FFF;
	unsigned short usMaxVal = 0x7FF;
	cout << "short �� ����(2����Ʈ) :" << (short)(cMaxVal + 1) << "~" << (short)sMaxVal << endl;
	cout << "unsigned short�� ����(2����Ʈ) :" << (short)(usMaxVal + 1) << "~" << (short)usMaxVal << endl;

	//int �� ���� ���ϱ� - 4����Ʈ
	int  iMaxVal = 0x7FFFFFFF;
	unsigned int uiMaxVal = 0x7FFFFFFFF;
	cout << "int �� ����(4����Ʈ) :" << (int)(iMaxVal + 1) << "~" << (int)iMaxVal << endl;
	cout << "unsigned int�� ����(4����Ʈ) :" << (int)(uiMaxVal + 1) << "~" << (int)uiMaxVal << endl;
	
	//long �� ���� ���ϱ� - 4����Ʈ
	int  lMaxVal = 0x7FFFFFFF;
	unsigned int ulMaxVal = 0x7FFFFFFFF;
	cout << "long �� ����(4����Ʈ) :" << (long)(lMaxVal + 1) << "~" << (long)lMaxVal << endl;
	cout << "unsigned long�� ����(4����Ʈ) :" << (long)(ulMaxVal + 1) << "~" << (long)ulMaxVal << endl;

	return 0;
}