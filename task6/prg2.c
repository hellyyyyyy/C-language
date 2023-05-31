#include<stdio.h>
int main(){
	int a;
	
	printf("value of a:");
	scanf("%d",&a);
	if(a>0){
		printf("a is not neutral");
	}
		else if(a<0){
			printf("a is not neutral");
		}
		else{
			printf("a is neutral");
		}
		return 0;
}