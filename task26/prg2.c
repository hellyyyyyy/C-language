#include<stdio.h>

struct Employee{
	
    int emp_id,emp_age,emp_experience;
 	
    char emp_name[50],emp_role[50],emp_city[50],emp_company_name[50];
	 
};


int main(){
	int n;
	printf("Enter The Number Of Employees:");
	scanf("%d",&n);
	
	struct Employee emp[n];
	
	
	int i;
	for(i=0;i<n;i++){
		
		printf("\nEnter details for Employee %d:\n",i+1);
		
		printf("Id:");
		scanf("%d",&emp[i].emp_id);
		
		printf("Name:");
		scanf("%s",&emp[i].emp_name);
		
		printf("Age:");
		scanf("%d",&emp[i].emp_age);
		
		printf("Role:");
		scanf("%s",&emp[i].emp_role);
		
		printf("City:");
		scanf("%s",&emp[i].emp_city);
		
		printf("Experience:");
		scanf("%d",&emp[i].emp_experience);
		
		printf("Company Name:");
		scanf("%s",&emp[i].emp_company_name);
		
		printf("\n\n");
	}
	
	for(i=0;i<n;i++){
		
		printf("\nEmployee %d Details:\n",i+1);
		
		printf("Id: %d\n",emp[i].emp_id);
		
		printf("Name: %s\n",emp[i].emp_name);
		
		printf("Age: %d\n",emp[i].emp_age);
		
		printf("Role: %s\n",emp[i].emp_role);
		
		printf("City: %s\n",emp[i].emp_city);
		
		printf("Experience: %d\n",emp[i].emp_experience);
		
		printf("Company name: %s\n\n",emp[i].emp_company_name);
		
	}
	
	return 0;
}