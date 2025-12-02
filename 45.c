#include <stdio.h>
#include <stdlib.h>

// --- Function Prototypes ---
void swap(int *a, int *b);
void bubbleSort(int *arr, int n);
void printArray(const int *arr, int n);

// --- Main Function ---
int main()
{
    int n, i;
    int *array;

    printf("--- Array Sorting Program (using Pointers) ---\n");
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid input for number of elements.\n");
        return 1;
    }

    array = (int *)malloc(n * sizeof(int));
    if (array == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", (array + i)); // Reads into address of array[i]
    }

    printf("\nOriginal array: ");
    printArray(array, n);

    bubbleSort(array, n);

    printf("Sorted array: ");
    printArray(array, n);

    free(array);

    return 0;
}

// --- Function Definitions ---

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *arr, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            // Compare and swap using pointer arithmetic
            if (*(arr + j) > *(arr + j + 1))
            {
                swap((arr + j), (arr + j + 1));
            }
        }
    }
}

void printArray(const int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}