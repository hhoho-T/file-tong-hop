#include "stdio.h"
int a[100];
int n;



void nhapMang(int x[100], int &n){
	do {
		printf("Nhap vao so luong phan tu: ");
		scanf("%d", &n);
	}while(n<1);
	for(int i=0; i<n; i++){
		printf("Nhap x[%d]:", i);
		scanf("%d", &x[i]);
	}
}

void xuatMang(int x[100], int n){
	printf("Gia tri cua mang la: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}
int timMin(int x[100], int &n){
	int min=x[0];
	for(int i =0; i< n; i++)
		if(min> a[i])
		min = a[i];
	
	return min ;
}
int timMax(int x[100], int &n){
	int max=0;
	for(int i =0; i< n; i++)
		if(max< a[i])
		max = a[i];
	
	return max ;
}
int main(){
	nhapMang(a, n);
	xuatMang(a, n);
	printf("\nMIN = %d", timMin(a, n) );
	printf("\nMAX = %d", timMax(a, n) );
}
