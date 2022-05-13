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
		cout << "Phone ������" << endl; }
	virtual ~Phone() { cout << "Phone �Ҹ���" << endl; }
	void setNumber(const char* pno) { strcpy(p_no, pno); }
	char* getNumber() { return p_no; }
	void call() { cout << p_no << "�� ��ȭ�� �Ǵ�." << endl; }
	void showInfo() { cout << "��ȭ��ȣ : " << p_no << endl; }
};

class MobilePhone : public Camera, public Phone{
public:
	MobilePhone() { cout << "MobilePhone ������" << endl; }
	MobilePhone(const char *mpno) { cout << "��ȭ��ȣ : "<<mpno<<"MobilePhone ������" << endl; }

	~MobilePhone() { cout << "MobilePhone �Ҹ���" << endl; }
	
};
class SmartPhone : public Phone {
	Camera cam;
public:
	SmartPhone() { cout << "SmartPhone ������" << endl; }
	SmartPhone(const char* mpno) { cout << "��ȭ��ȣ : " << mpno << "SmartPhone ������" << endl; }
	void Shutter() { cam.Shutter(); }
	~SmartPhone() { cout << "SmartPhone �Ҹ���" << endl; 	}
	

};
class MobileDevice{
	Camera cam;
	Phone pho;
public:
	MobileDevice() { cout << "MobileDevice ������" << endl; }
	MobileDevice(const char* mpno) { cout << "��ȭ��ȣ : " << mpno << "MobileDevice ������" << endl; }
	void Shutter() { cam.Shutter(); }
	void setNumber(const char* pno) { pho.setNumber(pno); }
	void call() { pho.call(); }
	char* getNumber() {return pho.getNumber(); }
	void showInfo() { pho.showInfo();  }
	~MobileDevice() { cout << "MobileDevice �Ҹ���" << endl; }


};

int main() {
	MobilePhone mp("01012345678");
	mp.Shutter();
	mp.setNumber("010111111111");
	cout << mp.getNumber() << endl;
	mp.call();
	//mp.showInfo();
	cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
	Camera* cmp = new MobilePhone;
	cmp->Shutter();
	//cmp->setNumber("010111111111");
	//cout << cmp->getNumber() << endl;
	//cmp->call();
	cmp->showInfo();//Camera
	delete cmp;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	Phone* pmp = new MobilePhone;
	//pmp->Shutter();
	pmp->setNumber("010111111111");
	cout << pmp->getNumber() << endl;
	pmp->call();
	pmp->showInfo();//Phone
	delete pmp;
	cout << "###########################################" << endl;
	SmartPhone sp("01012345678");
	sp.Shutter();
	sp.setNumber("010111111111");
	cout << sp.getNumber() << endl;
	sp.call();
	sp.showInfo();
	cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
	MobileDevice md("01012345678");
	md.Shutter();
	md.setNumber("010111111111");
	cout << md.getNumber() << endl;
	md.call();
	md.showInfo();

	
}                                                                                                  