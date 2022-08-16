#include<stdio.h>
#include<string.h>


//dung them ham khac

/*void my_strcpy(char x1[], char x2[]){
	size_t len2 = strlen(x2) ;
	for(int i =0; i<len2; i++){
		x1[i]=x2[i];
	}
	x1[len2]='\0';
}
int main(){
	char s_1[50]=" Ten cua ban la ";
	char s_2[50]="";
	
	printf("\n s_1 : %s", s_1);
	printf("\n s_2 : %s", s_2);
	
	strcpy(s_2 , s_1);
	printf("\n ------");
	printf("\n s_1 = %s", s_1 );
	printf("\n s_1 = %s", s_1 );
	
	
}
// dem so ki tu
int my_strlen(char x[]){
	int dem =0;
	while(x[dem]!='\0'){
		dem++;
	}
	return dem;
}
int main(){
	char ten[50];
	printf("Nhap vao ten cua ban la : ");
	fgets(ten ,sizeof(ten), stdin);  
	printf("ho va ten : %s", ten ); 
	printf("so ki tu duoc viet la : %d", strlen(ten)-1); 
	
	printf("my_strlen");
	printf("ho va ten : %s", ten ); 
	printf("so ki tu duoc viet la : %d", strlen(ten)-1); 
}*/

int my_strcat(char x1[], char x2[]){
	size_t len1= strlen(x1);
	size_t len2 = strlen(x2);
	
	for(int i = len1; i<len1 + len2; i++){
		x1[i]=x2[i-len1];
	}
	x1[len1+len2] = '\0';
}

int main(){
	char s1[50] = " xin chao ";
	char s2[50] = " ba tri ";
	
	printf("%s", s1 );
	printf("%s", s2);
	//strcat(s1, s2);   
	
	
	my_strcat(s1, s2);
	printf("%s", s1);  
	
	
}
