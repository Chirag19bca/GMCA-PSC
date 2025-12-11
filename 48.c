#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;
    int lineCount = 0, charCount = 0;
    //make a txt file and give name at run time not compile time
    // Check if filename is provided
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    // Open file
    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Error: Cannot open file %s\n", argv[1]);
        return 1;
    }

    printf("Character count for each line:\n");

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) {

        if (ch != '\n') {
            charCount++;
        } else {
            lineCount++;
            printf("Line %d: %d characters\n", lineCount, charCount);
            charCount = 0;
        }
    }

    // Handle last line (if no newline at end)
    if (charCount > 0) {
        lineCount++;
        printf("Line %d: %d characters\n", lineCount, charCount);
    }

    printf("\nTotal number of lines = %d\n", lineCount);

    fclose(fp);
    return 0;
}