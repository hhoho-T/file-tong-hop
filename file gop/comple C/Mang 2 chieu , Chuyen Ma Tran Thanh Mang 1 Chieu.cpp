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
void ChuyenMatranThanhMang1Chieu(int x[100][100], int m, int n, int y[10000], int &k){
	int dex=0;
	k=m*n;
	for(int i =0; i<m; i++){
		for(int j=0; j<n; j++){
			y[dex]=x[i][j];
			dex++;
		}
	}
	
	
}

void SapXepTang(int x[10000], int n){
	for(int i =0; i< n-1; i++){
		int vitrinhonhat=i;
		for(int j=i+1; j<n; j++){
			if(x[i]<x[vitrinhonhat ])
				vitrinhonhat=j;
				int tem = x[i];
				x[i]=x[j];
				x[j]=tem;
		}
	}
}


void XuatMangMotchieu(int x[10000], int n){
	printf("\n Gia tri Cua Mang Mot chieu La:");
	for(int i=0;i <n; i++){
		printf("%d  ", x[i]); 
	} 
}

int main(){
	nhapMaTran(a, m, n);
	xuatMaTran(a, m, n);
	ChuyenMatranThanhMang1Chieu(a, m, n, b, k);
	XuatMangMotchieu(b, k);  
	
	SapXepTang(b, k);
	XuatMangMotchieu(b, k) ;
}
