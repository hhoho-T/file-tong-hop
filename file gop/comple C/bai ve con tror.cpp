#include<stdio.h>

int main() {
	int n;
	printf("nhap vao n = ");
	scanf("%d", &n);
	printf("\n gia tri cua n la : %d", n);
	printf("\n dia diem cua gia tri n trong bo nho la :%p", &n);
	int *pc, c;
	c=5;
	pc=&c;
	printf("\n gia tri cua c la : %d", *pc);
	printf("\n dia chi cua bien c la : %p", pc);
	
	*pc=1;
	printf("\n gia tri cua pc la : %d", c);
	printf("\n dia chi cua bien *pc la : %d", *pc);
	
}
