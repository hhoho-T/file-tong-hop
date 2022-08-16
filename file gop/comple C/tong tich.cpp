#include<stdio.h>

int main() {
	// cau a
	int n;
	printf("nhap vao so la : "); 
	scanf("%d", &n);
	float a[1000];
	for(int i = 0; i<n; i++){
		scanf("%f", &a[i]);
	
	} 
	printf("day so vua nhap la : ");
	for(int i=0; i<n; i++){
		printf("%.2f ", a[i]);
	}
	//cau b
	int sum =0;
	for(int i=0; i<n; i++) {
		sum+=a[i];
	}
	printf("\nsum=%d", sum);
	//cau c
	float tongsoduong=0;
	int k=0;

	for(int i=0; i<n; i++){
		if(a[i]>0){
			tongsoduong+=a[i];
			k+=1;
		}
	}
	float trungbinhsoduong=tongsoduong/k;
	printf("\ntbcong la =%.2f",trungbinhsoduong );
	// cau d
	int demsoam = 0;
	for(int i=0; i<n; i++){
	if(a[i]<0){
		demsoam+=1;
	}
	}
	int socacsoam=demsoam;
	printf("\nso cac so am la :%d", socacsoam);
	// cau e
	int max=a[0],p;
	int min = a[0];
	for(int i=0; i<n; i++){
		if(max<a[i]){
			max = a[i];
		}else if(min >a[i]) {
			min=a[i];
		}
	}
	printf("\ngia tri lon nhat la : %d", max);
	printf("\ngia tri nho nhat la : %d", min);
	//cau f
	int tongcongtru=0;
	int demcongtru=0;
	for(int i=0; i<n; i++){
		tongcongtru-+a[i];
		demcongtru+=1;
	}
	printf("\ntong la :%d", tongcongtru);
}
