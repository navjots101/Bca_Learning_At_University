#include <stdio.h>

int main() {
    int n, i, num, positive_count = 0, negative_count = 0;

    printf("Enter the number of integers to input: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter integer %d: ", i+1);
        scanf("%d", &num);

        if (num > 0) {
            positive_count++;
        } else if (num < 0) {
            negative_count++;
        }
    }

    printf("\nTotal positive numbers: %d\n", positive_count);
    printf("Total negative numbers: %d\n", negative_count);

    return 0;
}
