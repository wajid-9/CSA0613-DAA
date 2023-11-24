#include <stdio.h>

#define MAX_VERTICES 5

int graph[MAX_VERTICES][MAX_VERTICES];

int valid(int path[], int v, int p) {
    if (graph[path[p - 1]][v] == 0) {
        return 0;
    }
    for (int i = 0; i < p; i++) {
        if (path[i] == v) {
            return 0;
        }
    }
    return 1;
}

int hami(int path[], int p) {
    if (p == MAX_VERTICES) {
        if (graph[path[p - 1]][path[0]] == 1) {
            return 1;
        }
        return 0;
    }
    for (int v = 1; v < MAX_VERTICES; v++) {
        if (valid(path, v, p)) {
            path[p] = v;
            if (hami(path, p + 1)) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int path[MAX_VERTICES];
    path[0] = 0;
    if (hami(path, 1)) {
        printf("Hamiltonian Circuit: ");
        for (int i = 0; i < MAX_VERTICES; i++) {
            printf("%d ", path[i]);
        }
        printf("%d\n", path[0]);
    } else {
        printf("No solution\n");
    }
    return 0;
}

