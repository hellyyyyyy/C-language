#include<stdio.h>
int main(){
	char a,z;
	printf("Enter the value:");
	scanf("%c",&a);
	
	if(a>='a' && a<='z'){
		printf("Given value is alphabet");
	}
	else if(a>='0' && a<='9'){
		printf("Given value is digit");
	}
	else{
		printf("Given value is special character");
	}
	
	
	
	
	
	
	
	return 0;
}