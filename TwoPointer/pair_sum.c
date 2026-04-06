#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 6};
    int n = 5, target = 6;

    int left = 0, right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            printf("Pair found: %d + %d = %d", arr[left], arr[right], target);
            return 0;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    printf("No pair found");
    return 0;
}