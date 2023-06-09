#include<stdio.h>
int main(){
	int n,fact;
	printf("Enter value:");
	scanf("%d",&n);
	
	for(fact=1;n>=1;n--){
		fact*=n;
	}
	printf("%d",fact);
	
	return 0;
}