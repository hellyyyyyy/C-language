#include<stdio.h>
int main(){
	int a,n;
	printf("Enter value:");
	scanf("%d",&n);
	
	for(a=1;a<=n;a++){
		if(a%2==1){
			printf("%d\n",a);
		}
	}
	return 0;
}