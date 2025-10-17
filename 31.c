#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);//read string with space otherwise string won’t store

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // ASCII difference between 'a' and 'A' is 32 same for others alphabet
        }
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}
