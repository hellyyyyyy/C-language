#include<stdio.h>
int main(){
	int a,n;
	printf("Enter value:");
	scanf("%d",&n);
	
	for(a=1;a<=n;n--){
		if(n%2==0){
		printf("%d\n",n);
	}

	}
	return 0;
}