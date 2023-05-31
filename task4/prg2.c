#include<stdio.h>
int main(){
	int x,y,ans;
	printf("value of x:");
	scanf("%d",&x);
	printf("value of y:");
	scanf("%d",&y);
	ans = (x*x) - (2*x*y) + (y*y);
	printf("(x-y)² %d",ans);
	return 0;
}