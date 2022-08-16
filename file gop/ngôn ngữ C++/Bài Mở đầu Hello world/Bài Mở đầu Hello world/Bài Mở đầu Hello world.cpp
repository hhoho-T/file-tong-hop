#include<iostream>
#include<string>
using namespace std;

int main() {
	/*cout << "Hello C++";
	cout << endl;
	cout << "12 + 15 = " << 12 + 15 << endl;
	cout << "12 - 15 = " << 12 - 15 << endl;
	cout << "12 * 15 = " << 12 * 15 << endl;
	cout << "35 / 15 = " << 35 / 15<< endl;
	int a, b;
	a = 5445;
	b = 3234;
	cout << " a + b  = " << a + b<< endl;

	int dob;
	dob = 20219;
	string name = "codelearn ... ";
	cout << "name : "<< name<< endl;
	cout << "date of brith : " << dob<<endl;

	double c, d;
	c = 19.45; d = 45;
	cout << "c = " << c<< endl << "d = " << d<< endl;
	cout << "c/d" << c / d<< endl;
	cout << "a = " << (int)'a' << endl;

	int h = 1210982384324;
	int g = 231802374306;
	cout << "h * g = " << (long long)h * g<< endl;

	bool n = -88987;// trả về 1 là đúng, 0 là sai
	cout << n<< endl;

	string ten;
	cin >> ten;
	cout <<"hello " << ten<<endl;

	// chưa được dùng dấu cách
	string ten1, diachi;
	cin >> ten1 >> diachi;
	cout << "name " << ten1 << endl << "address " << diachi<<endl;

	// được dùng dấu cách (ko được dùng chung với code trên)
	string ten3, diachi1;
	getline(cin, ten3);
	getline(cin, diachi1);
	cout << "Name : " << ten3 << endl;
	cout << "Address : " << diachi1;
	return 0;

	int a, b;
	cin >> a >> b;
	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / b << endl;
	cout << "a % b = " << a % b;// ko dung được với float

	string ten;
	int tuoi;
	getline(cin, ten);
	cin >> tuoi;
	cout << "In 15 year , age of " << ten << " will be " << tuoi;

	int a, b;
	cin >> a >> b;
	cout << " truoc Khi chay : "<< a << "  " << b << endl;
	int tem = a;
	a = b;
	b = tem;
	cout << " sau khi chay : a = " << a << ", b=  " << b;

	// cách 2
	int a, b;
	cin >> a >> b;
	cout << " truoc Khi chay : " << a << "  " << b << endl;

	a = a + b;
	b = a - b;
	a = a - b;
	cout << " sau khi chay : a = " << a << ", b=  " << b;

	char c;
	cin >> c;
	c = c + 1;
	cout << c;
	int a;
	cin >> a;
	if (a % 2 == 0) {
		cout << "la so chan";
	}
	else
	{
		cout << "la so le";
	}

	string name;
	string name1;
	getline(cin, name);
	getline(cin, name1);
	if (name == name1) {
		cout << " hai ten giong nhau";
	}
	else
	{
		cout << "hai ten khac nhau";
	}

	// cach 1 tim max
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b&&a > c) {
		cout << a;
	}
	else if(b>a&&b>c)
	{
		cout << b;
	}
	else if(c>b&&c>a)
	{
		cout << c;
	}
	// cách 2

	int a, b, c;
	cin >> a >> b >> c;
	int max = (a > b && a > c) ? a : (b > c ? b : c);
	cout << max;

	int a;
	cin >> a;
	if (a >= 10 && a <= 100) {
		cout << "a nam trong khoang 10-100";
	}
	else
	{
		cout << "a ko nam trong khoang 10-100";
	}


	int a, b, c;
	cin >> a >> b >> c;
	if (a > b&&b > c) {
		cout << "day giam dan";
	}
	else if(a < b&&b < c)
	{
		cout << " day tang dan";
	}
	else
	{
		cout << " day ko tang ko giam";
	}

	int a, b;
	char c;

	cin >> a >> b;
	cin >>c;

	switch (c)
	{
	case '+':
		cout << " a + b = " << a + b;
		break;
	case '-':
		cout << "a - b = " << a - b;
		break;
	case '*':
		cout << "a * b = " << a * b;
		break;
	case '/':
		cout << "a / b = " << a / b;
		break;

	default:
		cout << "Khong thuoc phep tinh nao";
		break;
	}

	int n;
	cin >> n;
	for (int i = 0; i <= n; i += 1) {
		cout << i<<" ";
	}

	int n;
	cin >> n;
	for (int i = n; i >= -7; i --) {// 5 4 3 2 1 0 -1 -2 -3 -4 -5 - 6 -7
		cout << i << " ";
	}

	int a, b;
	int dem = 10;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		dem += i;
	}

	cout << "tong la : " << dem;

	int n;
	int dem = 1;
	cin >> n;
	cout << n << "! = ";
	for (int i = 1; i <= n; i++) {
		dem *= i;
	}
	cout << dem;

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			cout << i << " ";
		}
	}
	int n;
	cin >> n;
	while(n <= 100) {
		// cách 1;
		if (n % 2 == 0) {
			cout << n << " ";
		}
		n++;

		//// cách 2;
		//n += 2;
		//cout << n<<" ";
	}

	int n;
	int i = 1;
	int dem = 0;
	cin >> n;
	while (i<=n)
	{
		if (n % i == 0) {
			dem++;
		}
		i++;
	}
	cout << dem;

	int n;
	int dem = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			dem++;
		}
	}
	cout << dem;*

	int a, b;
	// cách 1;
	cin >> a >> b;
	cout << pow(a, b) << endl;

	int dem = 1;
	while (b>0)
	{
		dem*= a;// mỗi lần chạy sẽ nhân thêm 1 lần
		// ví dụ a = 2; b = 4-> b-- giảm 1 lần thì a *2 ,1 lần -> b =4 thì giảm 4 lần 2*2*2*2
		b--;
	}
	cout << dem;

	int a, b;
	int dem = 1;
	cin >> a >> b;
	for (; b > 0; dem *= a, b--);
		cout << dem;

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i%2==0)
		{
			continue;
		}
		cout << i << " ";
	}

	int i = 1;
	do
	{
		cout << "do - WHile\n";
	} while (i<1);
	while (i<1)
	{
		cout << "while";
	}
	do
	{
		cout << i << " ";
		i++;
	} while (i<=5);
	cout << endl;
	int n = 0;
	do
	{
		cout << n << " ";
		n += 10;
	} while (n<=1000);

	int n;
	int arr[1000];
	cin>> n;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cout << "so thu " << i << " :";
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i]<<" ";
		sum += arr[i];
	}
	cout <<"tong la " << sum<< endl;
	int max = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << max << endl;

	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	cout << min<< endl;

	cout << arr[0] + arr[n-1] << endl;

	int k;
	cin >> k;
	int demk = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == k) {
			demk++;
		}
	}
	cout << demk << endl;

	// sắp xếp
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++)
		{
			if(arr[i]>arr[j]) {
				int tem = arr[i];
				arr[i] = arr[j];
				arr[j] = tem;
			}

		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] < arr[j]) {
				int tem = arr[i];
				arr[i] = arr[j];
				arr[j] = tem;
			}

		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	// Ma trận
	int arr[100][100];
	int n, m;// n là dòng , m là cột
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << " arr[ " << i << "][" << j << "] = " << arr[i][j] << " " << endl;
		}
	}*/
	







	



	
	

	




}




	


