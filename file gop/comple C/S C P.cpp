#include<stdio.h>

int Kiem_Tra_SCP(int x){
	if(x<4)
	return 0;
	int kc = (int x)sqrt(x);
	for(int i = 4 ; i <= n; i++) {
		if(pow(kc,2)==x)
		return 0;
	}
	return 1;
}

int main() {
	int n;
	printf("nhap vao n");
	scanf("%d", &n);
	while (n<0) {
		for(int j = 4; j <= n; j++) {
			int kt = Kiem_Tra_SCP(j);
			if(kt=1){
			}
		}
	}
	printf("%d", j);
}
