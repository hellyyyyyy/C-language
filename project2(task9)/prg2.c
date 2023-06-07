#include<stdio.h>
int main(){
	int a;
	while(1){
	
	printf("Enter the Number:");
	scanf("%d",&a);
	 
	a%2==0 ? printf("Given number is even number\n")  :
	a%2==1 ?
	printf("Given number is odd number\n")
	: printf("Number you have entered is Invalid");
	
}
	
	return 0;
}
