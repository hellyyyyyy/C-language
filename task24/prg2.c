#include<stdio.h>
int main(){
	
	int n1,n2;
	
	printf("Enter first number:");
	scanf("%d",&n1);
	printf("Enter second number:");
	scanf("%d",&n2);
	
	printf("Value before swapping:\n%d\n%d\n",n1,n2);
	int c;
	int *a=&n1;
	int *b=&n2;
	
	c=*a;
	*a=*b;
	*b=c;
	
	printf("Value after swapping:\n");
	printf("%d\n%d",n1,n2);
		return 0;
}