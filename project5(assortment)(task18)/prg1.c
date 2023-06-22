#include<stdio.h>
int main(){
	
	int i,n;
	
	printf("Enter the numbers of value:");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter value:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]<0){
			printf("Negative value: %d\n",a[i]);
		}
	}
	
	return 0;
}