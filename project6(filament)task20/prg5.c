#include<stdio.h>

int main(){
	
	char n;

	printf("Enter a character:");
	scanf("%c",&n);
	
	if(n>='A' && n<='Z'){
		n+=32;
    }
    
	printf("Lowercase:%c",n);
	return 0;
}