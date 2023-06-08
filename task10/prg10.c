#include<stdio.h>
int main(){
	int n,mult=1;
	printf("Enter value:");
	scanf("%d",&n); //n=4
		
	while(mult<=10){
	printf("%d x %d = %d\n",n,mult,n*mult);
	mult++;	
	}	
	return 0;
}