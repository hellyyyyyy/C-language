#include<stdio.h>
void swap(int *a, int *b){
	int c;
	
	c=*a;
	*a=*b;
	*b=c;
	
	printf("\nValue After Swapping:\n");
	printf("First Number: %d\n",*a);
	printf("Second Number: %d",*b);
}
int main(){
	
	int n1,n2;
	
	printf("Enter First Number:");
	scanf("%d",&n1);
	printf("Enter Second Number:");
	scanf("%d",&n2);
	
	swap(&n1,&n2);
	
	
	
	return 0;
}