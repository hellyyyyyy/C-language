#include<stdio.h>
int main(){
    float p,r,t;
    float SI;
    printf("p:");
    scanf("%f",&p);
    printf("r:");
    scanf("%f",&r);
    printf("t:");
    scanf("%f",&t);
    SI=(p*r*t)/100;
    printf("Simple Intrest: %f",SI);

	return 0;
}