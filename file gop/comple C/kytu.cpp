#include "stdio.h"
#include "stdlib.h"
int main(){
	FILE *f;
	
	// 1 - Tao file
	// 2 - Mo file
	f = fopen("kk.txt", "w");
	if(f == NULL){
		printf("\n Loi tao hoac mo file");
		exit(1);
	}
	
	// 3 - Doc hoac ghi
	int n;
	printf("\nNhap vao so n: "); scanf("%d", &n);
	
	fprintf(f, "%d", n);
	
	// 4 - Dong file
	fclose(f);
	
	return 0;
}
