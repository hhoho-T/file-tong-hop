// tim giai thua
#include<stdio.h>
#include<math.h>
int main() {
	int n, gt;
	do {
	
	printf("nhap n = ");
	scanf("%d", &n);
	}while (n<0) ;
	gt=1;
	for(int i=1; i<=n; i++) {
		gt =gt*i;
	}
	printf("%d", gt);
}
