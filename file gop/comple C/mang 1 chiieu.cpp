#include<stdio.h>

int main() {
	// khai bao du lieu
	int a[10];
	float b[100];
	char c[1000];
	// khai bao mang va gan gia tri ban dau
	int x[10] = {};
	int y[3] = {3, 7 , 9};
	// gan du lieu cho mang
	// mang bat dau tu vi tri so 0
	y[0]=5;
	printf("\n0 - %d", y[0]); 
	printf("\n1 - %d", y[1]);
	printf("\n2 - %d", y[2]);
}
