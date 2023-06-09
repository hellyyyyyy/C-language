#include<stdio.h>
int main(){
	int a,b;
	printf("Enter value:");
	scanf("%d",&a); //a=4563
	
	while(a>=10){
		a=a/10;
	}
	b=a%10;
	printf("%d",a+b);
	
	return 0;
}