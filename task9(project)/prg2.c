#include<stdio.h>
int main(){
	int a;
	printf("Enter the Number:");
	scanf("%d",&a);
	
	a%2==0 ? printf("Given number is even number")  : printf("Given number is odd number");
	switch(a){
		default:
			printf("Invalid number");
	}
	
	
	
	return 0;
}