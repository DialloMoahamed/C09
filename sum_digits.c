#include <stdio.h>

// Fonction récursive pour calculer la somme des chiffres
int sum_digits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sum_digits(n / 10);
}

int main() {
    int number;

    scanf("%d", &number);

    int result = sum_digits(number);
    printf("Somme des chiffres : %d\n", result);

    return 0;
}
