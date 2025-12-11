#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;
    char inFile[50], outFile[50];

    // Take source file name from user
    printf("Enter input file name: ");
    scanf("%s", inFile);

    // Take destination file name from user
    printf("Enter output file name: ");
    scanf("%s", outFile);

    // Open source file
    fp1 = fopen(inFile, "r");
    if (fp1 == NULL) {
        printf("Error: Cannot open %s\n", inFile);
        return 1;
    }

    // Open destination file
    fp2 = fopen(outFile, "w");
    if (fp2 == NULL) {
        printf("Error: Cannot create %s\n", outFile);
        fclose(fp1);
        return 1;
    }

    // Read characters and skip spaces
    while ((ch = fgetc(fp1)) != EOF)
    {
        if (ch != ' ')    // skip spaces
        {
            fputc(ch, fp2);   // write non-space characters
        }
    }

    printf("Spaces removed successfully. Output stored in %s\n", outFile);

    fclose(fp1);
    fclose(fp2);

    return 0;
}