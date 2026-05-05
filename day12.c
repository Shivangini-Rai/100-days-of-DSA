#include <stdio.h>

int main() {
    int m, n;

    // Read dimensions
    scanf("%d %d", &m, &n);

    int A[m][n];

    // Read matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Check if square
    if (m != n) {
        printf("Not a Symmetric Matrix");
        return 0;
    }

    // Check symmetry
    int isSymmetric = 1;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (isSymmetric == 0)
            break;
    }

    // Output result
    if (isSymmetric)
        printf("Symmetric Matrix");
    else
        printf("Not a Symmetric Matrix");

    return 0;
}