#include"stdio.h"
#include"math.h"
int main() {
	float a, b, c, x1, x2, delta;
	printf("nhap a =");
	scanf("%f", &a);
	printf("nhap b =");
	scanf("%f", &b);
	printf("nhap c =");
	scanf("%f", &c);
	delta = b*b - 4*a*c;
	if (delta>0){
		x1= ((-b+sqrt(delta))/(2*a));
		x2= ((-b-sqrt(delta))/(2*a));
		printf("pt co 2 ngiem x1=%f x2=%f", x1, x2);
	}else if(delta<0){
		printf("pt vo nghiem");
	}else (delta = 0);
	
		x1= -b/(2*a);
		printf("pt co ngiem kep x1=%f", x1);
	
}

