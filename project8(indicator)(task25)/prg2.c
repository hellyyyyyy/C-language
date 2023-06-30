#include<stdio.h>
int main(){
	
	int n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter the elements of array:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	int *b[n];
	
	for(int j=0;j<n;j++){
		b[j]=&a[j];
		printf("%d\t",*b[j]);
	}
	
	return 0;
}