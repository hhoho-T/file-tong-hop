#include<stdio.h>
int a[100][100];// gioi han 100 hang , 100 cot
int m, n;// m la hang, n la cot 

void NhapMangMaTran(int x[100][100], int &m, int &n){
	do{
		printf("Nhap m, n Vao ma tran ");
		scanf("%d%d", &m, &n);  
	}while(m<=0|| n<=0);
	
	for(int i = 0; i<m; i++){
		for(int j = 0; j< n; j++){
			printf("x[%d][%d]=", i, j);
			scanf("%d", &x[i][j]);  
		}
	}
}
void XuatMangMaTran(int x[100][100], int m, int n){
	printf("\nGia Tri cua ma tran la :  \n");
	for(int i =0; i< m ; i++){
		for(int j =0; j< n; j++){
			printf("%d\t", x[i][j]); 
		}
		printf("\n"); 
	} 
}
int timKiem(int x[100][100], int m, int n, int GiaTritimKiem){
	int kq=0;
	for(int i =0; i < m ; i++){
		for(int j =0; j<n; j++){
			if(x[i][j]==GiaTritimKiem )
			kq=1;
		}
	}
	return kq;
}
int ThucHientimKiem(int x[100][100], int m, int n){
	int luachon=0;
	do{
		int GiaTritimKiem;
		printf("\nNhap vao gai tri can tim kiem");
		scanf("%d", &GiaTritimKiem );
		int kq=timKiem(x, m, n, GiaTritimKiem );
		if(kq){
			printf(" Tim thay gia tri can tim kiem trong mang !");
			 
		}  else{
			printf("ko Tim thay gia tri can tim kiem trong mang !");
		}
		
		printf("\n Nhap lua chan bat ki de tiep tuc tim kiem, nhap 0 de thoat");
		scanf("%d", &luachon );  
	}while(luachon !=0);
}
int main(){
	NhapMangMaTran(a, m, n);
	XuatMangMaTran(a, m, n);  
	ThucHientimKiem(a, m, n); 
}
