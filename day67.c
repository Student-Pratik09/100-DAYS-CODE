//Q117 (Logic Enhancers)Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>

int main() {
    int m, n;
    int a[100], b[100], merged[200];
    int i = 0, j = 0, k = 0;

    // Input size of first array
    printf("Enter size of first array: ");
    scanf("%d", &m);

    // Input first sorted array
    printf("Enter first sorted array: ");
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    // Input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n);

    // Input second sorted array
    printf("Enter second sorted array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    // Reset indices
    i = 0;
    j = 0;
    k = 0;

    // Merge both arrays in sorted order
    while (i < m && j < n) {
        if (a[i] <= b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }

    // Copy remaining elements of a[], if any
    while (i < m)
        merged[k++] = a[i++];

    // Copy remaining elements of b[], if any
    while (j < n)
        merged[k++] = b[j++];

    // Print merged sorted array
    printf("Merged sorted array: ");
    for (i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}


