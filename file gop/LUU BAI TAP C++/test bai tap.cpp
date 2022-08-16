#include<iostream>
#include<stack>

using namespace std;

// dao Nguoc Mang
//int main(){
//	string s;
//	stack<char>st;// dung char ()dde luu cac ki tu trong chuoi
//	getline(cin,s);
//	for(int i = 0; i <s.length(); i++){
//		st.push(s[i]);
//		//push : day phan tu vào stack. ÐPT 
//	}
//	while(!st.empty()){ 
//	// empty : true stack neu rong, và nguoc lai. ÐPT
//		cout << st.top(); // in ra man hinh
//		//top : truy cap toi phan tu o dinh stack. ÐPT
//		st.pop();
//		//pop : looi bo phan tu o dinh cua stack. ÐPT 
//	}
//	return 0;
//}

// Chuyen so qua so nhi Phan
int main(){
	stack<char> st;
	int n;
	cin>>n;
	while(n>0){
		st.push(n%2+'0'); // day phan tu vao stack
		n/=2;// tonag phan tu chia 2
	}
	while(!st.empty()){
		cout<<st.top();
		st.pop();
	}
}


