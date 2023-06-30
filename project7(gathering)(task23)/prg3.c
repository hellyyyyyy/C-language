#include <stdio.h>

void findLength(char arr[][100], int size) {
    for (int i = 0; i < size; i++) {
        int length = 0;
        for (int j = 0; arr[i][j] != '\0'; j++) {
            length++;
        }
        printf("Length of element %d: %d\n", i, length);
    }
}


int main() {
    char arr[100][100];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%s", arr[i]);
    }

    findLength(arr, size);
    
    void findLength(char arr[100][100], int size);
    
    return 0;
}

