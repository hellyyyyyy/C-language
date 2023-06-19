#include<stdio.h>
int main(){
	int m,n;
	int l1,l2;
	
	printf("Enter the number of rows:");
	scanf("%d",&m);
	printf("Enter the number of column:");
	scanf("%d",&n);
	
	int a[m][n];
			l1=sizeof(a)/sizeof(a[m]);
			l2=sizeof(a[m])/sizeof(a[m][n]);

	printf("Length of row is %d\n",l1);
	printf("Length of column is %d",l2);
	
	return 0;
}