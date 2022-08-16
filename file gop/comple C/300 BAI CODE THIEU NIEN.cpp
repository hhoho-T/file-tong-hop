#include<stdio.h>
#include<math.h>
#include<conio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	// bai 1
	/*float S, R, V;
	printf("Nhap vao dien tich s = ");
	scanf("%f", &S); 
	V = (4*M_PI*(pow(sqrt(S /(4*M_PI)), 3) )/3);
	
	printf("\nthe tich mat cau la : %f", V); 
	
	
	// bai 2
	float XA, XB, YA, YB, AB;
	printf("Nhap vao toa do cua A : ") ;
	scanf("%f%f", &XA, &YA);
	printf("Nhap vao toa do cua B : ") ;
	scanf("%f%f", &XB, &YB); 
	 AB = sqrt((XB-XA)*(XB-XA) + (YB-YA)*(YB-YA))  ;
	 printf("Khoang cach AB la : %f", AB );
	 
	 
	// bai 3;
	float Xc, Yc, R, Xm, Ym, CM;
	printf("Nhap vao toa do cua C : "); 
	scanf("%f%f", &Xc , &Yc ); 
	printf("Nhap vao toa do cua M : "); 
	scanf("%f%f", &Xm , &Ym );
	printf("Nhap vao ban kinh R : "); 
	scanf("%f", &R  );
	printf("Khoang cach CM : ") ;
	CM = sqrt((Xm -Xc)*(Xm -Xc) + (Ym -Yc)*(Ym -Yc)) ;
	printf("%.2f", CM ); 
	if(CM == R){
		printf("\nNam tren duong tron"); 
	}else if(CM <R){
		printf("\nNam trong duong tron");
	}else{
		printf("\nNam ngoai duong tron");
	}
	
	// baii 4



 

	float a, b, c, p, S;
	printf("\nNhap canh a: ");
	scanf("%f", &a);
 
	printf("\nNhap canh b: ");
	scanf("%f", &b);
 
	printf("\nNhap canh c: ");
	scanf("%f", &c);
 
	 	if(a + b <= c || a + c <= b ||  b + c <= a)
	{
		printf("\nTam giac khong hop le. Xin kiem tra lai !");
	}
	else
	{
		printf("\nDay la tam giac: ");
	    if((a == b) && (b == c))
		{
			printf("Deu");
		}
	
		else if(a == b || a == c || b == c)
		{
			printf("\nTam giac can");
		}
		
		else if(a * a + b * b == c * c || a * c + c * c == b * b || b * b + c * c == a * c)
		{
			printf("\nTam giac vuong");// dung pytago :)
		}
		else
		{
			printf("\nTam giac thuong");
		}
}
 
 
	getch();
	
	p = (a + b + c)/2;
	S =  sqrt(p*(p-a)*(p-b)*(p-c))  ;
	printf("\n Dien Tich tam giac la : %.2f", S );
	return 0;

//	// bai tap dat Mat Khau
//	int len = 0;
//	char s[100];
//	scanf("%s", s);
//	while(s[len] !='\0'){
//		len++;
//	}
//	char kytu;
//	for( kytu = 32 ; kytu <47; kytu++){
//		
//		
//	}
//	if(len>=10 &&kytu ){
//		printf("Mat khau manh"); 
//	}else{
//		printf("Mat khau yeu") ;
//	}

	// Bai 5
	
	
	float xA, yA, xB, yB, xC, yC, xM, yM, Sabc, Smab, Smbc, Smca;
	printf("Nhap toa do cua A : ");
	scanf("%f%f", &xA, &yA); 
	printf("Nhap toa do cua B : ");
	scanf("%f%f", &xB, &yB);
	printf("Nhap toa do cua C : ");
	scanf("%f%f", &xC, &yC);
	printf("Nhap toa do cua M : ");
	scanf("%f%f", &xM, &yM);
	Sabc = 1/2*abs(xA*yB - xB*yA + xB*yC-xC*yB + xC*yA -xA*yC);
	Smab = 1/2*abs(xM*yA - xA*yM + xA*yB-xB*yA + xB*yM -xM*yM);
	Smbc = 1/2*abs(xM*yB - xB*yM + xB*yC-xC*yB + xC*yM -xA*yM);
	Smca = 1/2*abs(xM*yC - xC*yM + xC*yA-xA*yC + xA*yM -xM*yA);
	if(Smab + Smbc + Smca >Sabc ){
		printf("diem m nam ngoai tam giac ABC") ;
		
	}else if(Smab + Smbc + Smca <Sabc ){
		printf("diem m nam  tam giac ABC") ;
		}else if(Smab + Smbc + Smca ==Sabc ){
		printf("diem m nam tren tam giac ABC") ;
	}
	
	// bai 6 
	int a, b, c, t;
	printf("Nhap a , b , c");
	scanf("%d%d%d", &a, &c, &b);
	if(a<b){
		t = a;
		a = b;
		b = t;
	}  
	if(a<c){
		t = a;
		a = c;
		c = t;
	}
	if(b<c){
		t = b;
		b = c;
		c = t;
	}
	printf("Tang dan : %d %d %d\n", c, b , 
	
	// bai 7;
	float a, b, x;
	printf("Nhap vao a , b");
	scanf("%f%f", &a, &b);  
	
	if(!a&&!b){ // !a = a!=0;
	printf("vo nghiem");	
	}else{
		x = -b/a;
		printf("x = %g\n", x);
		
		
		// cach 2
//		 !a && ( !b && printf( "Vo dinh\n" ) || printf( "Vo nghiem\n" ) )
//		|| printf( "x = %g\n", -b/a );
	}
	// bai 8
	
	float a , b, c, x1, x2, delta;
	printf("Nhap vao a , b, c : ");
	scanf("%f%f%f", &a, &b, &c);
	delta = - b - 4*a*c;
	if(delta >0){
		printf("Phuong trinh co 2 nghiem phan biet x1, x2"); 
		x1 = (-b + sqrt(delta))/2*a;
		x2 = (-b - sqrt(delta))/2*a;
		printf("\nx1 = %g\n x2 = %g\n", x1, x2); 
	}else if(delta ==0){
		printf("phuong trinh co nghiem kep x1"); 
		x1 = -b /2*a;
		printf("x1 = %g\n"); 
	}else if(delta <0){
		printf(" Phuong trinh vo nghiem") ;
	}
	 cach 2
		printf( "Nhap a, b, c: " );
	scanf( "%f%f%f", &a, &b, &c );
	if ( !a )
	if ( !b ) printf( c ? "Vo nghiem\n" : "Vo dinh\n" );
	else printf( "x = %g\n", -c / b );
	else {
	float d = b * b - 4 * a * c;
	if ( d > 0 )
	printf( "x1 = %g\nx2 = %g\n", ( -b + sqrt( d ) ) / ( 2 * a ),
	( -b - sqrt( d ) ) / ( 2 * a ) );
	else ( !d ) ? printf( "x1 = x2 = %g\n", -b / ( 2 * a ) )
	: printf( "Vo nghiem\n" );
}
	 
	 // bai 9;
	double goc;
	
	printf("Nhap vao so goc (phut) : ");
	scanf("%lf", &goc );
	
	goc /=60;
	printf("x thuoc goc thu %d\n", (int)ceil(goc /90)%4);
	printf("cos(x) = %g\n", cos(goc *M_PI/180 ));    
	 */
	 // bai 10
	 
	 //cach 1;
	 
	 // dung SWITCH//
	 
//	 int m;
//	 printf("Nhap vao thang : ");
//	 scanf("%d", &m);
//	 switch(m){
//	 	case 1:
//	 	case 2:
//		case 3:
//		case 4:
//			printf("quy I") ;
//			break;
//			
//			
//		case 5:
//	 	case 6:
//		case 7:
//		case 8:
//			printf("quy II") ;
//			break;
//		case 9:
//	 	case 10:
//		case 11:
//		case 12:
//			printf("quy III") ;
//			break;
//		default :
//			printf("ban da nhap sai ", m);	
//				break;
//	 }  
//	  
	
	
	// cach 2
	/*int m;
	printf( "Nhap thang: " );
	scanf( "%d", &m );
	printf( "Thang %d thuoc quy %d\n", m, (( m - 1 ) / 4 )+ 1 );
	return 0;*/
	
	
	// TIM MAT MA PHU HOP CHO BAO HIEM
	/*unsigned pox,t;
	unsigned long sin;
	while(1){
		printf("Nhap vao so the bao hiem (Nhap 0 de thoat) : ");
		scanf("%lu", &sin);
		if(!sin) break;
		unsigned sum= sin%10;// LAY CHU SO CUOI CUNG CUA 1 SO
		sin/=10;// LOAI BO CHU SO CUOI CUNG CUA 1 SO
		for(pox=0;pox<8&&sin>0; sin/=10, ++pox){// pox CHAY TU 0->8 VA DK SIN>0 SAU DO LOAI BO CHU SO CUOI
		t = sin%10;
		if(pox%2) sum +=t;
		else sum+=(2*t)/10+(2*t)%10; //  /10 LAY CHU SO HANG CHUC ; %10 LAY CHU SO HANG DON VI
		}
		printf("SIN %s hop le", 
		(pox <8||sin>0||sum%10)?"khong":""); 
		
	}
	
	// bai 11
	// TRO CHOI BAO KEO DA
	
	printf("Game bua keo bao\n");
	
	char nguoi, may;
	unsigned n, m;
	srand(time(NULL));// thiet lap mam ngau nhien(seed) cho 1 loat so ngau nhien boi rand()
					// thuoc thu vien time.h
	n = m = 0;
	while(1){
		printf("Nhap vao ky tu(a - b -c )");
		scanf("%c", &nguoi );//Ðôi lúc cung dùng scanf( "%c%*c", &human ); d? b? qua ký t? '\n'
		while(getchar()!='\n'){}
		switch(nguoi ){
			case 'a':
				switch(rand()%3){
					case 0 : may = 'a'; break;
					case 1 : may = 'b'; n++;break;
					case 2 : may = 'c'; m++;
				}
				break;
			case 'b':
				switch(rand()%3){
					case 0 : may = 'a'; m++;break;
					case 1 : may = 'b'; break;
					case 2 : may = 'c'; n++;
				}
				break;
				case 'c':
					switch(rand()%3){
					case 0 : may = 'a'; n++;break;
					case 1 : may = 'b'; m++;break;
					case 2 : may = 'c'; 
				}break;
				default: return 0;
		}  
		printf("may : %c\n", may);
		printf("ty so : %u- %u\n", n ,m);  
	}
	
	
	// Bài 12
	// giai he phuong trinh
	
	int a1, a2, b1, b2, c1, c2;
	printf("Nhap vao he so 1 : ");
	scanf("%d%d%d", &a1, &b1, &c1);
	printf("Nhap vao he so 2 : ");
	scanf("%d%d%d", &a2, &b2, &c2);
	
	int x, y , Dx, Dy, D;
	D = (a1*b2)-(a2*b1);
	Dx = (c1*b2)-(c2*b1);
	Dy= (a1*c2)-(a2*c1);
	if ( !D ) printf( ( !Dx && !Dy ) ? "Vo dinh\n" : "Vo nghiem\n" );
	else
	printf("x = %g", x = Dx/D);
	printf("y = %g", y = Dy /D)  ;
	
	
	// Bài 13
	// kiem tra ngay thu co hop le ko
	
	unsigned ngay , thang , nam, gioihan, thu;
	printf("Nhap vao ngay thang nam : ");
	scanf("%u%u%u", &ngay , &thang , &nam);
	
	if(nam<1582){
		printf("nam ko hop le ");
		return 1; 
	} 
	if(thang<1||thang>12){
		printf("thang ko hop le");
		return 2; 
	}
	switch(thang){
		case 4: case 6: case 9: case 11: gioihan = 30; break;
		case 2: gioihan = 28 +((nam%4==0)||nam%100&&nam%400==0); break;
		default : gioihan = 31;
		}
		if(ngay <1||ngay >gioihan ){
			printf("Ngay ko hop le ");
			return 3; 
	}
	printf(" hop le\n");
	// Công thuc Zeller 
	nam -= (14-thang)/12;
	thang += 12* ((14-thang )/12)-2;
	thu = (ngay + nam + nam/4 - nam /100 + nam/400+(31*thang)/12)%7;
	if(!thu) printf("CHU NHAT ");
	else printf("Thu : %u\n", thu+1);*/  
	
	// bai 14
	// ngay mai  va ngay hom qua
	unsigned ngay , thang , nam, gioihan;
	do{
		
		printf("Nhap vao ngay thang nam : ");
		scanf("%u%u%u", &ngay , &thang , &nam);
	}while(ngay<1 || ngay>31 ||thang<1 || thang>12 || nam<1);
	songay( ngay, thang, nam); 

}

int songay(int ngay, int thang, int nam){
	int gioihan;
	switch(thang){
		case 4: case 6: case 9: case 11: gioihan = 30; break;
		case 2: gioihan = 28 +((nam%4==0)||nam%100&&nam%400==0); break;
		default : gioihan = 31;
		}
			printf("%u/%u/%u", ngay, thang, nam) ;
	}
	

	
		

	  
	

	
	


