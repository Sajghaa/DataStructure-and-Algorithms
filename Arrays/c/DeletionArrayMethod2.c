#include <stdio.h>

void deleteElement(int arr[], int *n, int pos) {
    if (*n <= 0) {
        printf("Error: Array is empty (underflow).\n");
        return;
    }

    if (pos < 0 || pos >= *n) {
        printf("Error: Invalid Position.\n");
        return;
    }

    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*n)--;

    printf("Deleted element at index %d successfully!\n", pos);
}

int main() {
    int arr[10] = {1, 3, 99, 5, 7, 9};
    int size = 6;

    deleteElement(arr, &size, 2);

    for (int i = 0; i < size; i++) {
        printf(" %d ", arr[i]);
    }
    return 0;
}
