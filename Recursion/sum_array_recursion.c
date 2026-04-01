#include <stdio.h>

int sumArray(int arr[], int n) {
    if (n <= 0)
        return 0;
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = 4;

    printf("Sum of array: %d", sumArray(arr, n));
    return 0;
}