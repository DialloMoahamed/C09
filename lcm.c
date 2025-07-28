#include <stdio.h>

// Fonction récursive pour calculer le PGCD
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Fonction pour calculer le PPCM
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b;

    printf("Entrez deux entiers : ");
    scanf("%d %d", &a, &b);

    printf("Le PPCM est : %d\n", lcm(a, b));

    return 0;
}
