#include <stdio.h>

int main() {
    int roll[20];
    int marks[20];
    int i;

    printf("Enter Roll No and Marks of 20 students:\n");
    for(i = 0; i < 20; i++) {
        printf("Student %d - Roll No: ", i + 1);
        scanf("%d", &roll[i]);
        printf("Student %d - Marks: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\n--- Student Details ---\n");
    printf("Roll No\tMarks\n");
    for(i = 0; i < 20; i++) {
        printf("%d\t%d\n", roll[i], marks[i]);
    }

    return 0;
}
