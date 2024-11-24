#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool isPalindrome(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    int start = 0, end = length - 1;
    while (start < end) {
        while (!isalnum(str[start]) && start < end) {
            start++;
        }
        while (!isalnum(str[end]) && start < end) {
            end--;
        }
        if (tolower(str[start]) != tolower(str[end])) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
