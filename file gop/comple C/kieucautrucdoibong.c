#include "stdio.h"
typedef struct cauthu{
char hoten[40];
int sobanthang ;
char doibong[100];
} cauthu;
int main(){
	int n , i;
	cauthu a[100];
	printf("nhap so cau thu: ");
	scanf("%d", &n);
	for(i=1 ; i<=n ; i++){
		printf("\n nhap ho ten cau thu thu %d la: ", i);
		fflush(stdin); gets(a[i].hoten);
		printf("\n nhap so ban thang: ");
		scanf("%d", &a[i].sobanthang);
		printf("\n nhap ten doi bong:");
		fflush(stdin); gets(a[i].doibong);
	}
	printf("\n     --------- Thong tin cau thu ---------\n");
    printf("%-20s %-20s %-7s\n", "Ho ten", "So ban thang", "Ten doi bong");
    for(i=1 ; i<=n ; i++){
    printf("%-20s %-20d %-7s\n", a[i].hoten, a[i].sobanthang, a[i].doibong);
	}
	int sum = 0;
	char A;
	
		if(A==a[i].doibong){
			sum +=a[i].sobanthang;
			
		}
		printf("\nsum=%d", sum);
	
	
}
