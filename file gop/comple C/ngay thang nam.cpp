#include<stdio.h>
int main() {	
	int thang ,nam;
	printf("nhap vao thang la ");
	scanf("%d", &thang);
	printf("nhap vao nam la ");
	scanf("%d", &nam);
	switch (thang) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
					printf("co 31 ngay");
					break;
			case 4:
			case 6:
			case 9:
			case 11:
					printf("thang co 30 ngay");
					break;
			case 2:
							if((nam%400==0) || (nam%4==0) && nam%100!=0){
									printf("co 29 ngay");
							}else {
									printf("coo 28 ngay");
							}
							break;
		default :
			printf("ko cos so");
			break;
		}
}
