#include <stdio.h>
#include<string.h>

int main() {
    char n[50];
    
    printf("Enter a string: ");
    gets(n);
    
    int i;
    for (i=0; n[i]!='\0'; i++) {
        if (n[i] >= 'a' && n[i] <= 'z') {
            n[i]-=32;  
        } else if (n[i] >= 'A' && n[i] <= 'Z') {
            n[i]+=32; 
        }
        
    }
    
    printf("Toggle case: %s\n",n);
    
    return 0;
}
