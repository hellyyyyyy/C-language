#include<stdio.h>

struct Student{
	
    int stu_id,stu_age,stu_std;
 	
    char stu_name[50],stu_course[50],stu_city[50],stu_school[50];
	 
};


int main(){
	int n;
	printf("Enter The Number Of Students:");
	scanf("%d",&n);
	
	struct Student stu[n];
	
	int i;
	for(i=0;i<n;i++){
		
		printf("\nEnter details for student %d\n",i+1);
		
		printf("Id:");
		scanf("%d",&stu[i].stu_id);
		
		printf("Name:");
		scanf("%s",&stu[i].stu_name);
		
		printf("Age:");
		scanf("%d",&stu[i].stu_age);
		
		printf("Course:");
		scanf("%s",&stu[i].stu_course);
		
		printf("City:");
		scanf("%s",&stu[i].stu_city);
		
		printf("Standard:");
		scanf("%d",&stu[i].stu_std);
		
		printf("School:");
		scanf("%s",&stu[i].stu_school);
		
		printf("\n\n");
	}
	
	for(i=0;i<n;i++){
		
		printf("\n\nStudent %d Details:",i+1);
		
		printf("Id: %d\n",stu[i].stu_id);
		
		printf("Name: %s\n",stu[i].stu_name);
		
		printf("Age: %d\n",stu[i].stu_age);
		
		printf("Course: %s\n",stu[i].stu_course);
		
		printf("City: %s\n",stu[i].stu_city);
		
		printf("Standard: %d\n",stu[i].stu_std);
		
		printf("School: %s\n\n",stu[i].stu_school);
		
	}
	
	return 0;
}