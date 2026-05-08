#include <stdio.h>
#include <stdlib.h>

int sumArray(int n,int m, int** tab){
    int suma =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            suma += tab[i][j];
        }
    }
    return suma;

}

int main()
{
    int n = 2, m =3;
    int **tab = (int**)malloc(n* sizeof(int*));
    for(int i=0;i <n;i++){
        tab[i] = (int*)malloc(m*sizeof(int));
    }

    int count = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            tab[i][j]=count++;
        }
    }

    int wynik = sumArray(n,m,tab);
    printf("%d",wynik);
    return 0;
}
