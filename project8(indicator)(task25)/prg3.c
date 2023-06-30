#include<stdio.h>
void length(char arr[],int size){
	for(int i=0;i<size;i++){
		int length = 0;
		for(int j=0;arr!='\0';j++){
			length++;
		}
		printf("Length of elements: %d\n",length);
	}
}

int main(){
	
	int n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	char a[n];
	printf("Enter the string:\n");
	for(int i=0;i<n;i++){
    scanf("%s",&a[i]);
	}

	length(a,n);
	
	return 0;
}