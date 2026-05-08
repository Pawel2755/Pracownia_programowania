#include <stdio.h>
#include <stdlib.h>

int minColIdx(int n,int m,int** tab){
    int min = tab[0][0];
    int ind = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(tab[i][j] < min){
                min = tab[i][j];
                ind = j;
            }
        }
    }
    return ind;


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

    int wynik = minColIdx(n,m,tab);
    printf("%d",wynik);
    return 0;
}
