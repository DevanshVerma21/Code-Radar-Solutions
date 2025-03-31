#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    // If there is only one element, return it as a peak
    if (n == 1) {
        return arr[0];
    }

    // Check first element
    if (arr[0] > arr[1]) {
        return arr[0];
    }

    // Check for peak in the middle elements
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i];  // Return the first peak found
        }
    }

    // Check last element
    if (arr[n - 1] > arr[n - 2]) {
        return arr[n - 1];
    }

    // No peak found
    return -1;
}

int main() {
    int n;

    // Input array size
    // printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    // printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find first peak
    int peak = findFirstPeak(arr, n);

    // Print result
    printf("%d\n", peak);

    return 0;
}
