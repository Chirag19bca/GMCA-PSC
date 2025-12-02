#include <stdio.h>

int main()
{
    FILE *fp1, *fp2, *fp3;
    char ch;

    // Open first file
    fp1 = fopen("file1.txt", "r");
    if (fp1 == NULL) {
        printf("Error opening file1.txt\n");
        return 1;
    }

    // Open second file
    fp2 = fopen("file2.txt", "r");
    if (fp2 == NULL) {
        printf("Error opening file2.txt\n");
        fclose(fp1);
        return 1;
    }

    // Open third file for merging
    fp3 = fopen("merged.txt", "w");
    if (fp3 == NULL) {
        printf("Error creating merged.txt\n");
        fclose(fp1);
        fclose(fp2);
        return 1;
    }

    // Copy contents of file1.txt to merged.txt
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp3);
    }

    // Copy contents of file2.txt to merged.txt
    while ((ch = fgetc(fp2)) != EOF) {
        fputc(ch, fp3);
    }

    printf("Files merged successfully into merged.txt\n");

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return 0;
}