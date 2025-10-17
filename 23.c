#include <stdio.h>
int main() {
    int i, j;
    printf("Pattern i:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\nPattern ii:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(j >= 6 - i)   
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    printf("\nPattern iii:\n");
    for(i = 5; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
