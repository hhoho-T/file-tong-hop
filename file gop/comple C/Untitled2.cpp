#include "stdio.h"
#include "string.h"
#include "time.h"
struct date{
	int ngay;
	int thang;
	int nam;
};
struct SinhVien{
	int id;
	char ten[50];
	char gioiTinh[5];
	date ngaySinh;
	int tuoi;
	float diemMon1;
	float diemMon2;
	float diemMon3;
	float diemTrungBinh;
	char hocLuc[10];
	char maLop[30];
};

typedef SinhVien SV;

void nhapSinhVien(SV &sv);
void inSinhVien(SV sv);
void tinhTuoi(SV &sv);
void tinhDiemTrungBinh(SV *sv);
void xepLoai(SV &sv);
void capNhatSinhVien(SV &sv);
void nhapDanhSachSinhVien(SV ds[], int &n);
void xuatDanhSachSinhVien(SV ds[], int n);
float timMax_DiemTrungBinh(SV ds[], int n);
int timMin_Tuoi(SV ds[], int n);
void xuatDanhSachSinhVienXepLoaiGioi(SV ds[], int n);
void xuatDanhSachSinhVienTheoLop(SV ds[], int n, char lop[]);
int timSinhVienTheoTen(SV ds[], int n, char ten[]);
void xoaSinhVienTheoId(SV ds[], int &n, char ten[]);
void sapXepDanhSachSinhVienTheoDTB(SV ds[], int n);
void sapXepDanhSachSinhVienTheoTen(SV ds[], int n);

void xoaXuongDong(char x[]){
	size_t len = strlen(x);
	if(x[len-1] =='\n'){
		x[len-1] = '\0';
	}
}

void nhapSinhVien(SV &sv){
	printf("\nID : ");  scanf("%d", &sv.id);
	printf("\nTen : "); fflush(stdin); fgets(sv.ten, sizeof(sv.ten), stdin);   xoaXuongDong(sv.ten); 
	printf("\nGioi Tinh : "); fflush(stdin); fgets(sv.gioiTinh, sizeof(sv.gioiTinh), stdin);   xoaXuongDong(sv.gioiTinh); 
	printf("\nNgay sinh : "); scanf("%d/%d/%d", &sv.ngaySinh.ngay, &sv.ngaySinh.thang, &sv.ngaySinh.nam);
	printf("\nDiem mon 1 : "); scanf("%f", &sv.diemMon1);  
	printf("\nDiem mon 2 : "); scanf("%f", &sv.diemMon2);
	printf("\nDiem mon 3 : "); scanf("%f", &sv.diemMon3);
	printf("\nMa lop : "); fflush(stdin); fgets(sv.maLop, sizeof(sv.maLop), stdin);   xoaXuongDong(sv.maLop); 
}
void inSinhVien(SV sv){
	printf("\n%d \t %s \t %s \t %d/%d/%d \t %d \t %.2f \t %.2f \t %.2f \t %s \t %s", sv.id, sv.ten, sv.gioiTinh, sv.ngaySinh.ngay, sv.ngaySinh.thang, sv.ngaySinh.nam, sv.tuoi, sv.diemMon1, sv.diemMon2, sv.diemMon3, sv.diemTrungBinh, sv.hocLuc, sv.maLop); 
}



int main(){
	SV sv1;
	nhapSinhVien(sv1);
	  
	inSinhVien(sv1);  
}
