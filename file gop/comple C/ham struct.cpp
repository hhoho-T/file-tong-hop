#include<stdio.h>

struct Ngay{
	int ngay;
	int thang;
	int nam;
};
void inputNgay(struct Ngay &d){
	printf("Nhap vao ngay : ");
	scanf("%d", &d.ngay); 
	
	printf("Nhap vao thang: ");
	scanf("%d", &d.thang); 
	
	printf("Nhap vao nam : ");
	scanf("%d", &d.nam);  
}
void printfNgay(struct Ngay d){
	printf("%d/%d/%d", d.ngay, d.thang, d.nam); 
}
int checkNgay(struct Ngay d){
	if(d.ngay<0|| d.thang<0||d.nam<0)
		return 0;
	if(d.thang>12)
		return 0;
	
	if(d.thang==2){
		
	
	if(d.thang==2&&(d.nam%4==0&&d.nam%100!=0))
		if(d.ngay>29)
			if(d.ngay>28)
		
			return 0;
	}
		
	if(d.thang==1||d.thang==3||d.thang==5||d.thang==7||d.thang==8||d.thang==12){
		if(d.ngay>31)
			return 0;
	}
	if(d.ngay>30)
		return 0;
	
	return 1;
		
	
}

int main(){
	struct Ngay myNgay;
	inputNgay(myNgay);
	printf("\n------\n");
	printfNgay(myNgay ); 
	printf("\nKiem tra ngay co hop le ko : %s", checkNgay(myNgay)==1?"HOP lE":"KO HOP LE" );   
}
