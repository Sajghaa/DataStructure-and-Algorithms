#include <stdio.h>

int main(){

    int A[10]= {10, 20, 30, 40, 50};
    int n = 5;
    int x = 25;
    int pos = 2;

    for (int i = n-1; i >=pos; i--){
        A[i+1] = A[i];
    }

    A[pos] = x;
    n++;

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++){
        printf("%d", A[i]);
    }
    return 0;
}