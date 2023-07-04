#include<stdio.h>
int main(){
	
	int n;
	
	printf("Enter size of array:");
	scanf("%d",&n);
	
	int i;
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter array elemnets:");
		scanf("%d",&arr[i]);
	}
	
	printf("Reversed Array:\n");
	for(i=n-1;i>=0;i--){
		printf("%d\n",arr[i]);
	}
	
	
	return 0;
}