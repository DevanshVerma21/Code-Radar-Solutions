#include <stdio.h>

void findFrequency(int arr[], int n) {
    int visited[n];

    // Initialize visited array to 0 (false)
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    printf("Element Frequency\n");

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue;  // Skip if already counted
        }

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;  // Mark as counted
            }
        }

        printf("%d       %d\n", arr[i], count);
    }
}

int main() {
    int n;

    // Input size of array
    // printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements
    // printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print frequency
    findFrequency(arr, n);

    return 0;
}
