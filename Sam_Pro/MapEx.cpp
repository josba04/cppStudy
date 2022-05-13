#include<iostream>
#include<map>
using namespace std;

//int main() {
//	map<int, string> Employees;
//	Employees[5234] = "Mike.C";
//	Employees[3374] = "Charlie M";
//	Employees[1923] = "David D";
//	Employees[7582] = "John A";
//	Employees[5328] = "peter @";
//
//	/*cout << Employees[1] << endl;
//	cout << Employees.size() << endl;*/
//
//	for (map<int, string>::iterator ni = Employees.begin(); ni != Employees.end();  ni++) {
//		cout << (*ni).first << "  " << ni->second <<  endl;
//	}
//	cout << endl;
//	for (map<int, string>::reverse_iterator ri = Employees.rbegin(); ri != Employees.rend(); ri++) {
//		cout << (*ri).first << "  " << ri->second << endl;
//	}
//
//}


int main() {
	map<string, int> Employees;
	Employees["Mike.C"] = 5234;
	Employees["Charlie M"] = 3374;
	Employees.insert(pair<string, int>("David D", 1923));
	Employees.insert(map<string, int>::value_type("John A", 7582));
	Employees.insert(make_pair("peter @", 5328));
	


	//cout << Employees[1] << endl;
	cout << Employees.size() << endl;

	for (map<string, int>::iterator ni = Employees.begin(); ni != Employees.end(); ni++) {
		cout << (*ni).first << "  " << ni->second << endl;
	}

	/*cout << endl;
	for (map<string, int>::reverse_iterator ri = Employees.rbegin(); ri != Employees.rend(); ri++) {
		cout << (*ri).first << "  " << ri->second << endl;
	}*/
}