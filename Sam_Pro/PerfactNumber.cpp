//������ ���ϱ�
#include <iostream>
using namespace std;

int main() {

    int sum;

    for (int i = 1; i <= 1000; i++) {
        sum = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }

        if (i == sum)
            cout << "�������� : " << i << endl;
    }
}
