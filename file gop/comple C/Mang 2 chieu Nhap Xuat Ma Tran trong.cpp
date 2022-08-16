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
int main(){
	NhapMangMaTran(a, m, n);
	XuatMangMaTran(a, m, n);  
}
