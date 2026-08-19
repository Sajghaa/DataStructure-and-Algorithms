#include <stdio.h>


void insertElement(int arr[], int *n, int capacity,int element, int pos){

    if (*n >= capacity){
        printf("Error: Array is full (overflow).\n");
        return;
    }

    if (pos < 0 || pos > *n){
        printf("Error: Invalid Position.\n");
        return;
    }

    for (int i = *n; i > pos; i--){
        arr[i] = arr[i-1];
    }

    arr[pos] = element;

    (*n)++;

    printf("Inserted %d at index %d successfully!\n", element, pos);
}

int main(){
    int arr[10] = {1, 3, 5, 7, 9};
    int size = 5;

    insertElement(arr, &size, 10, 99, 2);

    for (int i = 0; i < size; i++){
        printf(" %d ", arr[i]);
    }
    return 0;
}