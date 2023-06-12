#include<stdio.h>
int main(){
	int n,i,fib1=0,fib2=1,next;
	
	printf("Enter value:");
	scanf("%d",&n);
	
	printf("Fibonacci series:");
	
	for(i=0;i<=n;++i){
		printf("%d",fib1);
		next=fib1+fib2;
		fib1=fib2;
		fib2=next;
	}
	
	return 0;
}