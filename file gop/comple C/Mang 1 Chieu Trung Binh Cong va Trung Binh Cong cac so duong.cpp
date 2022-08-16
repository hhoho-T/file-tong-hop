#include<stdio.h>

float TrungBinhCong(int x[], int n){
	int tong =0;
	for (int i = 0; i<n; i++){
		tong+=x[i];
	}
	return (float)tong/n;
}

float TrungBinhCongSoDuong(int x[], int n){
	int tong =0;
	int soluongsoduong =0;
	for (int i = 0; i<n; i++){
		if(x[i]>0){
			tong+=x[i];
			soluongsoduong ++;
		}
	}
	return soluongsoduong>0?(float)tong/soluongsoduong:-1;
}

int main() {
	int a[100];
	int n;
	do{
		printf("Nhap Vao so luong cac phan tu (0<n<100) : ");
		scanf("%d", &n);  
	}while (n<1||n>100);
	for(int i = 0 ; i<n; i++) {
		printf("\na[%d]=", i);
		scanf("%d", &a[i]); 
	}
	printf("Trung Binh Cong : %.2f", TrungBinhCong(a, n)); 
	
	float tbcsd= TrungBinhCongSoDuong(a, n);
	if(tbcsd>0){
		printf("\n Trung Binh Cong So Duong la : %.2f", tbcsd); 
	}else{
		printf("\n Mang ko co trung binh cong");
	}
}
