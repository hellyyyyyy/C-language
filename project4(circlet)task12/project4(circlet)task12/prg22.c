#include<stdio.h>
int main(){
	char r,c,k=1;
	
	for(r='A';r<='E';r++){
		for(c='A';c<=r;c++){
			printf("%c",r);
			k++;
		}
		printf("\n");
	}
	return 0;
}