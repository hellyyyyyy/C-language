#include<stdio.h>
int main(){
	int r,c,k;
	
	for(r=1;r<=5;r++){
		for(k=r;k<5;k++){
			printf(" ");
		}
		for(c=1;c<=r;c++){
			printf("%d",c);
		}
		printf("\n");
	}
	for(r=2;r<=5;r++){
		for(k=r;k>1;k--){
			printf(" ");
		}
		for(c=r;c<=5;c++){
			printf("%d",c);
		}
		printf("\n");
	}
	return 0;
}