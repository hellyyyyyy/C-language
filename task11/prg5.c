#include<stdio.h>
int main(){
	int a=1,n;
	printf("Enter value:");
	scanf("%d",&n);
	
	do{
		if(a%2==1){
			printf("Odd");
			a++;
		}
	}while(a>=n);
	
	return 0;
}