//Write a C code to find the maximum element in each row of the 3 X 3 matrix
#include <stdio.h>

int main() {
    int matrix[3][3], i, j, max;
    
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Maximum elements in each row:\n");
    for (i = 0; i < 3; i++) {
        max = matrix[i][0];
        for (j = 1; j < 3; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        printf("Row %d: %d\n", i+1, max);
    }
    
    return 0;
}

