#include<stdio.h>
int main(){
	int a=40,b=20;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a:%d\n",a);
	printf("b:%d",b);
	return 0;
}