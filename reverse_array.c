#include <stdio.h>

// Fonction pour inverser un tableau d'entiers
void reverse_array(int arr[], int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    int size;

    scanf("%d", &size);

    int arr[size];
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    reverse_array(arr, size);

    printf("Tableau inversé : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
