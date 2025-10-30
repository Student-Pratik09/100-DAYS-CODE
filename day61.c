/*Q111: Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the first negative integer in each subarray of size k moving from left to right. 
If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
*/

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid value of k\n");
        return 0;
    }

    // Loop over all subarrays of size k
    for (int i = 0; i <= n - k; i++) {
        int found = 0; // flag to check if negative exists
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }
        if (!found)
            printf("0");
        if (i != n - k)
            printf(" ");
    }

    printf("\n");
    return 0;
}