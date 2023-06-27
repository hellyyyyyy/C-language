#include<stdio.h>
#include<string.h>

void division(){
	int n;
	printf("Enter Any Number:");
	scanf("%d",&n);
	
	if(n%3==0 && n%5==0){
		printf("Number is divisible by 3 and 5");
	}else{
		printf("Number is not divisible by 3 and 5");
	}
}

int main(){
	int n;
	division(n);
	
	return 0;
}