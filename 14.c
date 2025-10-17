#include <stdio.h>

int main() {
    int n, i, max, min;

    printf("Enter 10 numbers:\n");
    scanf("%d", &n);
    max = min = n;   // initialize both as given number

    // Read the remaining 9 numbers
    for(i = 2; i <= 10; i++) {
        scanf("%d", &n);
        if(n > max)
            max = n;
        if(n < min)
            min = n;
    }

    // Output results
    printf("Maximum number = %d\n", max);
    printf("Minimum number = %d\n", min);

    return 0;
}
