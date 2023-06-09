#include<stdio.h>
int main(){
	int a,n,sum;
	
	printf("Enter value:");
	scanf("%d",&n);
	
	for(a=1,sum=0;a<=n;a++){
		sum+=a;
	}
	printf("%d\n",sum);
	return 0;
}