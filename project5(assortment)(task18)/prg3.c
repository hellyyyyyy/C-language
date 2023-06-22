#include <stdio.h>
int main(){
	
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int k = 9;
    
    printf("Original array: ");
    
    for (int i = 0; i < n; i++) {	
        printf("%d ", arr[i]);
    }
        for (int i = 0; i < k; i++) {
        int temp = arr[n-1];
            for (int j = n-1; j > 0; j--) {
            arr[j] = arr[j-1];
            }
            arr[0] = temp;
        }
        printf("\nRotated array: ");
        
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        
return 0;
}