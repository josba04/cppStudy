#include<iostream>
#include<string>
using namespace std;

int main() {
	system("mode con:cols=100 lines=10"); // consol창 사이즈 조정
	//cols = 가로 lines 세로                 

	auto campus = [](string x, string y){
	cout << x + y << endl;
	};
	campus("미림", "마이스터고");
	campus("한국", "대학교");
	


	return 0;
}