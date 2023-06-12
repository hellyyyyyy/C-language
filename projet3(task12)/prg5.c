#include<stdio.h>
int main(){
	int n,opp=0,remainder,real;
	
	printf("Enter value:");
	scanf("%d",&n);
	
	real=n;
	while(n!=0){
		remainder=n%10;
		opp=opp*10+remainder;
		n/=10;
	}
	printf("Reverse of given value: %d\n",opp);
	
	if(real==opp){
		printf("%d is a palindrom.\n",real);
	}else{
		printf("%d is not a palindrome.\n",real);
	}
	return 0;
}