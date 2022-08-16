#include<iostream>
#include<string>
using namespace std;

/*void show() {
	for (int i = 0; i < 100; i++) {
		cout << i << " ";
	}
}
void xau(string s) {
	
	cout << "name : " << s <<"\n";
}
void xau2(string s) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] += 32;
		}
	}
	cout << s<<endl;
}
void giamdan(int arr[1000], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] < arr[j]) {
				int tem = arr[i];
				arr[i] = arr[j];
				arr[j] = tem;
			}
		}
		cout << arr[i]<<" ";
	}
}
void tong(int arr[1000], int n) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		dem += arr[i];
	}
	cout << " tong la " << dem;
}

int giatrimax(int arr1[1000], int n1) {
	int max = arr1[0];
	for (int i = 0; i < n1; i++) {
		if (arr1[i]>max) {
			max = arr1[i];
		}
	}
	return max;
}
int giatrimin(int arr2[1000], int n2) {
	int min = arr2[0];
	for (int i = 0; i < n2; i++) {
		if (arr2[i] < min) {
			min = arr2[i];
		}
	}
	return min;
}

int cacsole(int arr[1000], int n) {
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 != 0) {
			dem++;
		}

	}
	return dem;
}
int cacsochan(int arr[1000], int n) {
	int demchan = 0; 
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0) {
			demchan++;
		}
	}
	return demchan;
}

void xau(string name[5000], int n) {
	for (int i = 0; i < n; i++)
	{
		if (name[i].size() >= 3) {
			cout << name[i] << " ";
		}
	}
}*/

double chuvi(double r) {
	return 2 * r * 3.14;
}


int main() {
	/*string s;
	getline(cin, s);
	xau(s);
	show();
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	// CHuyển thành chữ thường
	xau2(s1);
	xau2(s2);
	xau2(s3);

	//sắp xếp giảm dần
	int n;
	int arr[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "so thu " << i << "  :";
		cin >> arr[i];
	}
	giamdan(arr, n);
	tong(arr, n);

	// số lớn nhất
	int n1, n2;
	int arr1[1000], arr2[1000];
	cin >> n1;
	for (int i = 0; i < n1; i++) {
		cout << "so thu " << i << "  : ";
		cin >> arr1[i];
	}
	cin >> n2;
	for (int i = 0; i < n2; i++) {
		cout << "so thu " << i << "  : ";
		cin >> arr2[i];
	}
	cout << giatrimax(arr1, n1)<<endl;
	cout << giatrimin(arr2, n2);

	// đêm số lẻ, số chẵn của mảng
	int n;
	int arr[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout<<cacsole(arr, n)<<endl;
	cout << cacsochan(arr, n);


	// hiển thị xâu
	int n;
	string name[5000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> name[i];
	}
	xau(name, n);*/

	// chu vi
	double r;
	cin >> r;
	cout<<chuvi(r);
	
	
	
}