#include<stdio.h>

int fibonacci(int x) {
	if(x==0)
			return 0;
	else if(x==1)
			return 1;
	else 
			return fibonacci(x-1)+fibonacci(x-2);
}

int main() {
	int n;
	do{
		printf("nhap vao n ");
		scanf("%d", &n);
	}while (n<0);
	printf("fibonacci(%d) = %d",n, fibonacci(n)) ;
}
