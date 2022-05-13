#include<iostream>
using namespace std;
class JumsuOne {
public:
	void FuncOneShow() {
		cout << "JumsuOne" << endl;	}
};
class RankTwo {
protected:
	int a;
public:
	void FuncTwoShow() { cout << "RankTwo" << endl; }
};
class SungjukDerived : private JumsuOne, protected RankTwo {
public:
	void SungjukFuncShow()
	{
		FuncOneShow();
		FuncTwoShow();
		cout << a << endl;
	}
	   
};
int main(void) {
	SungjukDerived sdr;
	sdr.SungjukFuncShow();
	sdr.FuncOneShow();
	sdr.FuncTwoShow();

	return 0;
}