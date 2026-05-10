#include <stdio.h>


void swapElems(int n, int m, int tab1[n][m], int tab2[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int temp = tab1[i][j];
            tab1[i][j] = tab2[i][j];
            tab2[i][j] = temp;
        }
    }
}



int main() {
    int n = 2, m = 3;
    int mat1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int mat2[2][3] = {{7, 8, 9}, {10, 11, 12}};
    printf("Matrix 1 przed:");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",mat1[i][j]);
        }
    }
    printf("\n");
    printf("Matrix 2 przed:");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",mat2[i][j]);
        }
    }
    printf("\n");
    printf("Matrix 1 po:");
    swapElems(n, m, mat1, mat2);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",mat1[i][j]);
        }
    }
    printf("\n");
    printf("Matrix 2 po:");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",mat2[i][j]);
        }
    }

    return 0;
}
