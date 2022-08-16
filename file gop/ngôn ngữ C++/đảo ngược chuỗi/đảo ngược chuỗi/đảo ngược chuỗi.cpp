#include<iostream>

using namespace std;

void Reverse() {
	char c;
	cin >> c;
	if (c != '\n') {
		Reverse(c.begin, c.end);
		cout << c;
	}
}

int main() {
	cout << Reverse;
}