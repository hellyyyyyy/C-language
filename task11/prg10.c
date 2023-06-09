#include<stdio.h>
int main(){
	int a=1,n,mult;
	printf("Enter value:");
	scanf("%d",&n);
	
	do{
		printf("%d x %d = %d\n",n,a,n*a);
		a++;
	}while(a<=10);
	return 0;
}