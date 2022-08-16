#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	FILE *f;
	// 1 - tao
	// 2 - mo file
	f = fopen("hello word.exe", "r");
	if(f== NULL){
		printf("\n loi tao hoac mo file");
		exit(1); 
	} 
	// 3 doc va ghi
	char n[100];
	printf("\n Nhap vao so n: "); scanf("%s", n);
	
	fprintf(f, "%s", n);
	   
	// 4 - dong file
	fclose(f); 
}

