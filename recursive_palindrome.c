#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Fonction récursive pour vérifier un palindrome
bool is_palindrome(const char *str, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (str[start] != str[end]) {
        return false;
    }
    return is_palindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];

    scanf("%s", str);

    int length = strlen(str);

    if (is_palindrome(str, 0, length - 1)) {
        printf("La chaîne est un palindrome.\n");
    } else {
        printf("La chaîne n'est pas un palindrome.\n");
    }

    return 0;
}
