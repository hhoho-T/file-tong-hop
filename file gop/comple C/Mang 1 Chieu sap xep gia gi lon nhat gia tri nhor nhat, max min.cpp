#include<stdio.h>

void swap(int &a, int &b){
	int tem=a;
	a=b;
	b=tem;
}

void sapxeptang(int x[], int n){
	for(int i = 0; i < n -1; i++){
		int vitrinhonhat = i;
		for(int j = i + 1; j < n; j++){
			if(x[j]< x[vitrinhonhat])
				vitrinhonhat = j;
		}
		swap(x[i], x[vitrinhonhat ]); 
	}
}

int giatrilonnhat(int x[0], int n){
	int Max = x[0];
	for(int i = 0; i < n; i++){
		if(Max < x[i])
		Max = x[i]; 
	}
	return Max;
}

void sapxepgiam(int x[], int n){
	for(int i = 0; i < n -1; i++){
		int vitrinhonhat = i;
		for(int j = i + 1; j < n; j++){
			if(x[j]> x[vitrinhonhat])
				vitrinhonhat = j;
		}
		swap(x[i], x[vitrinhonhat ]); 
	}
}
int giatrinhonhat(int x[0], int n){
	int Min = x[0];
	for(int i = 0; i < n; i++){
		if(Min > x[i])
		Min = x[i]; 
	}
	return Min;
}
void printMang(int x[], int n){
	for(int i = 0 ; i < n ; i++){
		printf("%d ", x[i]); 
	}
}

int main(){
	int a[100], n;
	do{
		printf("Nhap Vao n : ");
		scanf("%d", &n);  
	}while(n<1||n>100);
	for(int i = 0; i < n ; i++){
		printf("a[%d]=", i);
		scanf("%d", &a[i]);  
	}
	printf("\nmang sap xep tang dan la : ") ;
	sapxeptang(a, n);
	printMang(a, n) ;
	
	printf("\nMax la : %d ", giatrilonnhat(a, n));
	
	printf("\nmang sap xep giam dan la : ") ;
	sapxepgiam(a, n);
	printMang(a, n) ;
	
	printf("\nMin la : %d ", giatrinhonhat(a, n));
}
