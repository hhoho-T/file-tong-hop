#include<stdio.h>
int a[100][100];
int b[10000];// 100*100=10000

int m , n, k;


void nhapMaTran(int x[100][100], int &m, int &n){
	do{
		printf("Nhap vao m va n:(m la dong; n la cot) ");
		scanf("%d%d", &m, &n);
	}while(m<=0 || n<=0);
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("x[%d][%d]=", i, j);
			scanf("%d", &x[i][j]);
		}
	}
}

void xuatMaTran(int x[100][100], int m, int n){
	printf("\nMang: \n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
void sapxeptang(int x[100][100], int m , int n){
	int k=m*n;
	for(int i =0; i< k-1; i++){
		for(int j= i+1; j<k; j++){
			if(x[i/n][i%n]>x[j/n][j%n]){
				int temp=x[i/n][i%n];
				x[i/n][i%n]=x[j/n][j%n];
				x[j/n][j%n] =temp;
			}
		}
	}
}
void sapxepgiam(int x[100][100], int m , int n){
	int k=m*n;
	for(int i =0; i< k-1; i++){
		for(int j= i+1; j<k; j++){
			if(x[i/n][i%n]<x[j/n][j%n]){
				int temp=x[i/n][i%n];
				x[i/n][i%n]=x[j/n][j%n];
				x[j/n][j%n]= temp;
			}
		}
	}
}
int main(){
	nhapMaTran(a, m, n);
	xuatMaTran(a, m, n);
	
	sapxepgiam(a, m, n);
	printf("\n sap xep giam dan cua ma tran la :");
	xuatMaTran(a, m, n);
	
	sapxeptang(a, m , n);
	printf("\n sap xep tang dan cua ma tran la :");
	xuatMaTran(a, m, n);
}
