//�й�, �̸�, ����, ����, ����
#include <iostream>
using namespace std;

int main() {

	char num[5];
	char name[10];
	int gug;
	int math;
	int eng;
	double sum = 0;
	double avg = 0;
	cout << "�Է��Ͻÿ�." << endl;
	cout << "�й� �Է� :" << endl;
	cin >> num;
	cout << "�̸� �Է� :" << endl;
	cin >> name;
	while (true) {
		cout << "���� �Է� :" << endl;
		cin >> gug;
		if (gug >= 0 && gug <= 100)break;

		
			cout << "�ٽ��Է� :" << endl;
			cin >> gug;
		
	}
	while (true) {
		cout << "���� �Է� :" << endl;
		cin >> math;
		if (gug >= 0 && gug <= 100)break;
	
			cout << "�ٽ��Է� :" << endl;
			cin >> math;
		
	}
	while (true) {
		cout << "���� �Է� :" << endl;
		cin >> eng;
		if (eng >= 0 && eng <= 100)break;
			cout << "�ٽ��Է� :" << endl;
			cin >> eng;	
	}
	
	sum = gug + math + eng;
	avg = sum / 3;
	cout << "�й� :" << num << "\t" << "�й� :" << name << "\t" << "���� :" << gug << "\t" << "���� :" << math << "\t" << "���� :" << eng << "\t" << endl;
	cout << "���� :" << sum << endl;
	printf("%.2f",avg);
	//cout << "��� :" << avg << endl;

}