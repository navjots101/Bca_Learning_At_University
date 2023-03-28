//Write a C code to find the number of distinct elements in a sorted array.
#include <stdio.h>

int countDistinct(int arr[], int n) {
    int count = 1; // at least one distinct element
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i-1]) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 6, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Number of distinct elements: %d\n", countDistinct(arr, n));
    return 0;
}
