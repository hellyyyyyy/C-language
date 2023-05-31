#include<stdio.h>
int main() {
	int x,y,modulus;
	printf("Enter Value Of x:");
	scanf("%d",&x);
	printf("Enter Value Of y:");
	scanf("%d",&y);
	modulus =(x%y);
	printf("modulus: %.2d",modulus);
	
	return 0;
}