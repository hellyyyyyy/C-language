#include<stdio.h>
int main(){
	int n;
	int a[n];
	
	printf("Enter size of Array:");
	scanf("%d",&n);
	int length=sizeof(a)/sizeof(a[n]);
	
	printf("Length of array: %d",length);
	
	return 0;
}