
//#29
#include "stdio.h"
#include "math.h"

int kiemTraSoChinhPhuong(int x){
	int kc = (int)sqrt(x);
	if(pow(kc, 2)==x) 
		return 1;// neu dung
	else 
		return 0;// neu sai
}
int main(){
	int n;
	do{
		printf("Nhap n = ");
		scanf("%d", &n);
	}while (n<1) ;
	for(int j = 2; j <= n; j++) {
		//int kt = kiemTraSoChinhPhuong(j);
		if(kiemTraSoChinhPhuong(j)){
			printf("%d ", j);
		}
	}
}
