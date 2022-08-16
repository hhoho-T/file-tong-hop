#include<iostream>

using namespace std;

// cach 1 
int main(){
	float t, l , h;
	cin>>t;
	cin>>l;
	cin>>h;	
	
	float tong = t + l + h;
	float tongg = t + l;
	
	if(t>=6.5 && l >=5.5 && h>=5.0 && tong>=18 || tongg >= 14.0){
		cout<<"do dh";
	}else {
		cout<<" k do dh";
	}
}
