#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[100], b[100], c[100];
int n, n1, n2;


void NhapMang(int x[100], int &n){
	do{
		printf("Nhap so luong phan tu la :");
		scanf("%d", &n);  
	}while(n<1);
	for(int i =0; i< n; i++){
		printf("Nhap x[%d]:", i);
		scanf("%d", &x[i]);  
	}
}

void XuatMang(int x[100], int n){
	printf("\n");
	printf("Gia tri cua mang la :");
	for(int i =0; i < n; i++){
		printf("%d ", x[i]);  
	}  
}

void TachMang(int x[100], int n, int x1[100], int &n_1, int x2[100], int &n_2){  // thay doi gia tri cho &1, &2
	int i1=0; n_1=0;
	int i2=0; n_2=0;
	for(int i = 0; i< n; i++){
		if(x[i]%2==0){
			x2[i2]=x[i];
			i2++;
			n_2++;
		}else{
			x1[i1]=x[i];
			i1++;
			n_1++;
		}
	}
}

int main(){
	printf("------\n");
	NhapMang(a, n);
	XuatMang(a, n);
	
	TachMang(a, n, b, n1, c, n2);
	XuatMang(b, n1);
	XuatMang(c, n2);    
}

