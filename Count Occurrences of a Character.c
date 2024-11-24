#include <stdio.h>

int countCharacter(char *str, char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100], ch;
    printf("Enter a string: ");
    gets(str);
    printf("Enter the character to count: ");
    scanf("%c", &ch);

    printf("Character '%c' occurs %d times.\n", ch, countCharacter(str, ch));
    return 0;
}
