#include <stdio.h>
int parent[1000];  // बड़ा size ताकि ज्यादा vertices handle हों
int find(int x) {
    while (parent[x] != x) {
        x = parent[x];
    }
    return x;
}

// Union function
void unite(int a, int b) {
    parent[find(a)] = find(b);
}

int main() {
    int v, e;
    printf("Enter No. of Vertex And Edge:-");
    scanf("%d %d", &v, &e);
    int u[e], v2[e], w[e];

    // Input edges
    for (int i = 0; i < e; i++) {
        printf("Enter for edge(%d) :- ",i);
        scanf("%d %d %d", &u[i], &v2[i], &w[i]);
    }

    // Initialize parent array
    for (int i = 0; i < v; i++) {
        parent[i] = i;
    }

    // Sort edges by weight (Bubble Sort)
    for (int i = 0; i < e; i++) {
        for (int j = i + 1; j < e; j++) {
            if (w[i] > w[j]) {
                // swap weights
                int t = w[i]; w[i] = w[j]; w[j] = t;

                // swap u
                t = u[i]; u[i] = u[j]; u[j] = t;

                // swap v2
                t = v2[i]; v2[i] = v2[j]; v2[j] = t;
            }
        }
    }

    int mst = 0;
    printf("Edges in MST:\n");
    for (int i = 0; i < e; i++) {
        if (find(u[i]) != find(v2[i])) {
            unite(u[i], v2[i]);
            mst += w[i];
            printf("%d --- %d (w=%d)\n", u[i], v2[i], w[i]);
        }
    }

    printf("MST weight = %d\n", mst);
    return 0;
}