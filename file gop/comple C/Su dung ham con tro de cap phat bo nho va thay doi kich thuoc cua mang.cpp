#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Nhap so luong phan tu n = ");
	scanf("%d", &n);  
	//int* ptr = (int *)malloc(n*sizeof(int)); //cach 1 : cap phat bo nho dong
	int* ptr = (int *)calloc(n, sizeof(int)); //cach 2 cap phat bo nho dong lien tuc 
	if(ptr==NULL){
		printf("\n Error : Khong cap phat duoc vao vung nho : ") ;
		return 0;
	}
	// nhap mang
	for(int i =0 ; i<n; i++){
	printf("a[%d]=", i);
	scanf("%d", ptr + i);  	
	}
	
	// xuat mang
	for(int i =0; i<n; i++){
		printf("%d ", *(ptr + i));
	}
	int x;
	printf("\n Nhap vao kich thuoc can thay doi") ;
	scanf("%d", &x); 
	realloc(ptr, x);// ham dung thay doi kich thuoc bo nho
	// nhap mang
	for(int i =0 ; i<x; i++){
	printf("a[%d]=", i);
	scanf("%d", ptr + i);  	
	}
	
	// xuat mang
	for(int i =0; i<x; i++){
		printf("%d ", *(ptr + i));
	}
	
	
	free(ptr);
}
