#include<stdio.h>
int main(){
	int a1[5],a2[5],MergedArray[10];
	int i,j;
	
	printf("Enter five numbers of Array 1:\n");
	for(i=0;i<5;i++){
		scanf("%d",&a1[i]);
		MergedArray[i]=a1[i];
	}
	
	printf("Enter five numbers of Array 2:\n");
	for(j=0;j<5;j++){
		scanf("%d",&a2[j]);
		MergedArray[i]=a2[j];
		i++;
	}
	
	printf("Merged Arrays:\n");
	for(j=0;j<10;j++){
	printf("%d ",MergedArray[j]);	
	}
	
	return 0;
}