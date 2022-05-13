#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Camera {
public:
	Camera() { cout << "Camera 생성자" << endl; }
	virtual ~Camera() { cout << "Camera 소멸자" << endl; }
	void Shutter() { cout << "사진을 찍다." << endl; }
	void showInfo() { cout << "카메라 번호 : " << endl; }
};

class Phone {
	char p_no[12];
public:
	Phone() { 
		p_no[0] = 0;
		cout << "Phone 생성자" << endl; }
	virtual ~Phone() { cout << "Phone 소멸자" << endl; }
	void setNumber(const char* pno) { strcpy(p_no, pno); }
	char* getNumber() { return p_no; }
	void call() { cout << p_no << "에 전화를 건다." << endl; }
	void showInfo() { cout << "전화번호 : " << p_no << endl; }
};

class MobilePhone : public Camera, public Phone{
public:
	MobilePhone() { cout << "MobilePhone 생성자" << endl; }
	MobilePhone(const char *mpno) { cout << "전화번호 : "<<mpno<<"MobilePhone 생성자" << endl; }

	~MobilePhone() { cout << "MobilePhone 소멸자" << endl; }
	
};
class SmartPhone : public Phone {
	Camera cam;
public:
	SmartPhone() { cout << "SmartPhone 생성자" << endl; }
	SmartPhone(const char* mpno) { cout << "전화번호 : " << mpno << "SmartPhone 생성자" << endl; }
	void Shutter() { cam.Shutter(); }
	~SmartPhone() { cout << "SmartPhone 소멸자" << endl; 	}
	

};
class MobileDevice{
	Camera cam;
	Phone pho;
public:
	MobileDevice() { cout << "MobileDevice 생성자" << endl; }
	MobileDevice(const char* mpno) { cout << "전화번호 : " << mpno << "MobileDevice 생성자" << endl; }
	void Shutter() { cam.Shutter(); }
	void setNumber(const char* pno) { pho.setNumber(pno); }
	void call() { pho.call(); }
	char* getNumber() {return pho.getNumber(); }
	void showInfo() { pho.showInfo();  }
	~MobileDevice() { cout << "MobileDevice 소멸자" << endl; }


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