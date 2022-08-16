#include<stdio.h>
int main() {
	Nhap:
	int n;
	printf("nhap n = ");
	scanf("%d", &n);
	if (n<0) goto Nhap;
		printf("day so le ");
		for(int i = 0; i<n; i++){
	
		if(i%2==0) continue ;
			printf("%d ", i);
		
	}
}
