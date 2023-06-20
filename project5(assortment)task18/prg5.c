#include<stdio.h>
int main(){
	
	int m,n;
	
	printf("Enter the number of rows:");
	scanf("%d",&m);
    printf("Enter the number of column:");	
    scanf("%d",&n);
    
    int a[m][m],b[n][n];
    int i,j;
    
    for(i=0;i<m;i++){
    	for(j=0;j<n;j++){
    		printf("\nEnter value:");
    		scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
    printf("\n\n");
    
    for(i=0;i<m;i++){
    	for(j=0;j<n;j++){
    		b[j][i]=a[i][j];
		}
	}
	printf("Transpose of matrix\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
    
	return 0;
}