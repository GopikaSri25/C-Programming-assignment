#include <stdio.h>

void removeCharacter(char *str, char ch) {
    int i = 0, j = 0;
    while (str[i]) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}

int main() {
    char str[100], ch;
    printf("Enter a string: ");
    gets(str);
    printf("Enter the character to remove: ");
    scanf("%c", &ch);

    removeCharacter(str, ch);
    printf("Modified string: %s\n", str);
    return 0;
}
