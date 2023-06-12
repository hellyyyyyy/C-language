#include<stdio.h>
int main(){
	int a,b,c,sum;
	printf("Enter value:");
	scanf("%d",&a); //a=4563
    b=a;
	while(b>=10){
		b=b/10;
	}
	c=a%10;
	sum=b+c;
	printf("%d",sum);
	
	return 0;
}
