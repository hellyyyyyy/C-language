#include<stdio.h>
int main(){
	int a=1,n,sum=0;
	printf("Enter value:");
	scanf("%d",&n);//4
	
	do{
       sum=sum+a;
	   a++;		
	}while(a<=n);
	printf("%d\n",sum);
return 0;
}