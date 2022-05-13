//학번, 이름, 국어, 영어, 수학
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
	cout << "입력하시오." << endl;
	cout << "학번 입력 :" << endl;
	cin >> num;
	cout << "이름 입력 :" << endl;
	cin >> name;
	while (true) {
		cout << "국어 입력 :" << endl;
		cin >> gug;
		if (gug >= 0 && gug <= 100)break;

		
			cout << "다시입력 :" << endl;
			cin >> gug;
		
	}
	while (true) {
		cout << "수학 입력 :" << endl;
		cin >> math;
		if (gug >= 0 && gug <= 100)break;
	
			cout << "다시입력 :" << endl;
			cin >> math;
		
	}
	while (true) {
		cout << "영어 입력 :" << endl;
		cin >> eng;
		if (eng >= 0 && eng <= 100)break;
			cout << "다시입력 :" << endl;
			cin >> eng;	
	}
	
	sum = gug + math + eng;
	avg = sum / 3;
	cout << "학번 :" << num << "\t" << "학번 :" << name << "\t" << "국어 :" << gug << "\t" << "수학 :" << math << "\t" << "영어 :" << eng << "\t" << endl;
	cout << "총점 :" << sum << endl;
	printf("%.2f",avg);
	//cout << "평균 :" << avg << endl;

}