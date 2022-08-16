#include<stdio.h>
#include<math.h>

struct Phanso{
	int tuso;
	int mauso;
};

void rutgon(Phanso *ps){
	int a = ps->tuso;
	int b = ps->mauso;
	 a = abs(a);
	 b = abs(b);
	int USCLN =1;  
	if(a==0||b==0){
		USCLN =(a+b);
	}else{
		while(a!=b){
			if(a>b){
				a =a -b;
			}else{
				b = b -a;
			}
			USCLN =a;
		}
	}
	ps->tuso/=USCLN ;
	ps->mauso/=USCLN;
}
void Nhapphanso(Phanso *ps){
	printf("\nNhao vao tu so la : ");
	scanf("%d", &ps->tuso);
	do{
		printf("\nNhao vao mau so la : ");
		scanf("%d", &ps->mauso);
	}  while(ps->mauso==0);
}
void inphanso(Phanso ps){
	if(ps.mauso<0){
		ps.tuso*=-1;
		ps.mauso*=-1;
		
	}
	rutgon(&ps) ;
	if(ps.mauso==1){
		printf("%d", ps.tuso); 
	}else{
		printf("%d/%d", ps.tuso, ps.mauso); 
	}
	 
}

Phanso congHaiPhanSo(Phanso ps1, Phanso ps2){
	Phanso ketQua;
	// a/b + c/d => (a*d + c*b)/(b*d)
	ketQua.tuso = ps1.tuso*ps2.mauso + ps2.tuso*ps1.mauso;
	ketQua.mauso = ps1.mauso*ps2.mauso;
	return ketQua;
}



int main(){
	Phanso ps1, ps2;
	printf("\nNhap vao phan so thu nhat") ;
	Nhapphanso(&ps1);
	printf("\nNhap vao phan so thu hai") ;
	Nhapphanso(&ps2);
	printf("Phan so vua nhap la "); 
	inphanso(ps1);
	printf("\t") ;
	inphanso(ps2);  
	printf("\n cong 2 phan so: ");
	inphanso(ps1); printf("+");inphanso(ps2); printf("="); inphanso(congHaiPhanSo (ps1, ps2) );     
	
	
}

