#include<stdio.h>
int main(){
	int a=1,n;
	printf("Enter value:");
	scanf("%d",&n);
	
	do{
		printf("%d\n",a);
		a++;
	}while(a<=n);
	
	return 0;
}