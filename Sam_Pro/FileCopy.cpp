#include<iostream>
#include<fstream>
using namespace std;

void main() {
	ifstream src("FileCopy.cpp");
	ofstream tar("target.txt");

	char szBuf[1024];
	int nRead;
	for (;;) {
		src.read(szBuf, 1024);
		nRead = src.gcount();
		if (nRead == 0)
			break;
		tar.write(szBuf, nRead);
	}

	src.close();
	tar.close();
}