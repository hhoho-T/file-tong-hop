#include<iostream>
#include<string>

using namespace std;

int main() {
	/*string s;
	int n;
	getline(cin, s);
	cin >> n;
	cout << s[n - 1] << endl;

	// số lần xuất hiện của chữ đó
	char c;
	int dem =0;
	cin >> c;
	/*for (int i = 0; i < s.size(); i++) {
		if (s[i] == c) {
			dem++;
		}
	}
	cout << dem;
	
	// kí tự xuất hiện tại vị trí
	string s;
	getline(cin, s);
	char c;
	int dem = -1;
	cin >> c;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == c) {
			dem = i+1;
			break;
		}
	}
	cout << dem << endl;

	// in thường thành in hoa
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] -= 32;
		}
	}
	cout << s << endl;

	// in hoa thành in thường
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] += 32;
		}
	}
	cout << s<<endl;*/

	// hiển thị các kí tự in hoa
	string s;
	getline(cin, s);
	int demhoa = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z'){
			demhoa++;
		}
	}
	cout << demhoa << endl;

	// Chuyển số thành chữ
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '3') {
			s[i] = 'e';
		}
	}
	cout << s << endl;
	for (char i = 'A'; i <= 'Z'; i++)
	{
		cout << i;
	}
}