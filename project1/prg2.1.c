#include<stdio.h>
int main(){
	int x=10;
	int y=20;
	int z;
	z=x;
	x=y;
	y=z;
	printf("Value of x:%d\n",x);
	printf("Value of y:%d",y);
	return 0;
}