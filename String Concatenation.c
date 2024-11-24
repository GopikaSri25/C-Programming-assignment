#include <stdio.h>

void concatenateStrings(char *str1, char *str2) {
    int length1 = 0, length2 = 0;
    while (str1[length1] != '\0') {
        length1++;
    }
    while (str2[length2] != '\0') {
        str1[length1 + length2] = str2[length2];
        length2++;
    }
    str1[length1 + length2] = '\0';
}

int main() {
    char str1[200], str2[100];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    concatenateStrings(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
