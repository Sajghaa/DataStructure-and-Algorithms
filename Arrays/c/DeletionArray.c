#include <stdio.h>

int main() {
    int A[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 2; 

    for (int i = pos; i < n - 1; i++) {
        A[i] = A[i + 1];
    }

    n--;

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
