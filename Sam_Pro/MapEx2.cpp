#include<iostream>
#include<map>
using namespace std;

class AAA {
public:
	int x, y;
	float z;

	AAA() {	}
	~AAA() {}

};

ostream& operator<<(ostream &out, AAA &aaa) {
	cout << aaa.x << endl;
	cout << aaa.y << endl;
	cout << aaa.z << endl;
	return out;
}


int main() {
	map<string, AAA> m;
	AAA Aobj;

	Aobj.x = 7;
	Aobj.y = 2;
	Aobj.z = 4.2355f;
	m["C"] = Aobj;

	Aobj.x = 5;
	m["B"] = Aobj;

	Aobj.x = 3;
	Aobj.y = 7;
	Aobj.z = 7.1234f;
	m["D"] = Aobj;


	for (map<string, AAA>::iterator ni = m.begin(); ni != m.end(); ni++) {
		cout << (*ni).first << "  " << ni->second << endl;
	}
	/*cout << endl;
	for (map<string, AAA>::reverse_iterator ri = m.rbegin(); ri != m.rend(); ri++) {
		cout << (*ri).first << "  " << ri->second << endl;
	}*/
}