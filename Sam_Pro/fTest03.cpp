#include <iostream>
#include <cstdlib>

void print(int a, int b) {
	std::cout << a + b << std::endl;
}

int main() {
	char std[] = "100";
	int a = 200;
	int b = atoi(std);
	print(a, b);
}