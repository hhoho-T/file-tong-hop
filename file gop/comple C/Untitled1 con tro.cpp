#include<stdio.h>

int main(){
//	int x[]={1,2 ,3 ,4 ,5};
//	printf("Mang x : \n") ;
//		for(int i =0; i< 5; i++){
//			printf("%d ", &x[i]); 		
//		}
//			
//	printf("\n dia chi cua x la : %p", &x);
//	printf("\n dia chi cua x[0] la : %p", &x[0]);  


	int x[10];
	int n =10;
	
	printf("nhap vaoo cac gia tri cua mang:");
	for(int i=0; i< n; i++){
		printf("a[%d]=", i);
		//scanf("%d", &x[i]) ; 1 trong 2 kieu
		
		scanf("%d", x+i); //x+i la bien con tro
	} 
	printf(" Gia tri cua mang la : ");
	
	for(int i =0; i < n; i++){
		//printf("%d ", x[i]); 
		printf("%d ", *(x+i)); 
	} 
}
