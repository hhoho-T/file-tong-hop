

#include<stdio.h>
void SORT(int a[], int left, int right){
};
void ARRAY(int a[], int n){
};
void SWAP(int &a, int &b){
};
void SORT1(int a[], int left, int right){

  if(left >= right) return;
  else if(left + 1 == right)
    {
  	  if(a[left]> a[right]); SWAP(a[left],a[right]);
    }
  else
    {
  	  int pivot = a[right];
  	  int L = left - 1;
  	  for(int j = left; j < right; j++)
  	  if (a[j] <= pivot)
  	    {
  	      L++;
  	      SWAP(a[L],a[j]);
		}
	   SWAP(a[L+1],a[right]);
	   SORT(a, left, L);
	   SORT1(a, L+2, right);
  	
    }
}
void ARRAY1(int a[], int n)
{
	for(int i = 0; i < n; i++)
	printf(" %d", a[i]);
}
void SWAP1(int &a, int &b)
{
	int tg = a;
	a = b;
	b = tg;
}

int main()
{
	int a[] = {56, 34, 72, 3, 20, 31, 47, 10, 79, 75, 83, 40};
	int n =sizeof(a)/sizeof(int);
	printf("n= %d", n );
	printf("\nINPUT");  ARRAY(a, n); printf("\n");
    SORT(a,0,n-1);
    printf("\n\nOUTPUT:   "); ARRAY1(a, n);
	
}

