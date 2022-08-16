#include<stdio.h>
#include<limits.h>
int a[100];
int n;

void NhapMang(int x[100], int &n){
	printf("Nhap Vao Cac phan tu cua Mang la : ");
	scanf("%d", &n);
	for(int i =0; i < n; i++){
		printf("x[%d]=", i);
		scanf("%d", &x[i]); 
	}  
}
void XuatMang(int x[100], int n){
	printf("Gia Tri Cua Cac Phan tu la : ");
	for(int i =0; i < n; i++){
		printf("%d ", x[i]); 
	} 
}
void XoaMangTaiViTri(int x[100], int &n, int vi_tri){
	// 1 2 3 4 5
	// 1 2 4 5
	for(int i = vi_tri ; i < n-1 ; i++){
		x[i]= x[i+1];
	}
	n--;
}
void xoaTheoGiaTri(int x[100], int &n){
	int gt;
	printf("gia tri can xoa la :");
	scanf("%d", &gt);
	for(int i = 0; i <n ; i++){
		if(x[i]==gt)
			XoaMangTaiViTri(x, n, i); 
	}  
}

int main(){
	NhapMang(a, n);
	XuatMang(a, n);
	printf("\n");
	xoaTheoGiaTri(a, n);
	XuatMang(a, n);
	  
}
