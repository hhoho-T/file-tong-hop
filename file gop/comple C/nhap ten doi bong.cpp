#include<stdio.h>
#include<conio.h>
#include <string.h>
int a[100];
int n;
int SBT;
char HT[50], DB[50];

void NhapMang(int x[100], int &n, int &SBT, char HT[50], char DB[50]){
	printf("Nhap vao so luong cau thu");
	scanf("%d", &n);

	for(int i =0; i<n; i++){
		
		printf("a[%d]=", i);
		
		scanf("%d%d%s%s", &x[i], &SBT , &HT, &DB);  
	}  
}
void XuatMang(int x[100], int n, int SBT, char HT[50], char DB[50]){
	printf("gia tri vua nhap la ");
	for(int i =0; i<n; i++){
		printf("\ncau thu so : %d \n so ban thang cua cau thu la : %d ", x[i], SBT); 
		printf("%s", HT )
		printf("%s", DB[50] )  
	} 
}
int main(){
	NhapMang(a, n, SBT, HT, DB);
	XuatMang(a, n, SBT, HT, DB);  
}
 
