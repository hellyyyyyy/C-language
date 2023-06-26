#include<stdio.h>
#include<string.h>
int main(){
	
	char n[50];
	
	printf("Enter a string:");
	scanf("%s",n);
	
	int i;

	    for(i=0;n[i];i++){
	    	if(n[i]>='a' && n[i]<='z'){
		    n[i]-=32;
	    }
    }
    printf("Upeercase: %s",n);
	return 0;
}