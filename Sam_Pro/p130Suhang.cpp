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
		cout << "입금 되는 금액은 " << amount << "입니다." << endl;
		balance = balance + amount;
	}
};