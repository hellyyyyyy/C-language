#include<stdio.h>
#include<string.h>
int main(){
	
	char n[50],i;
	
	printf("Enter value:");
	scanf("%s",n);
	
	if(n[0]>='a' && n[0]<='z'){
		n[0]-=32;
	}
	for(i=1;i<strlen(n);i++){
		if(n[i]>='A' && n[i]<='Z'){
			n[i]+=32;
		}
		
	}
	printf("%s",n);
	
	return 0;
}