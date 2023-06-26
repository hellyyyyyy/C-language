#include<stdio.h>

int main(){
	
	char n;
	
	printf("Enter a character:");
	scanf("%c",&n);
	
	if(n>='a' && n<='z'){
		n-=32;
    }
    
	printf("Uppercase: %c",n);
	return 0;
}