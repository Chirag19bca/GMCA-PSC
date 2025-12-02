#include <stdio.h>
#include <stdlib.h>

// --- Function Prototypes ---
int *readMatrix(int rows, int cols, const char *matrixName);
void addMatrices(int rows, int cols, const int *A, const int *B, int *Result);
void printMatrix(int rows, int cols, const int *M, const char *matrixName);

// --- Main Function ---
int main()
{
    int rows, cols;

    printf("--- Matrix Addition Program ---\n");
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows <= 0 || cols <= 0)
    {
        printf("Error: Rows and columns must be positive integers.\n");
        return 1;
    }

    // Dynamically allocate memory for the matrices
    int *matrixA = (int *)malloc(rows * cols * sizeof(int));
    int *matrixB = (int *)malloc(rows * cols * sizeof(int));
    int *matrixResult = (int *)malloc(rows * cols * sizeof(int));

    // Check if memory allocation was successful
    if (matrixA == NULL || matrixB == NULL || matrixResult == NULL)
    {
        printf("Error: Memory allocation failed.\n");
        free(matrixA);
        free(matrixB);
        free(matrixResult);
        return 1;
    }

    matrixA = readMatrix(rows, cols, "Matrix A");
    matrixB = readMatrix(rows, cols, "Matrix B");

    addMatrices(rows, cols, matrixA, matrixB, matrixResult);

    printMatrix(rows, cols, matrixResult, "Result (A + B)");

    // Free the dynamically allocated memory
    free(matrixA);
    free(matrixB);
    free(matrixResult);

    printf("\nProgram finished successfully.\n");
    return 0;
}

// --- Function Definitions ---

int *readMatrix(int rows, int cols, const char *matrixName)
{
    int *M = (int *)malloc(rows * cols * sizeof(int));

    if (M == NULL)
    {
        printf("Error: Memory allocation failed for %s.\n", matrixName);
        exit(EXIT_FAILURE);
    }

    printf("\nReading elements for %s (%d x %d):\n", matrixName, rows, cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);

            // Pointer arithmetic: (i, j) maps to index (i * cols + j)
            scanf("%d", M + (i * cols + j));
        }
    }
    return M;
}

void addMatrices(int rows, int cols, const int *A, const int *B, int *Result)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int index = i * cols + j; // 1D index calculation

            // Add elements using pointer arithmetic: *(Address + index)
            *(Result + index) = *(A + index) + *(B + index);
        }
    }
}

void printMatrix(int rows, int cols, const int *M, const char *matrixName)
{
    printf("\n%s:\n", matrixName);

    for (int i = 0; i < rows; i++)
    {
        printf("|");
        for (int j = 0; j < cols; j++)
        {
            // Retrieve and print the element using pointer arithmetic
            printf(" %4d ", *(M + (i * cols + j)));
        }
        printf("|\n");
    }
}