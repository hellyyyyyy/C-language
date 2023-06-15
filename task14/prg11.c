#include<stdio.h>
int main(){
	int r,c,k;
	
	for(r=5;r>=1;r--){
		for(k=r;k<5;k++){
			printf(" ");
		}
		for(c=r;c>=1;c--){
			printf("*");
		}
		printf("\n");
	}	
	return 0;
}
