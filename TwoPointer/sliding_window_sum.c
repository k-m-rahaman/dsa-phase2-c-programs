#include <stdio.h>

int main() {
    int arr[] = {2, 1, 5, 1, 3, 2};
    int n = 6, k = 3;

    int windowSum = 0;

    for (int i = 0; i < k; i++)
        windowSum += arr[i];

    int maxSum = windowSum;

    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];

        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("Max window sum: %d", maxSum);
    return 0;
}