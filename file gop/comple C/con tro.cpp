#include<stdio.h>

int main(){
	int var;
	printf("nhap var = ");
	scanf("%d", &var);
	printf("\n gia tri cua var = %d", var);
	printf("\n dia chi cua bien var trong bo nho la :%p", &var); 
	
	int *pc , c ;// * pc la bien luu tru dia chi , con c la bien luu tru gia tri
	
	c = 5;
	pc = &c;// dia chi cua bien c se dua vao bien pc
	
	printf("\n gia tri cua c la :%d ", *pc) ;
	printf("\n dia chi cua bien c la : %p", pc); 
	*pc = 1;
	printf("\n gia tri cua c la :%d ", c) ;
	printf("\n dia chi cua bien *pc la : %d", *pc);
}
