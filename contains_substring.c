#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Fonction pour vérifier si une sous-chaîne est contenue dans une chaîne
bool contains_substring(const char *str, const char *substr) {
    int len_str = strlen(str);
    int len_sub = strlen(substr);

    for (int i = 0; i <= len_str - len_sub; i++) {
        int j = 0;
        while (j < len_sub && str[i + j] == substr[j]) {
            j++;
        }
        if (j == len_sub) {
            return true;
        }
    }
    return false;
}

int main() {
    char str[100];
    char substr[100];

    scanf("%s", str);

    scanf("%s", substr);

    if (contains_substring(str, substr)) {
        printf("La sous-chaîne est présente.\n");
    } else {
        printf("La sous-chaîne n'est pas présente.\n");
    }

    return 0;
}
