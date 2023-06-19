#include<stdio.h>
int main(){
	int n,m;
	int i,j;
	printf("Enter size of row:");
	scanf("%d",&m);
	printf("Enter size of column:");
	scanf("%d",&n);
	
	int a[n][m];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		printf("Enter the value[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
	}
}
	for(i=0;i<m;i++){
	    for(j=0;j<n;j++){
	    printf("%d ",a[i][j]);
        }
        printf("\n");
    }
	
	return 0;
}