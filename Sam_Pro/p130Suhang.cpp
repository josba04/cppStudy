#include<iostream>
using namespace std;



class CBank {
private:
	string name;
	string account;
	int balance;
public:
	CBank(string name, string account, int balance) {
		this->name = name;
		this->account = account;
		this->balance = balance;
	}
	void Print(int amount) {
		cout << "�Ա� �Ǵ� �ݾ��� " << amount << "�Դϴ�." << endl;
		balance = balance + amount;
	}
};