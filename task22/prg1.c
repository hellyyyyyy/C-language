#include<stdio.h>

void sum(int a ,int b){
	printf("Addition: %d\n",a+b);
}
void sub(int a,int b){
	printf("Subtraction: %d\n",a-b);
}
void mult(int a, int b){
	printf("Multiplication: %d\n",a*b);
}
void div(int a,int b){
	printf("Division: %d\n",a/b);
}


int main(){
	
	int a,b;
	char sign;
	
	while(1){
	
	printf("Enter first number:  ");
	scanf("%d",&a);
	printf("Enter second number:  ");
	scanf("%d",&b);
	
	printf(" choose sign:");
	printf("+ , - , * , / \n");
	scanf(" %c",&sign);
	
	switch(sign){
		case '+' :
			sum(a,b);
			break;
		
		case '-' :
			sub(a,b);
			break;
		
		case '*' :
			mult(a,b);
			break;
		
		case '/' :
			div(a,b);
			break;
	}
	
}
	return 0;
}