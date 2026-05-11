#include <stdio.h>
#include <stdlib.h>


void transArr(int n,int** tab){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp = *(*(tab + i)+j);
            *(*(tab + i)+j) = *(*(tab + j)+i);
            *(*(tab + j)+i) = temp;
        }
    }


}

int main()
{

    int n = 2;
    int **tab = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        tab[i] = malloc(n * sizeof(int));
    }

    tab[0][0] = 1;
    tab[0][1] = 2;
    tab[0][2] = 3;
    tab[1][0] = 4;
    tab[1][1] = 5;
    tab[1][2] = 6;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",tab[i][j]);
        }
    }
    transArr(n,tab);
    printf("\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",tab[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        free(tab[i]);
    }
    free(tab);
    return 0;
}
