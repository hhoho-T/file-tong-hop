#include<iostream>
#include<string>

using namespace std;

// 1
/*class Hocsinh
{
public:
	string ten;
	int tuoi;
	void xuatten() {
		cout << "name : " << ten << endl;
		cout << "old : " << tuoi;
	}
};

int main() {
	
	Hocsinh h;
	getline(cin, h.ten);
	cin >> h.tuoi;
	h.xuatten();
}


/// 2
class Student
{
public:
	string name;
	int age;
	void nhap() {
		getline(cin, name);
		cin >> age;
	}
	void xuat() {
		cout << name << endl;
		cout << age;
	}
};

int main() {
	Student s1;
	s1.nhap();
	s1.xuat();
	
}

// 3 diện tích chu vi

class Hinhchunhat
{
public:
	double width;
	double length;

	void nhap() {
		cin >> width;
		cin >> length;
	}
	double Area() {
		return width*length;
	}
	double Primeter() {
		return (width + length) * 2;
	}
	void xuat() {
		cout << " Area = " << Area() << endl;
		cout << "primeter = " << Primeter();
	}
};

int main() {
	Hinhchunhat h1;
	h1.nhap();
	h1.xuat();
}


//4
class Student
{
private:
	string name ;
	
public:
	void nhap() {
		cin >> name;
	}
	void xuat() {
		cout << "name : " << name;
	}

};

int main() {
	Student s;
	s.nhap();
	s.xuat();
}

// 5
class Student
{

private:
	string name;
	int age;

public :
	Student() {
		cin >> name;
		cin >> age;
	}
	void xuat() {
		cout << "name : " << name << endl << "age :" << age;
	}
};

int main() {
	Student s;
	s.xuat();
}*/

// 6
class MyClass
{
private:
	string name;
	int age;

public:
	MyClass(string name, int age) {
		getline(cin, name);
		cin >> age;
		cout << "name : " << name << endl << "age :" << age << endl;
	}
};

int main() {
	MyClass (name);
	
	
}