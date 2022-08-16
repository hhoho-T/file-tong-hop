#include<stdio.h>
#include<string.h>

/*int main(){
	char hoten[100];
	printf("nhap vao ho ten la : ");
	fgets(hoten , sizeof(hoten ), stdin);
	printf("ho va ten : %s", hoten ); 
	puts(hoten ); 
	int tuoi;
	char ten[50];
	
	printf("Nhap vao tuoi cua ban ");
	scanf("%d", &tuoi)  ;
	getchar();
	printf("Nhap vao ten cua ban ");
	fgets(ten, sizeof(ten), stdin);
	printf("ten cua ban la : "); 
	puts(ten );
	printf("\n tuoi : %d", tuoi)    ;
	
	// tinh do dai ten
	 // khai bao
	 int my_strlen(char x[]){// xay dung ham my_strlen
	 	int count = 0;
	 	while(x[count]!='\0'){// dem khi nao ta gap cac ki tu NULL thif chung ta ngung lai
	 		count++;// NULL la \0 la ki tu ket thuc chuoi
		 }
	 	return count;
	 }
	 // CACH 2
	 void xoadaucach(char x[]){
	 	size_t len = strlen(x);
		 // TITV se xuat ra 5 ki tu neu chay ham tren se co 4 ki tu
		if(x[len - 1]=='\n'){
			x[len-1]='\0';
		} 
	 }
int main(){

	 //char ten[50] = "nguyen ba tri";
	 
	 char ten[50];
	 printf("\n nhap vao ten cua ban ");
	 fgets(ten , sizeof(ten ), stdin); 
	 xoadaucach(ten); 
	 
	printf("\n ten cua ban la : %s", ten );
	
	
	
	// CACH XOA DAU ENTER : C1
//	 printf("\n Do dai cua ten = %d", strlen(ten) -1 ); // - 1 de bo dau cach khi enter xg dong
//	 rintf("\n my_strlen : ") ;
//	  printf("\n ten cua ban la : %s", ten );
//	 printf("\n Do dai cua ten = %d", strlen(ten) -1 ); 





	// CACH 2 DUNG HAM DE XOA
	printf(" \n do dai cua ten la %d", strlen(ten) );
	printf("\n my_strlen : ");
	printf(" \n ten cua ban la : %s", ten);
	printf("\n do dai cua ten la ; %d", strlen(ten ) );  
	
	  
}
// copy ham moi viet
// c2 them ham
int my_strcpy(char x1[], char x2[]){
	size_t len2 = strlen(x2);
	for(int i = 0; i<len2; i++){
		x1[i]=x2[i];
	}
	x1[len2]='\0';
}

int main(){
	char s1[50] ;
	fgets(s1 , sizeof(s1), stdin); 
	char s2[50] ;
	fgets(s2, sizeof(s2), stdin); 
	
	printf("\ns1 = %s", s1 );
	printf("\ns2 = %s", s2);
	
	//strcpy(s2, s2);
	my_strcpy(s2, s1); 
	printf("\n-------");
	printf("\ns1 = %s", s1 );
	printf("\ns2 = %s", s2);
}	  

// so sanh theo bang AScII

// theo 2 cach
int my_strcmp(char x1[], char x2[]){
	int kq=0;
	size_t len1 = strlen(x1);
	size_t len2 = strlen(x2);
	size_t min = len1 < len2?len1:len2;
	
	for(int i =0; i<min ; i++){
		kq=x1[i]-x2[i];
		if(kq!=0)
			break;
		
	}
	if(kq>0)
		return 1;
	else if(kq<0)
		return -1;
	else
	return 0;
}
int main(){
	char s1[100] ;
	char s2[100];
	printf("Nhap vao chuoi s1 :"); 
	fgets(s1 , sizeof(s1), stdin);
	printf("Nhap vao chuoi s2 :") ;
	fgets(s2, sizeof(s2), stdin);
	
	printf("so sanh 2 chuoi la : %d", strcmp(s1, s2));
	
	
	printf("\nso sanh 2 chuoi la* : %d", my_strcmp(s1, s2));

	  
}

int my_strupr(char x[]){
	for(int i =0; i<strlen(x); i++ ){
		if(x[i]>=97&&x[i]<=122){// cac ki tu nam trong khoang tu 99-122 thi phai 
								// tru di 32 de in ra cac chu in hoa
			x[i]=x[i]-32;
		}
	}
}
int my_strlwr(char x[]){
	for(int i =0; i<strlen(x); i++ ){
		if(x[i]>=65&&x[i]<=90){
		// cac ki tu nam trong khoang tu 65-90 thi phai 
		// comg them 32 de in ra cac chu thuong
			x[i]=x[i]+32;
		}
	}
}

int main(){
	char s[100];
	printf("nhap vao ho ten ");
	fgets(s, sizeof(s), stdin);
	
	//strupr(s);
	my_strupr(s) ;
	printf("chuyen thanh chu viet hoa la : %s ", s);
	 
	//strlwr(s);
	my_strlwr(s);     
	printf("chuyen thanh chu thuong hoa la : %s", s);
}

// viet hoa cac chu cai dau tien

void ChuyenDoi(char x[]){
	for(int i =0; i<strlen(x); i++ ){
		if(i==0||(i>0&&x[i-1]==32)){// x[i-1] la ko tu khoang trang space 
									// => 32 la ki tu khoang trang 
			if(x[i]>=97&&x[i]<=122)
				x[i]=x[i]-32; // in ra chu in hoa
			}else{
				if(x[i]>=65&&x[i]<=90)
				x[i]=x[i]+32;
			
		}
	}
}

// DAO NGUOC CHUOI 
// ABCD
// DCBA
int main(){
	char s[100]="";
	printf("Nhap s : "); 
	fgets(s, sizeof(s), stdin);
	
	printf("\n s = %s", s);
	ChuyenDoi(s);
	printf("\n s : %s", s);    
}

void xoaxuongdong(char x[]){
	size_t len = strlen(x);
	
	if(x[len -1]=='\n'){
		x[len - 1]= '\0';
	} 
}
void my_strrev(char x[]){
	size_t len = strlen(x);
	for(int i =0 ; i<len/2; i++){// di tu dau den cuoi dao nguoc mang them 1 lan
		char tem = x[i];
		x[i]= x[len-i-1];
		x[len - i -1]= tem;
	}
}
int main(){
	char s[100];printf(" Nhap vao s "); 
	fgets(s, sizeof(s), stdin);
	xoaxuongdong(s); 
	//strrev(s)-1;
	my_strrev(s); 

	printf("\ns = %s", s);   
	 
}
// TIM KIEM TRONG CHUOI
char* my_strchr(char x1[], char tk){
	for(int i =0;  i<strlen(x1); i++ ){
		if(x1[i]==tk){
			return &x1[i];// con tro
		}
	}
}
int main(){
	char x1[50]="titv.vn";
	char *x2;
	x2=my_strchr(x1, '.');
	printf("\ns=%s", x1) ;
	printf("\ns=%s", x2) ;
}
// CHUOI DOI XUNG
int kiemtramangdoixung(char x[]){
	size_t len = strlen(x);
	for(int i =0 ; i< len/2; i++){
		if(x[i]!=x[len-i-1])
		return 0; //sai thi ve day
	} 
	return 1;// dung thi chay tip
	
}
void xoaxuongdong(char x[]){
	size_t len = strlen(x);
	if(x[len - 1]=='\n'){
		x[len-1]='\0';
	} 
}
int main(){
	char s[50];
	printf("nhap vao s ");
	fgets(s, sizeof(s), stdin);  
	xoaxuongdong(s);
	if(kiemtramangdoixung(s) ){
		printf("day la mang doi xung"); 
	} else{
		printf("day ko phai mang doi xung") ;
	}
}*/
void xoaxuongdon(char x[]){
	size_t len = strlen(x);
	if(x[len - 1] =='\n'){
		x[len-1]='\0';
	} 
}
int main(){
	char chuoi[100];
	char chuoi_con[100];
	printf("nhap vao chuoi");
	fgets(chuoi , sizeof(chuoi ), stdin);
	printf("Nhap vao chuoi can tim");
	fgets(chuoi_con, sizeof(chuoi_con), stdin); 
	xoaxuongdon(chuoi_con );
	char *kq=strstr(chuoi , chuoi_con);
	if(kq!=NULL ){
		printf("tim thay chuoi con !");
		printf("\n");
		printf("%s", kq);   
	}    else{
		printf("ko tim thay chuoi con !"); 
	}
}

