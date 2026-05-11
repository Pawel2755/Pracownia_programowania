#include <stdio.h>
#include <stdlib.h>


void revColsArr(int n,int m,int** tab){
    for(int j=0;j<m;j++){
        for(int i=0;i<n/2;i++){
            int temp = *(*(tab + i)+j);
            *(*(tab + i)+j) = *(*(tab + (n-i-1))+j);
            *(*(tab + (n-i-1))+j) = temp;
        }
    }


}


int main()
{
    int n = 2, m = 3;
    int **tab = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        tab[i] = malloc(m * sizeof(int));
    }

    tab[0][0] = 1;
    tab[0][1] = 2;
    tab[0][2] = 3;
    tab[1][0] = 4;
    tab[1][1] = 5;
    tab[1][2] = 6;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",tab[i][j]);
        }
    }
    revColsArr(n,m,tab);
    printf("\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",tab[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        free(tab[i]);
    }
    free(tab);
    return 0;
}
