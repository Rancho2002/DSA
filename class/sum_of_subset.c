#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Function to solve the subset sum problem
bool isSubsetSum(int set[], int n, int sum) {
    bool subset[MAX_SIZE][MAX_SIZE];

    // Initialize the subset matrix
    for (int i = 0; i <= n; i++)
        subset[i][0] = true;

    for (int i = 1; i <= sum; i++)
        subset[0][i] = false;

    // Fill the subset matrix
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (j < set[i - 1])
                subset[i][j] = subset[i - 1][j];
            else
                subset[i][j] = subset[i - 1][j] || subset[i - 1][j - set[i - 1]];
        }
    }

    return subset[n][sum];
}

int main() {
    int set[] = {3, 34, 4, 12, 5, 2};
    int n = sizeof(set) / sizeof(set[0]);
    int sum = 9;

    if (isSubsetSum(set, n, sum))
        printf("Subset with the given sum exists.\n");
    else
        printf("Subset with the given sum does not exist.\n");

    return 0;
}
