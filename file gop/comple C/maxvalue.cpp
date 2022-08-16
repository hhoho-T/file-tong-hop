#include<stdio.h>
#include<math.h>

int main() {
	int n;
	scanf("%d", &n);
	int a[1000];
	for(int i = 0; i <n; i++) {
		scanf("%d", &a[i]);
	}
	float maxValue = a[0];
	for(int i = 0; i < n; i++) {
		if(a[i] > maxValue, a[i] > 0, a[i]%2==0){
			a[i]= maxValue;
		}
	}
	printf("%.2f ", maxValue);
}

