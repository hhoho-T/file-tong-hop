#include<iostream>
#include<stack>
using namespace std;
int main(){
	string s;
	stack<char> st;
	getline(cin, s);
	for(int i = 0 ; i < s.length(); i++){
		st.push(s[i]);// them 1 phan tu o dinh stack, so luong ptu tang1
	}
	while(!st.empty()){
		cout<<st.top(); // lay phan tu dau tien va xuat ra
		st.pop(); //xoa phan tu o dinh , so ptu giam 1
	}
}
