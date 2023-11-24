#include <stdio.h>
void printSubsets(int set[], int n) {
    printf("Subsets and their sums:\n");

    for (int i = 0; i < (1 << n); i++) {
        int sum = 0;

        printf("{ ");
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                printf("%d ", set[j]);
                sum += set[j];
            }
        }
        printf("} => Sum: %d\n", sum);
    }
}

int main() {
    int n;
    printf("Enter the size of the set: ");
    scanf("%d", &n);

    int set[n];
    printf("Enter the elements of the set:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &set[i]);
    }
    printSubsets(set, n);

    return 0;
}

