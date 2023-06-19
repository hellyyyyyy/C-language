#include<stdio.h>
int main(){
	int n,m,i,j,sum=0,avg1,avg2;
	
	printf("Enter number of row:");
	scanf("%d",&m);
	printf("Enter number of column:");
	scanf("%d",&n);
	
	int a[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		printf("Enter number %d %d: ",i+1,j+1);
		scanf("%d",&a[i][j]);
	
        }
    }
    for(i=0;i<m;i++){
	    for(j=0;j<n;j++){
	    printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    sum+=a[i][j];
    avg1=sum/m;	
    avg2=sum/n;
	printf("Average = %d",avg1+avg2/2);
	
	return 0;
}