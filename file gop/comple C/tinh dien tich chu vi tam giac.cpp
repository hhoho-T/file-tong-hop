#include<stdio.h>
#include<math.h>

int main() {
	float AB, BC, CA, C, S, xa, xb, xc, ya, yb, yc, p;
	printf("Nhap vao toa do A = "); 
	scanf("%f%f", &xa, &ya);
	printf("Nhap vao toa do B = "); 
	scanf("%f%f", &xb, &yb);
	printf("Nhap vao toa do C = "); 
	scanf("%f%f", &xc, &yc);
	AB= sqrt(pow(xa- xb, 2) + pow(ya-yb, 2));
	BC= sqrt(pow(xb- xc, 2) + pow(yb-yc, 2));
	CA= sqrt(pow(xc- xa, 2) + pow(yc-ya, 2));
	printf("AB=%.2f BC=%.2f CA=%.2f", AB, BC, CA);
	if(AB + BC> CA && AB + CA > BC && CA + BC > AB) {
		printf("\nla tam giac ABC");
		if(AB==BC || BC == CA || AB == CA) {
			printf("\nABC la tam gic can");
		}else {
			printf("\nko la tam giac can ");
		}
		C = AB + BC +CA;
		printf("\nChu vi cua tam giac ma %.2f", C);
		
		p = C/2;
		S= (p*(p-AB)*(p-BC)*(p-CA));
		printf("\ndien tich cua tam giac la %.2f", S);
	}else{

	}
}
