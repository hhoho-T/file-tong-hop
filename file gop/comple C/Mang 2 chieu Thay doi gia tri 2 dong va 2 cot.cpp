#include<stdio.h>

int a[100][100];
int b[10000];
int m, n;

void NhapMaTran(int x[100][100], int &m, int &n){
	do{
		printf("Nhap vao m , n(m la so dong, n la so cot) : ");
		scanf("%d%d", &m, &n);  
	}while (m<=0 || n<=0);
	for(int i =0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("x[%d][%d]=", i , j);
			scanf("%d", &x[i][j]);  
		}
	} 
}
void XuatMaTran(int x[100][100], int m, int n){
	printf("\nGia tri cua ma tran la : \n");
	for(int i =0; i<m; i++){
		for(int j =0; j<n; j++){
			printf("%d\t", a[i][j]) ;
		}
		printf("\n"); 
	} 
}

void ThayDoiGiaTri2dong(int x[100][100], int m, int n, int k, int y){
	// 1 2 3
	// 4 5 6
	// 5 6 7
	// thay doi dong 1 va 2
	// 1 2 3
	//5 6 7
	// 4 5 6
	for(int i =0; i<n; i++){
		int tem = x[k][i];
		x[k][i]=x[y][i];
		x[y][i]=tem;
	}
}
void ThayDoiGiaTri2cot(int x[100][100], int m, int n, int k, int y){
	// 1 2 3
	// 4 5 6
	// 5 6 7
	// thay doi cot 1 va 2
	// 1 3 2
	// 4 6 5
	// 5 7 6
	for(int j =0; j<m; j++){
		int tem = x[j][k];
		x[j][k]=x[j][y];
		x[j][y]=tem;
	}
}
int main(){
	NhapMaTran(a, m, n);
	XuatMaTran(a, m ,n);
	//ThayDoiGiaTri2dong(a, m, n, 1,2);
	//XuatMaTran(a, m, n);   
	ThayDoiGiaTri2cot(a, m , n, 1, 2);
	XuatMaTran(a, m, n); 
}
