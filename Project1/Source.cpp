#include<iostream>
#include<string>
using namespace std;

#include "learning.h"


void xinchao();
class demo {
public:
	demo() {
		age = 3;
	}
	demo(int tuoi) {
		age = tuoi;
	}
public:
	void setAge(int tuoi) {
		age = tuoi;
	}
	int getAge() {
		return age;
	}
private:
	int age;
};
void main() {
	/*	xinchao();
	int a = 3;
	cout << a << endl;
	int b;
	b = 2;
	cout << b << endl;
	demo x;
	cout << x.getAge() << endl;
	demo y(5);
	cout << y.getAge() << endl;
	*/


	/* learning dm;
	dm.display(); */

	int a = 1;
	int b = 2;
	int c = 3;

	int *ptr=0;

	cout << a << " "<< &a << endl;
	cout << b << " " << &b << endl;
	cout << c << " " << &c << endl;

	ptr = &a;
	cout << ptr << endl;
	ptr = &b;
	cout << ptr << endl;
	ptr = &c;
	cout << ptr << endl;

	system("pause");
}

void xinchao() {
	cout << "Xin chao cac ban" << endl;
}