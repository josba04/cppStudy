#include<iostream>
using namespace std;

class Complex {
	int real;
	int imaginary;
public:
	Complex():real(0), imaginary(0) {
		/*real = 0;
		imaginary = 0
		*/
	}
	Complex(int real, int imaginary) {
		this->real = real;
		this->imaginary = imaginary;
	}
	Complex operator+(Complex &com_a) {
		int a = this->real + com_a.real;
		int b = this->imaginary + com_a.imaginary;
		return Complex(a, b);
	}
	Complex operator-(Complex &com_m) {
		int c = this->real - com_m.real;
		int d = this->imaginary - com_m.imaginary;
		return Complex(c, d);
	}

	Complex operator*(Complex& com_mult) {
		int e = this->real * com_mult.real;
		int f = this->real * com_mult.imaginary;
		int g = this->imaginary * com_mult.real;
		int h= this->imaginary * com_mult.imaginary;
		int add = e - h;
		int add_2 =  f + g;
		return Complex(add,add_2);
	}
	Complex operator++() {//전위
		/*int a = ++this->real ; 
		int b = this->imaginary;
		return Complex(a,b);*/
		(this->real)++;
		return *this;
	}
	Complex operator++(int) {//후위
		return Complex((this->real)++, this->imaginary);
	}
	Complex operator--() {//전위
		this->real--;
		return *this;
	}
	Complex operator--(int) {//후위
		return Complex((this->real)--, this->imaginary);
	}

	void print() {

		if (real == 0 && imaginary == 0) cout << 0 << endl;
		else if (imaginary == 1)cout << real << "+ i" << endl;
		else if (real == 0)cout << imaginary << "i" << endl;
		else if (imaginary == 0)cout << real << endl;
		else if (imaginary == -1)cout << real<<" - i" << endl;
		else if (imaginary < 0)cout << real << imaginary << "i" << endl;
		else cout << real << "+" << imaginary << "i" << endl;

	}
};

int main() {
	Complex c1(0, 0);//0+0i
	c1.print();

	Complex c2(1, 1);//1+1i
	c2.print();

	Complex c3(2, 2);//2+2i
	c3.print();

	cout<<endl;

	Complex c4(0, 3);//3i
	c4.print();

	Complex c5(2, 0);//
	c5.print();//2

	cout  << endl;

	Complex c6(0, -3);
	c6.print();// -3i

	Complex c7(-5, 0);
	c7.print();//-5i

	Complex c8(-3, -8);
	c8.print();//-3-8i

	Complex c9(3, -8);
	c9.print();//3-8i

	Complex c10(-3, 8);
	c10.print();//3+8i

	cout << endl;
	Complex c11,c12,c13;
	c11.print();	//0
	c12.print();	//0
	c13.print();	//0

	cout << endl;
	c11 = c3 + c5;	//c11 = c3.operator+(c5)
	c3.print();
	c5.print();
	c11.print();	//4+2i

	cout << endl;
	c12 = c3 - c4;	//c12 = c3.operator-(c4)
	c3.print();
	c4.print();
	c12.print();

	cout << endl;
	c13 = c3 * c9;	// c13 = c3.operator*(c9)
	c3.print();
	c9.print();
	c13.print();

	cout << endl;
	Complex c14, c15;
	c14 = ++c9;// 4 - 8i;
	c9.print();
	c14.print();

	cout << endl;
	c15 = c13++;	//c15 : 22-10i c13 : 23 - 10i
	c13.print();
	c15.print();
	
	Complex c16, c17;
	cout << endl;
	c16 = --c9;
	c9.print();		//3-8i
	c16.print();	//3-8i

	cout << endl;
	c17 = c13--;
	c13.print();	//22-10i
	c17.print();	//23-10i
	
}