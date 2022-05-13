
#include <iostream>
using namespace std;

int main() {
	char Q;
	char i;
	cout << "¾ËÆÄºª ÀÔ·Â" << endl;
	cin >> Q;
	
	for (i = 'A'; i <= 'Z'; i++) {
		if(Q == i)
			cout << Q << " ==> " << (i - 64)  << endl;
		
	}

	for (i = 'a'; i <= 'z'; i++) {
		if (Q == i)
			cout << Q << " ==> " << (i - 96) << endl;

	}
	
	return 0;
}