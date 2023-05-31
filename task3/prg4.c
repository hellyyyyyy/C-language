#include<stdio.h>
int main(){
    int h;
    int b;
    int area;
    printf("Height:");
    scanf("%d",&h);
    printf("Base:");
    scanf("%d",&b);
    area=0.5*b*h;
    printf("Area Of Triangle: %d",area);

	return 0;
}