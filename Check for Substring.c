#include <stdio.h>
#include <stdbool.h>

bool isSubstring(char *mainStr, char *subStr) {
    int i, j;
    for (i = 0; mainStr[i] != '\0'; i++) {
        for (j = 0; subStr[j] != '\0'; j++) {
            if (mainStr[i + j] != subStr[j]) {
                break;
            }
        }
        if (subStr[j] == '\0') {
            return true;
        }
    }
    return false;
}

int main() {
    char mainStr[100], subStr[100];
    printf("Enter the main string: ");
    gets(mainStr);
    printf("Enter the substring: ");
    gets(subStr);

    if (isSubstring(mainStr, subStr)) {
        printf("Substring found.\n");
    } else {
        printf("Substring not found.\n");
    }
    return 0;
}
