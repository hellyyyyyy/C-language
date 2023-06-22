#include<stdio.h>
int main() {
	

    int matrix[10][10], i, j, rows, cols, sum = 0;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
        	scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i = 0; i < rows; i++) {
    	for(j = 0; j < cols; j++) {
    		printf("%d ", matrix[i][j]);
		}
        printf("\n");
	}
    for(i = 0; i < rows; i++) {
    	for(j = 0; j < cols; j++) {
    		if(i == j) {
    			sum += matrix[i][j];
			}
		}
	}
    printf("The sum of diagonal elements of the matrix is %d", sum);

return 0;
}