#include<stdio.h>
int main(){
	char a;
	
	printf("Enter value:");
	scanf("%c",&a);
	
	switch(a){
		case 'M':
		printf("Monday\n");
		break;
		case 'T':
		printf("Tuesday\n");
		break;
		case 'W':
		printf("Wednesday\n");
		break;
		case 't':
		printf("Thursday\n");
		break;
		case 'F':
		printf("Friday\n");
		break;
		case 'S':
		printf("Saturday\n");
		break;
		case 's':
		printf("Sunday\n");
		break;
		default:
		printf("Invalid value");	
		
	}
	
	
	return 0;
}