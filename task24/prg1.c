#include<stdio.h>
int main(){
	
	int n;
    
	printf("Enter the size of array:");
	scanf("%d",&n);
    
    int a[n];
	printf("Enter elements:\n");
    for(int i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
	
	
    int *b,j;
    for(j=0;j<n;j++){
	b=&a[j];
	printf("Address: %u => Square: %d\n",b,(*b)*(*b));
    }
	return 0;
}
