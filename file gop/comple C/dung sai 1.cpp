#include<stdio.h>

int main() {
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(int i = 0; i <n; i++ ) {
		printf("\n%d la %s", i ,(i%2==0)?"dung":"sai");
	}
	
}
