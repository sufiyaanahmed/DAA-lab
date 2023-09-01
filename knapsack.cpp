#include <stdio.h>

int max(int, int);
void knapsack();

int i, j, n, m, p[10], w[10], v[10][10];

int main() {
    printf("Enter the number of items: ");
    scanf("%d", &n);

    printf("Enter the weight of each item:\n");
    for (i = 1; i <= n; i++) {
        scanf("%d", &w[i]);
    }

    printf("Enter the profit of each item:\n");
    for (i = 1; i <= n; i++) {
        scanf("%d", &p[i]);
    }

    printf("Enter the knapsack's capacity: ");
    scanf("%d", &m);

    knapsack();

    return 0;
}

void knapsack() {
    int x[10];

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= m; j++) {
            if (i == 0 || j == 0) {
                v[i][j] = 0;
            } else if (j - w[i] < 0) {
                v[i][j] = v[i - 1][j];
            } else {
                v[i][j] = max(v[i - 1][j], v[i - 1][j - w[i]] + p[i]);
            }
        }
    }

    printf("The output is:\n");
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= m; j++) {
            printf("%d\t", v[i][j]);
        }
        printf("\n\n");
    }

    printf("The optimal solution is %d\n", v[n][m]);

    printf("The solution vector is:\n");
    for (i = n; i >= 1; i--) {
        if (v[i][m] != v[i - 1][m]) {
            x[i] = 1;
            m = m - w[i];
        } else {
            x[i] = 0;
        }
    }

    for (i = 1; i <= n; i++) {
        printf("%d\t", x[i]);
    }
}

int max(int x, int y) {
    return (x > y) ? x : y;
}
