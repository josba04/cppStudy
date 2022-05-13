#include<iostream>
#include<fstream>
using namespace std;

int main() {
	ifstream input("input.txt");
	if (input.fail()) {
		cout << "파일을 여는데 실패했습니다." << endl;
		return 1;
	}
	input.seekg(0, ios::end);
	cout << (char)input.get() << endl;
	input.clear();
	input.seekg(-5, ios::cur);
	cout << (char)input.get() << endl;
	input.close();
	return 0;
}

//c++의 스트림은 eofbit라는 플래그를 가지고 있는데, 입출력 함수를 도달하면 끝으로 가서 다시 앞으로 커서를 이동시키기 위해서 clear함수를 사용해야 한다.