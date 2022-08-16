#include<stdio.h>


int Kiem_Tra_SNT(int x) {
	if(x<=1) 
		return 0;
		for(int i = 2; i <= x-1; i++) {
			if(x%i==0)
			return 0;
	}
	return 1;
}
int main() {
	int n;
	printf("nhap vao n ");
	scanf("%d", &n);
	int kt =Kiem_Tra_SNT(n);
	if(kt ==0){
		printf("ko la so ngt");
	}else {
		printf(" la snt"); 
	}
}
