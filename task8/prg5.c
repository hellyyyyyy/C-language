#include<stdio.h>
int main(){
	char a;
	printf("Enter choice:");
	scanf("%f",&a);
	
	switch(a){
		case 'J':
		printf("January");
		break;
		case 'F':
        printf("February");
		break;
		case 'M':
        printf("March");
		break;
		case 'A':
		printf("April");
		break;
		case 'Y':
		printf("May");
		break;
		case 'N':
		printf("June");
		break;
		case 'L':
		printf("July");
		break;
		case 'G':
		printf("August");
		break;
		case 'S':
		printf("September");
		break;
		case 'O':
		printf("October");
		break;
		case 'V':
		printf("November");
		break;
		case 'D':
		printf("December");
		break;
		default:
			printf("Invalid! Month");
		
	}

	return 0;
}
