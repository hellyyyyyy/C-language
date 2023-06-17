#include<stdio.h>
int main(){
	int n,i,sum=0,avg;
	
	printf("Enter number of elements:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter number %d: ",i+1);
		scanf("%d",&a[i]);
	sum+=a[i];
}
    avg=sum/n;	
	printf("Average = %d",avg);
	
	return 0;
}