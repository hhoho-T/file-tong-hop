#include <stdio.h>
#define MAX 1000000
int snt[MAX];
int main(){
int l, h, c, dem = 0;
printf("Nhap l, h, c: ");
scanf("%d%d%d", &l, &h, &c);
int i, j;
for(i = (l > 2)?l:2; i < h; i++)
snt[i] = 1;
for(i = 2; i < h; i++)
for( j = i*i; j < h; j+=i)
snt[j] = 0;
for(i = (l > 2)?l:2; i < h; i++){
if(snt[i] == 1){
dem++;
printf("%5d", i);
}
if(dem == c){
printf("\n");
dem = 0;
}
}
return 0;
}
