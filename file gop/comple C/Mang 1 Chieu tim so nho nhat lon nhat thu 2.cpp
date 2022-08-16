#include<stdio.h>
#include<limits.h>
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


//int PhanTuNhoThuHai(int x[100], int n){
//	int min=INT_MAX;
//	int min_2=INT_MAX;
//	
//	for(int i=0; i < n; i++){
//		if(x[i]<min)
//		min=x[i];
//	}
//	for(int i = 0; i < n; i++){
//		if(x[i]==min){
//			continue ;
//		}else{
//			if(x[i]<min_2){
//				min_2=x[i];
//			}
//		}
//	}
//	return min_2;
//}


int PhanTuLonnhat(int x[100], int n){
	int max=0;
	
	
	for(int i=0; i < n; i++){
		if(x[i]>max)
		max=x[i];
	}
	
	return max;
}
int PhanTuLonThuHai(int x[100], int n){
	int max=0;
	int max_2=0;
	
	for(int i=0; i < n; i++){
		if(x[i]>max)
		max=x[i];
	}
	for(int i = 0; i < n; i++){
		if(x[i]==max){
			continue ;
		}else{
			if(x[i]>max_2){
				max_2=x[i];
			}
		}
	}
	return max_2;
}
int PhanTuLonThuba(int x[100], int n){
	int max=INT_MIN;
	int max_2=INT_MIN;
	int max_3=INT_MIN;
	
	for(int i=0; i < n; i++){
		if(x[i]>max)
		max=x[i];
	}
	for(int i = 0; i < n; i++){
		if(x[i]==max){
			continue ;
		}else{
			if(x[i]>max_2){
				max_2=x[i];
			}
		}
	}
	for(int i = 0; i < n; i++){
		if(x[i]==max){
			continue ;
		}else if(x[i]==max_2){
			continue ;
		}
		else{
			if(x[i]>max_3){
				max_3=x[i];
			}
		}
	}
	return max_3;
}
int tich(int x[100], int n){
	return PhanTuLonnhat(a, n)*PhanTuLonThuHai(a, n)*PhanTuLonThuba(a, n);
}

int main(){
	NhapMang(a, n);
	XuatMang(a, n);
	printf("\n");
	printf("Min_2=%d", tich(a, n));
	
//	printf("\n");
//	printf("Max_2=%d", PhanTuLonThuHai(a, n)); 
}
