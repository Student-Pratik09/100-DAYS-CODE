//Q116 (Logic Enhancers)Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
// Q116 (Logic Enhancers)
// Find two indices in an array such that their sum equals the target

#include <stdio.h>

int main() {
    int n, target;
    int nums[100];
    int i, j, found = 0;

    // Input array size
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Input target
    printf("Enter target value: ");
    scanf("%d", &target);

    // Find two distinct indices i and j
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    // If no pair found
    if (!found) {
        printf("-1 -1\n");
    }

    return 0;
}
