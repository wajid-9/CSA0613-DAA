#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define N 4
int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int calculateDistance(int path[], int graph[N][N]) {
    int distance = 0;
    for (int i = 0; i < N - 1; i++) {
        distance += graph[path[i]][path[i + 1]];
    }
    distance += graph[path[N - 1]][path[0]]; 
    return distance;
}
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int tsp(int graph[N][N]) {
    int path[N];
    for (int i = 0; i < N; i++) {
        path[i] = i;
    }

    int minDistance = INT_MAX;
    int totalPermutations = factorial(N);
    for (int i = 0; i < totalPermutations; i++) {
        int currentDistance = calculateDistance(path, graph);
        if (currentDistance < minDistance) {
            minDistance = currentDistance;
        }
        int j = N - 2;
        while (j != -1 && path[j] > path[j + 1]) {
            j--;
        }

        if (j == -1) {
            break;
        }

        int k = N - 1;
        while (path[j] > path[k]) {
            k--;
        }

        swap(&path[j], &path[k]);

        int l = j + 1;
        int r = N - 1;
        while (l < r) {
            swap(&path[l], &path[r]);
            l++;
            r--;
        }
    }

    return minDistance;
}

int main() {
    int graph[N][N] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int minDistance = tsp(graph);

    printf("Minimum distance for TSP: %d\n", minDistance);

    return 0;
}

