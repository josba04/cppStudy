#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
using namespace std;

void main() {
	int nNum;
	char szName[20];
	ofstream outfile("data.txt");

	for (int i = 0; i < 10; i++) {
		nNum = i + 1;
		sprintf(szName, "ÀÌ¸§_%d", nNum);
		outfile.write(szName, nNum);
	}

	outfile.close();

	ifstream infile("data.txt");

	for (int i = 0; i < 10; i++) {
		infile >> szName;

		cout << szName << endl;
	}

	infile.close();
}


