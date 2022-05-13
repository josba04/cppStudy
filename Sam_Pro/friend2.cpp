#include<iostream>
using namespace std;

class AAA {
private:
	int data;
	friend class BBB;
public:
	void Print() {
		cout << data << endl;
	}
};
class BBB {
public: 
	void SetData(AAA& aaa, int val) {
		aaa.data = val;
	}
};

int main() {
	AAA aaa;
	BBB bbb;
	bbb.SetData(aaa, 10);

	aaa.Print();
	return 0;
}