#include<stdio.h>

int main() {
	
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i,l1,l2;
    
 
    if (arr[0] > arr[1])  {
    l1=arr[0];
	l2=arr[1]; 
    } else{
    	l1=arr[1]; 
		l2=arr[0];
    }
	 
	for (i = 2; i < 10; i++) {	
	   if (arr[i] > l1) {
	   l2 = l1; 
	   l1 = arr[i]; 
	   } else 
	   if (arr[i] > l2 && arr[i] != l1) {
	   l2 = arr[i];
	   }
	}
	   printf("The second largest number in the given array is %d\n", l2);
	   
return 0; 
} 