#include <iostream>
using namespace std;

int main() {
    int A[10] = {10, 20, 30, 40, 50};
    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        A[i] = A[i + 1];
    }

    n--;

    cout << "Delete at beginning: ";
    for (int i = 0; i < n; i++) cout << A[i] << " ";
}
