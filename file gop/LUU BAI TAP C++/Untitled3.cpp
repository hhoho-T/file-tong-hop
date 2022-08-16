#include<stdio.h>

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
int Tong3solonnhat(int x[100], int n){
	int tich = 0;
	  for (int i = 0; i < n; i++) {
            
                    if (tich < x[n-1] + x[n - 2] + x[n - 3])
                        tich = x[n-1] + x[n - 2] + x[n - 3];
              
        }
        return tich;
}

int main(){
	NhapMang(a, n);
	XuatMang(a, n);
	printf("ket qua la : %d", Tong3solonnhat(a, n) ); 
}
