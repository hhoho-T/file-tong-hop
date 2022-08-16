#include<stdio.h>
//truyen tham tri
void swap_1(int a, int b) {
	int temp = a;
	a=b;
	b= temp;
}
// truyen tham chieu
void swap_2(int &a, int &b) {
	int temp = a;
	a=b;
	b= temp;
}
// ham con tro
void swap_3(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int a=5;
	int b=10;
	
	printf("\n truoc khi swap_1 : a=%d va b=%d", a,b);
	swap_1(a, b); 
	printf("\n sau khi swap_1 : a=%d va b=%d", a,b);
	
	printf("\n truoc khi swap_2 : a=%d va b=%d", a,b);
	swap_2(a, b); 
	printf("\n sau khi swap_2 : a=%d va b=%d", a,b);
	
	printf("\n truoc khi swap_3 : a=%d va b=%d", a,b);
	swap_3(&a, &b); 
	printf("\n sau khi swap_3 : a=%d va b=%d", a,b);
}
