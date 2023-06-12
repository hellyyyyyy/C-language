#include<stdio.h>
int main(){
	int n,fact=1;
	printf("Enter value:");
	scanf("%d",&n);
	
	while(n>0){
		fact=fact*n;
		n--;
	}
	printf("Factorial:%d",fact);
	return 0;
}