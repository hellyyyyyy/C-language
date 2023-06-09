#include<stdio.h>
int main(){
	int a=1,n,fact=1;
	printf("Enter value:");
	scanf("%d",&n);
	
	do{
		fact=fact*a;
		a++;
	}while(a<=n);
	printf("%d\n",fact);
	
	
	return 0;
}