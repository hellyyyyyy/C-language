#include<stdio.h>
int main(){
	
	char a[100];
	
	printf("Enter String:");	
	scanf("%s",a);
	
	int length=strlen(a);
	printf("Length of String: %d\n",length);
	return 0;
}