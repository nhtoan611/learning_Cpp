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
	learning dm;
	dm.display();
	system("pause");
}

void xinchao() {
	cout << "Xin chao cac ban" << endl;
}