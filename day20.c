#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int prefix = 0;
    int count = 0;

    // Simple hashmap using array (range assumption)
    int freq[20001] = {0}; // to handle negative sums
    int offset = 10000;

    freq[offset] = 1; // prefix sum 0 initially

    for (int i = 0; i < n; i++) {
        prefix += arr[i];

        // If this prefix seen before → subarrays found
        count += freq[prefix + offset];

        // Increase frequency
        freq[prefix + offset]++;
    }

    printf("%d", count);

    return 0;
}