#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pos, x;
    
    // Read the number of elements
    scanf("%d", &n);
    
    // Allocate memory for array (n+1 to accommodate the new element)
    int *arr = (int*)malloc((n + 1) * sizeof(int));
    
    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read the position and the element to insert
    scanf("%d", &pos);
    scanf("%d", &x);
    
    // Check if position is valid (1-based indexing)
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        free(arr);
        return 1;
    }
    
    // Shift elements to the right from the end
    for (int i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }
    
    // Insert the new element at the given position
    arr[pos - 1] = x;
    
    // Print the updated array
    for (int i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Free allocated memory
    free(arr);
    
    return 0;
}