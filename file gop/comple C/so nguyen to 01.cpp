#include<stdio.h>
#include<math.h>

int main() {
	int n;
	printf("nhap vao n ");
	scanf("%d", &n);
	if(n <= 1) {
		return 0;
	} 
	for(int i = 0; i <= sqrt(n); i++) {
		if(n%i==0) {
			printf("ko la snt");
		}else {
			printf("la snt");
		}
	}
}
