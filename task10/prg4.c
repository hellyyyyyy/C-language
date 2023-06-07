#include<stdio.h>
int main(){
	int a=1,n;
	printf("Enter value:");
	scanf("%d",&n); 
	while(n>=a){
		printf("%d\n",n);
		n--;
	}
	return 0;
}