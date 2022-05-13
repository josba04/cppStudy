#include<iostream>
#include<fstream>
using namespace std;
void reverseReadFile(ifstream& fin) {
	fin.seekg(0, ios::end);
	int length = fin.tellg();

	while (length > 0) {
		//fin.clear();
		fin.seekg(--length, ios::beg);
		cout << (char)fin.get();
	}
}

void main() {
	ifstream input("input.txt");
	reverseReadFile(input);
}