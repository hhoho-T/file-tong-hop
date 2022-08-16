#include<stdio.h>
#include<math.h>

struct Phanso{
	int tuso;
	int mauso;
};
void Rutgon(Phanso *ps){
	int a = ps->tuso;
	int b = ps->mauso;
	a = abs(a);
	b = abs(b);
	int USCLN = 1;
	if(a == 0||b == 0){
		USCLN = (a + b);
	} else{
		while(a!=b){
			if(a>b){
				a = a - b;
			}else{
				b = b -a ;
				
			}
			USCLN = a;
		}
	}
	ps->tuso/=USCLN ;
	ps->mauso/=USCLN ;
}

void Nhapphanso(Phanso *ps){
	printf("\nNhap vao tu so : ");
	scanf("%d", &ps->tuso);
	do{
		printf("\nNhap vao mau so : ");
		scanf("%d", &ps->mauso);  
	}  while(ps->mauso==0);
}
void XuatPhanso(Phanso ps){
	if(ps.mauso<0){
		ps.tuso*=-1;
		ps.mauso*-1;
	}
	Rutgon(&ps);
	if(ps.mauso==1){
		printf("%d", ps.tuso) ;
	} else{
		printf("%d/%d", ps.mauso) ;
	}
}
Phanso Conghaiphanso(Phanso ps1, Phanso ps2){
	Phanso Ketqua;
	Ketqua.tuso = ps1.tuso*ps2.mauso + ps2.tuso*ps1.mauso;
	Ketqua.mauso= ps1.mauso*ps2.mauso;
	return Ketqua ;
}
int main(){
	Phanso ps1, ps2;
	printf("\n nhap vao phan so thu nhat");
	Nhapphanso(&ps1);
	printf("\n nhap vao phan so thu hai");
	Nhapphanso(&ps2);
	
	printf("\n phan so vua nhap la ");
	XuatPhanso(ps1);
	printf("\t"); 
	XuatPhanso(ps2);
	printf("\n cong hai phan so "); 
	XuatPhanso(Conghaiphanso (ps1, ps2) );     
	
}
