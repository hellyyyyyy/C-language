#include<stdio.h>
int main(){
	int a,b;
	
	for(a=2000,b=3000;a<=b;a++){
		if(a%4==0){
			printf("%d\n",a);
		}
	}

	return 0;
}