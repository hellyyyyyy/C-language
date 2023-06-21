#include<stdio.h>
 int main() { 
 int arr[10] = {5, 1, 9, 3, 7, 11, 2, 8, 6, 4};
 int i, largest, secondLargest; 
 // Initialize largest and secondLargest with first two elements of the array
  if (arr[0] > arr[1]) 
  { 
  largest = arr[0]; secondLargest = arr[1]; 
  } else {
   largest = arr[1]; secondLargest = arr[0];
    } 
	// Iterate through the array starting from third element
	 for (i = 2; i < 10; i++) {
	  if (arr[i] > largest) {
	   // If current element is larger than largest, update largest and secondLargest 
	   secondLargest = largest; 
	   largest = arr[i]; 
	   } else 
	   if (arr[i] > secondLargest && arr[i] != largest) {
	    // If current element is larger than secondLargest but not largest, update secondLargest
		 secondLargest = arr[i]; }
		  }
		   printf("The second largest number in the given array is %d\n", secondLargest);
	return 0; 
			} 