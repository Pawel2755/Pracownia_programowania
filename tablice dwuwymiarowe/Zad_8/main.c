#include <stdio.h>
#include <stdlib.h>

void swapItems(int n, int m, int **tab1, int **tab2) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int temp = tab1[i][j];
            tab1[i][j] = tab2[i][j];
            tab2[i][j] = temp;
        }
    }
}

int main() {
    int n = 2, m = 2;
    int **arr1 = malloc(n * sizeof(int *));
    int **arr2 = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        arr1[i] = malloc(m * sizeof(int));
        arr2[i] = malloc(m * sizeof(int));
    }

    arr1[0][0] = 1;
    arr1[0][1] = 2;
    arr1[1][0] = 3;
    arr1[1][1] = 4;
    arr2[0][0] = 5;
    arr2[0][1] = 6;
    arr2[1][0] = 7;
    arr2[1][1] = 8;

    printf("Przed %d, %d\n", arr1[0][0], arr2[0][0]);

    swapItems(n, m, arr1, arr2);

    printf("Po %d, %d\n", arr1[0][0], arr2[0][0]);

    for (int i = 0; i < n; i++) {
        free(arr1[i]);
        free(arr2[i]);
    }
    free(arr1);
    free(arr2);

    return 0;
}
