#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ofstream fout("address.txt");
	if (!fout) { cerr << "���� ���� ����" << endl; exit(1); }
		char name[20], addr[50];
		cin >> name >> addr;
		fout << name << "  " << addr << endl;
		fout.close();
	
}