#include<stdio.h>
sum(int h[],int size){
	int c=0,i;
	
	for(i=0;i<size;i++){
		c+=h[i];
	}
	printf("Sum : %d",c);
}

int main(){
	
	int n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	
	int arr[n],i;
	for(i=0;i<n;i++){
		printf("Enter the elements[%d]:",i);
		scanf("%d",&arr[i]);
	}
	sum(arr,n);
	
	return 0;
}