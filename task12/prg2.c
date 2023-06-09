#include<stdio.h>
int main(){
	int a=1,n;
	
	printf("Enter number:");	
	scanf("%d",&n);
	printf("Multiplication table of %d:\n",n);
	
	while(a<=10){
		printf("%d x %d = %d\n",n,a,n*a);
		a++;
	}
	
	
	
	
	return 0;
}