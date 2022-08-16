#include<stdio.h>
int main(){
    for (int i=105;i<=111;i+= 3){
   printf("%c", char (i));
    if(i==105)
    printf(" ");}
    printf("%c", char (118));
    for (int i=101;i<=121;i+= 20){
       printf("%c", char (i));
        if(i==101)
        printf(" ");
    }
    for (int i=111;i<=117;i+=6){
       printf("%c", char (i));
   	}
    return 0;
}

