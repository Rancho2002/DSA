#include <stdio.h>

#define MAX_SIZE 100

// Function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to solve the 0/1 Knapsack problem
int knapsack(int weights[], int values[], int n, int capacity) {
    int dp[MAX_SIZE][MAX_SIZE];

    // Initialize the dynamic programming table
    for (int i = 0; i <= n; i++)
        dp[i][0] = 0;

    for (int j = 0; j <= capacity; j++)
        dp[0][j] = 0;

    // Fill the dynamic programming table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= capacity; j++) {
            if (weights[i - 1] <= j)
                dp[i][j] = max(values[i - 1] + dp[i - 1][j - weights[i - 1]], dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    return dp[n][capacity];
}

int main() {
    int weights[] = {10, 20, 30};
    int values[] = {60, 100, 120};
    int n = sizeof(values) / sizeof(values[0]);
    int capacity = 50;

    int maxValue = knapsack(weights, values, n, capacity);

    printf("Maximum value that can be obtained: %d\n", maxValue);

    return 0;
}
