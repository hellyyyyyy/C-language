#include<stdio.h>
int main(){
	char a='A',b='Z';
	do {
		printf("%c\n",a);
		a++;
	}
	while(a<=b);
	
	return 0;
}