
//#30
#include "stdio.h"

int soNgayCuaThang(int thang, int nam){
	switch(thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			return ((nam % 400 ==0)||(nam%4==0 && nam %100 !=0))?29:28;
		default:
			return -1;			
	}
}
int NgayTrongNam(int ngay, int thang, int nam) {
	int ntn = 0;
	for(int i=1; i<thang; i++) {
		ntn+=soNgayCuaThang(i , nam);
	}
	ntn+=ngay;
	return ntn;
}
 int NgayTruocDo(int ngay, int thang, int nam) {
	if(ngay==1) {
		if(thang==1) {
			ngay =31;
			thang=12;
			nam--;
		}else{
			thang--;
			ngay=soNgayCuaThang(thang, nam);
		}
	}else {
		ngay--;
		
	}
		printf("\n so ngay trc do : %d/%d/%d", ngay , thang , nam);
}
int NgaysauDo(int ngay, int thang, int nam) {
	int nct = soNgayCuaThang(thang, nam);
		if(ngay == nct) {
			if(thang ==12) {
				ngay=1;
				thang=1;
				nam++;
			}else{
				ngay=1;
				thang++;
			}
		}else{
			ngay++;
	}
		printf("\n so ngay sau do : %d/%d/%d", ngay , thang , nam);
}

int main() {
	int ngay , thang, nam;
	do{
	printf("nhap vao so thang do la : ");
	scanf("%d%d%d", &ngay, &thang, &nam);
	}while(ngay <1 || ngay>31 ||thang <1 || thang >12 || nam <1);
	// a so can tim trong thang
	printf("\n so ngay cua thang : %d", soNgayCuaThang(thang, nam));
	// b tim ngay trong nam
	printf("\n Ngay trong nam : %d", NgayTrongNam(ngay, thang , nam));
	// c ngay trc
	NgayTruocDo(ngay, thang, nam);
	// d so ngay sau
	NgaysauDo(ngay, thang , nam);

}
