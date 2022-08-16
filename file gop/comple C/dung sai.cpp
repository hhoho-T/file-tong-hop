#include<stdio.h>

int main() {
	int a , b;
	printf("nhap a, b ");
	scanf("%d%d", &a, &b);
	printf("\n%d %d la %s ",a,b, (a==b)?"dung":"sai");
	printf("\n%d %d la %s ",a,b, (a!=b)?"dung":"sai");
	printf("\n%d %d la %s ",a,b, (a>b)?"dung":"sai");
}
