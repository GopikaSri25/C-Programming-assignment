#include <stdio.h>
#include <ctype.h>

void countVowelsAndConsonants(char *str, int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
    }
}

int main() {
    char str[100];
    int vowels, consonants;

    printf("Enter a string: ");
    gets(str);

    countVowelsAndConsonants(str, &vowels, &consonants);
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
    return 0;
}
