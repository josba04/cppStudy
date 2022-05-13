#include<iostream>
using namespace std;


struct job {
	char name[40];
	double salary;
	int floor;

	void Show() {
		cout << name << " ";
		cout << salary << " ";
		cout << floor << endl;
		cout << endl;
	}
};

template <typename T>
void swap_ij(T& x, T& y);

template <>
void swap_ij(job& a, job& b);

void Show(job a);



int main() {
	double i = 10.5, j = 20.7;

	cout << "i =" << i << endl;
	cout << "j =" << j << endl;

	swap_ij(i, j);
	cout << "i =" << i << endl;
	cout << "j =" << j << endl;

	job i1 = { "강아지", 127.8, 3 };
	job j1 = { "망아지", 185.2, 4 };

	i1.Show();
	j1.Show();

	swap_ij(i1, j1);

	i1.Show();
	j1.Show();

	return 0;
}
template<typename T>

void swap_ij(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <>
void swap_ij(job& a, job& b) {
	double temps;
	temps = a.salary;
	a.salary = b.salary;
	b.salary = temps;

	int tempf;
	tempf = a.floor;
	a.floor = b.floor;
	b.floor = tempf;
}

