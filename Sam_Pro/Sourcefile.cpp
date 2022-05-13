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

	

	ifstream infile("data.txt");

	for (int i = 0; i < 10; i++) {
		infile >> szName;

		outfile._Seekbeg(0, ios::beg);
	}

	outfile.close();
}