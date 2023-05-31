#include<stdio.h>
int main(){
	int x,y,z,ans;
	printf("value of x:");
	scanf("%d",&x);
	printf("value of y:");
	scanf("%d",&y);
	printf("value of z:");
	scanf("%d",&z);
	ans=("(x*x) + (y*y) + (z*z) + (2*(x*y)+2*(y*z)+2*(z*x))");
	printf("(x+y+z)²: %d",ans);
	return 0;
}
