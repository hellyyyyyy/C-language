#include<stdio.h>
#include<string.h>
void cube(){
	int n,cube;
	printf("Enter Any Number:");
	scanf("%d",&n);
	
	cube=n*n*n;
	printf("%d",cube);
}
int main(){
	
	cube();
	
	
	return 0;
}