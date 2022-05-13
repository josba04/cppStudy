#include <iostream>
using namespace std;

int main()
{
	int nVale = 4;
	int& refValue = nVale;
	cout << "Before change : " << nVale << " , " << refValue << endl;
	nVale++;
	cout << "Before change : " << nVale << " , " << refValue << endl;
	refValue++;
	cout << "Before change : " << nVale << " , " << refValue << endl;

}