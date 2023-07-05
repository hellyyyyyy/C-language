#include<stdio.h>
#include<string.h>
struct Student{
    int stu_id,stu_age,stu_std;	
    char stu_name[20],stu_course,stu_city,stu_school;
};


int main(){
	int n;
	printf("Enter size of array:");
	scanf("%d",&n);
	
	struct Student stu[n];
	int i;
	for(i=0;i<n;i++){
		printf("Enter Id:");
		scanf("%d",&stu[i].stu_id);
		printf("Enter name:");
		scanf("%s",&stu[i].stu_name);
		printf("Enter age:");
		scanf("%d",&stu[i].stu_age);
		printf("Enter course:");
		scanf("%s",&stu[i].stu_course);
		printf("Enter city:");
		scanf("%s",&stu[i].stu_city);
		printf("Enter Standard:");
		scanf("%d",&stu[i].stu_std);
		printf("Enter school:");
		scanf("%s\n\n",&stu[i].stu_school);
	}
	
	for(i=0;i<n;i++){
		
		printf("%d",stu[i].stu_id);
		
		printf("%s",stu[i].stu_name);
		
		printf("%d",stu[i].stu_age);
		
		printf("%s",stu[i].stu_course);
		
		printf("%s",stu[i].stu_city);
		
		printf("%d",stu[i].stu_std);
		
		printf("%s",stu[i].stu_school);
	}
	
	return 0;
}