#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	int a ,b, c, d, t;
	printf("Nhap vao a, b , c");
	scanf("%d%d%d%d", &a,&b, &c, &d);
	if(a<b){
		t = a;
		a = b;
		b = t;
	}  
	
	
	if(a<c){
		t = a;
		a = c;
		c = t;	
	}
	
	
	
	
	if(b < c){
		t = b;
		b = c;
		c = t;
	}
	if(a < d){
		t = a;
		a = d;
		d = t;
	}
	if(b < d){
		t = b;
		b = d;
		d = t;
	}if(c < d){
		t = c;
		c = d;
		d = t;
	}
	printf(" tang dan la :%d %d %d %d\n",d,  c, b, a); 
}
