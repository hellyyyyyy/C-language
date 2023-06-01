#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter A:");
	scanf("%d",&a);
    printf("enter B:");
	scanf("%d",&b);
	printf("enter C:");
	scanf("%d",&c);
	
	if(a<b){
		if(a<c){
			printf("A is minimum");
		}
		else{
			printf("C is minimum");
		}
	}	
    else{
    	if(b<c){
    		printf("B is minimum");
		}
		else{
			printf("C is minimum");
		}
	}	

	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}