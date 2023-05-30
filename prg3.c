#include<stdio.h>
int main(){
	int a=20;
	int b=30;
	int c;
	c=a;
	a=b;
	b=c;
	printf("a: %d\n",a);
	printf("b: %d",b);
	return 0;
}