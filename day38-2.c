// Q76: Check if a matrix is symmetric.
#include <stdio.h>

int main() {
    int n, i, j, flag = 1;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check symmetry
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            break;
    }

    // Output result
    if (flag == 1)
        printf("The matrix is Symmetric.\n");
    else
        printf("The matrix is NOT Symmetric.\n");

    return 0;
}
