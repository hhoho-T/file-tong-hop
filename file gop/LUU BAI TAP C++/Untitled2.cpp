#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a, b, c;
	// nhap du lieu
	do{
		cout<<"nhap vao tham so a ";
		cin>>a;
		cout<<"nhap vao tham so b ";
		cin>>b;
		cout<<"nhap vao tham so c ";
		cin>>c;
		
	}while(a==0);
	cout<<"Phuong Trinh Bac hai " << a << "x2 + " << b << "x + " << c << "= 0 ";
	float delta = b*b-4*a*c;
	cout<<"gia tri cua delta la : "<<delta ;
	if(delta <0){
		cout << "Phuong Trinh Vo Nghiem ";
	} else if(delta ==0){
		cout << " Phuong Trinh Co 2 Nghiem Kep ";
		float x = -b/(2*a);
		cout << " x = " <<x ;
	}else{
		cout << " Phuong Trinh Co 2 Nghiem Phan Biet ";
		float x1 = (-b - sqrt(delta))/(2*a);
		float x2 = (-b + sqrt(delta))/(2*a);
		cout << " x1 = " <<x1 ;cout << " x2 = " <<x2 ;
	}
}
