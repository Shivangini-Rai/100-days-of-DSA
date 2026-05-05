#include <stdio.h>

int main() {
    int n;

    // Read size
    scanf("%d", &n);

    int arr[n];

    // Read array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Edge case
    if (n == 0) return 0;

    int i = 0; // points to last unique element

    for (int j = 1; j < n; j++) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }

    // Print unique elements
    for (int k = 0; k <= i; k++) {
        printf("%d ", arr[k]);
    }

    return 0;
}