#include<stdio.h>
int main(){
	int a[3][3],i,j,sum;
	
	printf("Enter element for first matrices\n:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter value:");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter value for 2D array:");
	scanf("%d",&a[i][j]);
	
	printf("2D array elements are:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		sum=0;
		for(j=0;j<3;j++){
			sum=sum+a[i][j];
			printf("\n Sum of row %d",i+1,sum);
		}
		for(i=0;i<3;i++){
			sum=0;
			for(j=0;j<3;j++){
				sum=sum+a[j][i];
				printf("\nSum of column %d is %d",i+1,sum);
			}
		}
	}
	return 0;
}