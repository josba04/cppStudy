#include<iostream>
#include<map>
using namespace std;

int main() {
	multimap<string, int> m;
	m.insert(pair<string, int>("a", 1));
	m.insert(pair<string, int>("c", 2));
	m.insert(pair<string, int>("b", 3));
	m.insert(pair<string, int>("b", 4));
	m.insert(pair<string, int>("a", 5));
	m.insert(pair<string, int>("b", 6));

	for (map<string, int>::iterator ni = m.begin(); ni != m.end(); ni++) {
		cout << (*ni).first << "  " << ni->second << endl;
	}
	cout << endl;

	cout << "a : " << m.count("a")<< endl;
	cout << "b : " << m.count("b") << endl;
	cout << "c: "  << m.count("c")  << endl;
	cout << endl;

	pair < multimap<string, int>::iterator, multimap<string, int>::iterator> ppp;
	ppp = m.equal_range("b");

	for (multimap<string, int>::iterator ni = ppp.first; ni != ppp.second; ni++) {
		cout << (*ni).first << "  " << ni->second << endl;
	}

	//a,b,c 모두 찍어보기

	m.clear();
}
