#include<stdio.h>
#include<string.h>
int main(){
	
	char password[20];
	int i,length=0,letter=0,digit=0,symbol=0;
	
	printf("Enter your password:");
	scanf("%s",password);
	
	length=strlen(password);
	if(length>=6){
		
		for(i=0;password[i]!='\0';i++){
			if((password[i]>='a' && password[i]<='z') || (password[i]>='A' && password[i]<='Z')) {
				letter=1;
			}		
			else if(password[i]>='0' && password[i]<='9'){
				digit=1;
			}
			else{
				symbol=1;
			}
	    }
		
		
			if(letter && digit && symbol){
				printf("Password is valid");
			}
			else{
				printf("Password must contain at least one letter, one digit and one special symbol");
			}
	}
		else{
		printf("Password must be atleast of 6 characters");
	}
	

	return 0;
}