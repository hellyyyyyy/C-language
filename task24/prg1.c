#include<stdio.h>
int main(){
	
	int b,n;
	
	printf("Enter the value:");
	scanf("%d",&n);

    int a[50];	
	printf("Enter the elements:");
	scanf("%d",&a[n]);
	
	b=&a[n];
	printf("%u => %d\n",b,*b);
	return 0;
}