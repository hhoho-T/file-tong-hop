#include<stdio.h>
#include<math.h>
int n;
int a[100];
// a
void NhapMang(int x[], int &n){
	printf("Nhap n = ");
	scanf("%d", &n);
	for(int i =0; i< n; i++){
		printf("x[%d]=", i);
		scanf("%d", &x[i]);  
	}  
}
void XuatMang(int x[], int n){
	printf("cac so nguyen vua nhap la : ");
	for(int i =0; i<n; i++){
		printf("%d ", x[i]); 
	} 
}
// b
float trungBinhcacsonguyenchiahetba(int x[], int n){
	int tongcacsonguyenchiahetcho3 = 0;
	int vitricacsonguyenchiahet3=0;
	for(int i =0; i<n; i++){
		if(x[i]%3==0){
			vitricacsonguyenchiahet3 ++;
			tongcacsonguyenchiahetcho3 += x[i];
		}
	}
	double trungbinhcong=0;
	if(vitricacsonguyenchiahet3 >0)
		trungbinhcong = (double)tongcacsonguyenchiahetcho3 /vitricacsonguyenchiahet3 ;
			return trungbinhcong ;
	
}
//d
int thoaDieuKienle(int x){
	return (x%2!=0 );
}
int main(){
	//a
	NhapMang(a, n);
	XuatMang(a, n);  
	printf("\n");
	//b
	printf("trung binh cong cac so chia het 5 la %.2f", trungBinhcacsonguyenchiahetba(a, n) );  
	printf("\n Cac so le la  ");
	//d
	for(int i=0; i<n; i++){
		if(thoaDieuKienle(a[i]))
			printf(" so o vi tri le la %d    ", a[i]);
	}
}
