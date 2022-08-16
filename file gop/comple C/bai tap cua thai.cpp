#include<stdio.h>

int main(){
	int n, a[100];
	printf("Nhap vao n(n<100) = ");
	scanf("%d", &n);
	for(int i =0; i< n; i++){
		printf("a[%d]=", i);
		scanf("%d", &a[i]);   
	}  
	printf("\nGia Tri vua nhap la : ");
	for (int i =0; i < n; i++){
		printf("%d ", a[i]);  
	}
	// tong
	int tong = 0; 
	for(int  i = 0; i<n; i++){
		tong+=a[i];
	}
	printf("\ntong = %d", tong);
	// tich
	int tich = 1; 
	for(int  i = 1; i<n; i++){
		tich*=a[i];
	}
	printf("\ntich = %d", tich );
	
	// dem cac so chia het cho 3 va lon hon 10
	int dem =0;
	for(int i =0; i < n; i++){
		if(a[i]%3==0&&a[i]>10){
			dem++;
			printf("\ncac so cac so chia het cho 3 va lon hon 10 %d", a[i]);
		}
		
	}
	int tim = 0;
	for(int i =0; i<n; i++){
		if(a[i]>=100&&a[i]<1000){
			tim++;
		}
	}
	printf("\n so thoa man la : %d ", tim);
}
