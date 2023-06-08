#include<stdio.h>
int main(){
	int a=1,n;
	printf("Enter Value:");
	scanf("%d",&n); 
	
	while(n>=a){
		if(n%2==0)
			printf("%d\n",n);
			n--;
	
	}	
	
	return 0;
}