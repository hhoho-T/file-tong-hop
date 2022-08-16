#include "stdio.h"
int a[100];
int n;



void nhapMang(int x[100], int &n){
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &n);// nhap co luong phan tu o day truoc
	for(int i=0; i<n; i++){ // di lan luot
		printf("Nhap x[%d]:", i);
		scanf("%d", &x[i]);// luu gia tri vao dia chi bien
	}
}

void xuatMang(int x[100], int n){
	printf("Gia tri cua mang la: ");
	for(int i=0; i<n; i++){ // di tu dau den cuoi de xuat phan tu ra
		printf("%d ", x[i]);
	}
}

void xuatMangNguoc(int x[100], int n){
	printf("Gia tri cua mang dao nguoc la: ");
	for(int i=n-1; i>=0; i--){
		printf("%d ", x[i]);
	}
}

void daoNguocMang(int x[100], int n){
	for(int i=0; i<=n/2; i++){
		int temp = x[i];
		x[i]=x[n-i-1];
		x[n-i-1]=temp;
	}
}



 timkiem(int x[100], int n, int tk){
	int kq = 0;// danh dau xem co tim thay hay ko, quy uoc ko tim thay
	for(int i=0;i < n ; i++){
		if(x[i]==tk){// kiem tra xem co gia tri ma dang tim kiem ko
			kq==1;
			return 1;
		}
	}
	return kq;
}
void thuchientimkiem(int x[100], int n){
	int tk;
	printf("Nhap Vao gia tri tim kiem : ");
	scanf("%d", &tk);
	int kq = timkiem(x, n, tk);
	if(kq==1){
		printf("\n Tim Thay !");
	}else {
		printf("\n Ko tim Thay!");
	}
}

int main(){
	nhapMang(a, n);
	xuatMang(a, n);
	printf("\n");
	//xuatMangNguoc(a, n);
	daoNguocMang(a, n);
	xuatMang(a, n);
	thuchientimkiem(a, n);
}


