#include <stdio.h>
#define MAX_SIZE 10
void readMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols);
void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols);
void addMatrices(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE]
[MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols);
void multiplyMatrices(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE]
[MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows1, int cols1, int cols2);
void transposeMatrix(int matrix[MAX_SIZE][MAX_SIZE], int result
[MAX_SIZE][MAX_SIZE], int rows, int cols);
int main()
{
    int choice;
    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE],
    result[MAX_SIZE][MAX_SIZE];
    int rows1, cols1;
    printf("Enter the number of rows and columns of matrix 1: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter matrix 1:\n");
    readMatrix(matrix1, rows1, cols1);
    printf("Enter matrix 2:\n");
    readMatrix(matrix2, rows1, cols1);
    printf("\nMatrix Operations Menu:\n");
    printf("1. Add matrices\n");
    printf("2. Multiply matrices\n");
    printf("3. Transpose matrix\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
        addMatrices(matrix1, matrix2, result, rows1, cols1);
        printf("Sum of matrices:\n");
        displayMatrix(result, rows1, cols1);
        break;

        case 2:
        multiplyMatrices(matrix1, matrix2, result, rows1, cols1, cols1);
        printf("Product of matrices:\n");
        displayMatrix(result, rows1, cols1);
        break;
 
        case 3:
        printf("Transpose of matrix 1:\n");
        transposeMatrix(matrix1, result, rows1, cols1);
        displayMatrix(result, cols1, rows1);
        break;
 
        case 4:
        printf("Exiting...\n");
        break;

        default:
        printf("Invalid choice! Please enter a number between 1 and 4.\n");
    }
    return 0;
}
void readMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void addMatrices(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE]
[MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
void multiplyMatrices(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2
[MAX_SIZE][MAX_SIZE],
int result[MAX_SIZE][MAX_SIZE], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}
void transposeMatrix(int matrix[MAX_SIZE][MAX_SIZE], int result
[MAX_SIZE][MAX_SIZE], 
int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}