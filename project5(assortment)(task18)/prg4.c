#include<stdio.h>
int main(){
	
	int a1[10],a2[10];
	
	printf("Enter first value:");
	scanf("%d",&a1[10]);
	printf("Enter second value:");
	scanf("%d",&a2[10]);
	
	int i;
	for(i=0;i<5;i++){
		printf("a1[%d]",i);
		scanf("%d",&a1[i]);
    }
	
	return 0;
}