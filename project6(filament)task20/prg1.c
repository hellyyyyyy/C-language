#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int left = 0;
    int right;
    int i = 0;
    char ch;
    
    printf("Enter a string: ");
    
    while ((ch = getchar()) != '\n' && i < sizeof(str) - 1) {
        str[i++] = ch;
    }
    
    str[i] = '\0';  
    
    right = strlen(str) - 1;
    
    while (left < right) {
        if (str[left] != str[right]) {
            printf("Not a palindrome\n");
            return 0;
        }
        
        left++;
        right--;
    }
    
    printf("Palindrome\n");
    
    return 0;
}