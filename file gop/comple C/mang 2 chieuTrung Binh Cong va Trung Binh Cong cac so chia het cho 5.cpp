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
double TrungBinhCongtatca(int x[100][100], int m, int n){
	if(m==0||n==0)
	return 0;
	int tong=0;
	for(int i =0; i< m; i++){
		for(int j =0; j<n; j++){
			tong+=x[i][j];
		}
	}
	double trungbinhcong= (double)tong/(m*n);
	return trungbinhcong; 
}
double TrungBinhCongchiahetcho5(int x[100][100], int m, int n){
	if(m==0||n==0)
	return 0;
	int tongchiahetcho5=0;
	int soluongchiahetcho5=0;
	for(int i =0; i< m; i++){
		for(int j =0; j<n; j++){
			if(x[i][j]%5==0){
				soluongchiahetcho5 ++;
				tongchiahetcho5 +=x[i][j];
			}
		}
	}
	double trungbinhcong= 0;
	if(soluongchiahetcho5 >0)
			trungbinhcong =(double)tongchiahetcho5 /soluongchiahetcho5 ;
		return trungbinhcong ;
}

int main(){
	NhapMangMaTran(a, m, n);
	XuatMangMaTran(a, m, n);  
	printf("trung binh cong la :%.2f", TrungBinhCongtatca (a, m, n) ); 
	printf("\n") ;
	printf("trung binh cong chia het cho 5 la:%.2f", TrungBinhCongchiahetcho5(a, m, m)); 
}
