#include<stdio.h>
#include<string.h>
int main(){
	
	char  email[50],password[50];
	char  trueemail[] ="hellyp54@gmail.com", truepassword[] = "Hellyyyy";
	
	printf("Enter your E mail:");
	scanf("%s",email);
	printf("Enter your Password:");
	scanf("%s",password);
	
	
	 printf("\n\n");
	if(strcmp(email,trueemail)==0 && strcmp(password,truepassword)==0){
		printf("You are logged in successfully");
	}
	else{
		printf("Enter valid email and password");
	}
	
	
	return 0;
}