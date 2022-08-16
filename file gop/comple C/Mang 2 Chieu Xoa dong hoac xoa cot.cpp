#include<stdio.h>

int a[100][100];
int b[10000];
int m, n;

void NhapMaTran(int x[100][100], int &m, int &n){
	do{
		printf("Nhap m , n vao Ma tran (m la dong , n la cot)");
		scanf("%d%d", &m, &n); 
	}while (m<=0||n<=0);
	for(int i =0; i<m; i++){
		for(int j =0; j<n; j++){
			printf("x[%d][%d]=", i, j);
			scanf("%d", &x[i][j]);  
		}
	}
}
void XuatMaTran(int x[100][100], int m, int n){
	printf("\nGia tri cua ma tran : \n");
	for(int i =0; i <m; i++){
		for(int j =0; j <n; j++){
			printf("%d\t ", a[i][j]) ;
		}
		printf("\n"); 
	} 
}
void XoadongMaTran(int x[100][100], int &m, int n, int k){
	if(k<0||k>=m){
		return;
		
		for(int i =k; i<m-1; i++){
			for(int j =0; j<n; j++){
				x[i][j]=x[i+1][j];
			}
		}
	}
	m = m-1;
}
void XoacotMaTran(int x[100][100], int m, int &n, int k){
	if(k<0||k>=n){
		return;
		
		for(int i=0; i<m; i++){
			for(int j =k; j <n-1; j++){
				x[i][j]= x[i][j+1];
			}
		}
	}
	n=n-1;
}
int main (){
	NhapMaTran(a, m, n);
	XuatMaTran(a, m, n); 
	//XoadongMaTran(a, m, n ,2);
	//XuatMaTran(a, m, n);
	XoacotMaTran(a, m, n, 2);
	XuatMaTran(a, m, n);     
}
