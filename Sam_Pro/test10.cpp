#include <iostream>
using namespace std;
/*int mult(int a, int b) {
	return a * b;
}
*/
#define mult(a, b) ((a)*(b))
int main() {
	cout << mult(2+4, 3+5) << endl;
}