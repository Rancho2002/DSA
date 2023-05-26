#include <stdio.h>
#include <stdlib.h>

typedef struct Item {
    int weight;
    int value;
} item;

int compare(const void *a, const void *b) {    // Compare function to sort the items based on value/weight ratio
    item *ia = (item *)a;
    item *ib = (item *)b;
    double r1 = ((double)ia->value / ia->weight);
    double r2 = ((double)ib->value / ib->weight);
    return r2 > r1 ? 1 : -1;
}

double fractionalKnapsack(int W, item arr[], int n) {
    qsort(arr, n, sizeof(item), compare);    
  // Sort items by value/weight ratio
    int currentWeight = 0;
    double finalValue = 0.0;

    for (int i = 0; i < n; i++) {
        if (currentWeight + arr[i].weight <= W) {
            currentWeight += arr[i].weight;
            finalValue += arr[i].value;
        }
        else {
            int remaining = W - currentWeight;
            finalValue += arr[i].value * ((double)remaining / arr[i].weight);
            break;
        }
    }

    return finalValue;
}

int main() {
    item arr[] = {{18, 25}, {15, 24}, {10, 15}};
    int n = sizeof(arr) / sizeof(arr[0]);
    int W = 20;
    printf("Maximum value we can obtain = %lf", fractionalKnapsack(W, arr, n));
    return 0;
}
