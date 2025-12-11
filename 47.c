#include <stdio.h>
#include <stdlib.h>
#define NULL 0
#include <string.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("Data.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter lines of text (type 'exit' to stop):\n");

    while (1) {
        fgets(line, sizeof(line), stdin); // read a line from user

        // stop if user types exit
        if (strncmp(line, "exit", 4) == 0)
            break;

        fputs(line, fp);  // write line to file
    }

    fclose(fp);

    // Now read and print the file content
    fp = fopen("Data.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nContents of Data.txt:\n");

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}