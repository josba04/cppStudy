#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Camera {
public:
	Camera() { cout << "Camera ������" << endl; }
	virtual ~Camera() { cout << "Camera �Ҹ���" << endl; }
	void Shutter() { cout << "������ ���." << endl; }
	void showInfo() { cout << "ī�޶� ��ȣ : " << endl; }
};

class Phone {
	char p_no[12];
public:
	Phone() {
		p_no[0] = 0;
		cout << "Phone ������" << endl;
	}
	virtual ~Phone() { cout << "Phone �Ҹ���" << endl; }
	void setNumber(const char* pno) { strcpy(p_no, pno); }
	char* getNumber() { return p_no; }
	void call() { cout << p_no << "�� ��ȭ�� �Ǵ�." << endl; }
	void showInfo() { cout << "��ȭ��ȣ : " << p_no << endl; }
};

class MobilePhone : public Phone {
	Camera cam;
public:
	MobilePhone() { cout << "MobilePhone ������" << endl; }
	MobilePhone(const char* mpno) { cout << "��ȭ��ȣ : " << mpno << "MobilePhone ������" << endl; }

	~MobilePhone() { cout << "MobilePhone �Ҹ���" << endl; }
	void  Shutter() { cam.Shutter(); }
};

int main() {
	MobilePhone mp("01012345678");
	mp.Shutter();
	mp.setNumber("010111111111");
	cout << mp.getNumber() << endl;
	mp.call();
	//mp.showInfo();

	Phone* pmp = new MobilePhone;
	//pmp->Shutter();
	pmp->setNumber("010111111111");
	cout << pmp->getNumber() << endl;
	pmp->call();
	pmp->showInfo();//Phone
	delete pmp;
}