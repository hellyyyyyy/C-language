#include<stdio.h>
int main(){
	int x,y,ans;
	printf("value of x:");
	scanf("%d",&x);
	printf("value of y:");
	scanf("%d",&y);
	ans =(x*x*x) - ((3*x*y)*(x-y)) - (y*y*y);
	printf("(x-y)3: %d",ans);
	return 0;
}