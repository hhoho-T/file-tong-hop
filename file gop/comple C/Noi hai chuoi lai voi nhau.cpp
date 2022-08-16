#include<stdio.h>
#include<string.h>

void my_strcat(char x1[], char x2[]){
	size_t len1 = strlen(x1);// kieu luu tru do dai
	size_t len2 = strlen(x2);

	// x1 = "xin chao "
	// x2 = "TITV"
	// => "xin chao TITV" i tang len 1 se dien chu T , i tang len 1 nua se dc chu I tang cho den het ki tu
	

		for(int i = len1 ; i<len1+len2; i++){
			x1[i]= x2[i - len1];// neu xuat phat tu len1 coi nhu la phan tu thu 0
		}
		x1[len1 + len2]='\0';
	
	
}


// noi 2 chuoi lai voi nhau
int main(){
	char s_1[12] = " Xin chao ";
	char s_2[20] = " TITV ";
	
	printf("\ns_1 =  %s", s_1);// nhap
	printf("\ns_2 = %s", s_2);  
	//strcat(s_1, s_2); thay bang my_strcat de thu
	my_strcat(s_1, s_2) ;
	printf("\ns_1 =  %s", s_1);
}
