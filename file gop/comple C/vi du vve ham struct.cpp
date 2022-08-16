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
	
	int USCLN=1;
	if(a==0||b==0){
		USCLN = (a+b);
	}  else{
		while(a!=b){
			if(a>b){
				a = a-b;
			}else{
				b =b -a;
			}
		}
		USCLN = a;
	}
	ps->tuso/=USCLN ;
	ps->mauso/=USCLN ;
}
void Nhapphanso(Phanso *ps){
	printf("\nNhap tu so la : ");
	scanf("%d", &ps->tuso);
	do{
		printf("Nhap vao mau so la : ");
		scanf("%d", &ps->mauso);  
	}  while(ps->mauso==0);
}
void inphanso(Phanso ps){
	if(ps.mauso<0){
		ps.tuso*=-1;
		ps.mauso*-1;
	}
	rutgon(&ps);
	if(ps.mauso==1){
		printf("%d", ps.tuso); 
	}  else{
		printf("%d/%d", ps.tuso, ps.mauso);
	}
}
Phanso conghaiphanso(Phanso ps1, Phanso ps2){
	Phanso ketqua;
	//a/b+c/d=a*d+c*b/b+d;
	ketqua.tuso=ps1.tuso*ps2.mauso + ps2.tuso*ps1.mauso;
	ketqua.mauso= ps1.mauso*ps2.mauso;
	return ketqua;
}
Phanso truhaiphanso(Phanso ps1, Phanso ps2){
	Phanso ketqua;
	//a/b+c/d=a*d+c*b/b+d;
	ketqua.tuso=ps1.tuso*ps2.mauso-ps2.tuso*ps1.mauso;
	ketqua.mauso= ps1.mauso*ps2.mauso;
	return ketqua;
}

Phanso nhanhaiphanso(Phanso ps1, Phanso ps2){
	Phanso ketqua;
	//a/b+c/d=a*d+c*b/b+d;
	ketqua.tuso=ps1.tuso*ps2.tuso;
	ketqua.mauso= ps1.mauso*ps2.mauso;
	return ketqua;
}
Phanso chiahaiphanso(Phanso ps1, Phanso ps2){
	Phanso ketqua;
	//a/b+c/d=a*d+c*b/b+d;
	ketqua.tuso=ps1.tuso*ps2.mauso;
	ketqua.mauso= ps1.mauso*ps2.tuso;
	return ketqua;
}
int main(){
	Phanso ps1, ps2;
	printf(" \nnhap vao phan so thu nhat la : ");
	Nhapphanso(&ps1);
	printf(" \nnhap voa phan so thu 2 la : ");
	Nhapphanso(&ps2);
	
	inphanso(ps1);
	printf("\t");
	inphanso(ps2);
	printf("\n");
	printf("cong hai phan so la : "); 
	inphanso(ps1) ; printf("+"); inphanso(ps2); printf("="); 
	inphanso(conghaiphanso(ps1, ps2) );
	printf("\n");
	printf("tru hai phan so la : "); 
	inphanso(ps1) ; printf("-"); inphanso(ps2); printf("="); 
	inphanso(truhaiphanso(ps1, ps2) );
	printf("\n");
	printf("nhan hai phan so la : "); 
	inphanso(ps1) ; printf("*"); inphanso(ps2); printf("="); 
	inphanso(nhanhaiphanso(ps1, ps2) );
	printf("\n");
	printf("chia hai phan so la : "); 
	inphanso(ps1) ; printf("/"); inphanso(ps2); printf("="); 
	inphanso(chiahaiphanso(ps1, ps2) ); 
}
