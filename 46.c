#include <stdio.h>
#include <stdlib.h>
#define NULL 0

int main() {
    FILE *fAll, *fEven, *fOdd;
    int n, num, i;

    // Open All.txt to write all numbers
    fAll = fopen("All.txt", "w");
    if (fAll == NULL) {
        printf("Error opening All.txt\n");
        return 1;
    }

    // Read n numbers from user
    printf("Enter how many numbers you want to store: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        fprintf(fAll, "%d ", num);
    }
    fclose(fAll);

    // Open All.txt to read numbers
    fAll = fopen("All.txt", "r");
    fEven = fopen("Even.txt", "w");
    fOdd  = fopen("Odd.txt", "w");

    if (fAll == NULL || fEven == NULL || fOdd == NULL) {
        printf("Error opening files\n");
        return 1;
    }

    // Separate even and odd
    while (fscanf(fAll, "%d", &num) != EOF) {
        if (num % 2 == 0)
            fprintf(fEven, "%d ", num);
        else
            fprintf(fOdd, "%d ", num);
    }

    fclose(fAll);
    fclose(fEven);
    fclose(fOdd);

    // Display contents of All.txt
    printf("\nContents of All.txt:\n");
    fAll = fopen("All.txt", "r");
    while ((num = fgetc(fAll)) != EOF)
        putchar(num);
    fclose(fAll);

    // Display Even.txt
    printf("\n\nContents of Even.txt:\n");
    fEven = fopen("Even.txt", "r");
    while ((num = fgetc(fEven)) != EOF)
        putchar(num);
    fclose(fEven);

    // Display Odd.txt
    printf("\n\nContents of Odd.txt:\n");
    fOdd = fopen("Odd.txt", "r");
    while ((num = fgetc(fOdd)) != EOF)
        putchar(num);
    fclose(fOdd);

    printf("\n");
    return 0;
}