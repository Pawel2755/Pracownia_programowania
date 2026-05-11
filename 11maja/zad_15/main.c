#include <stdio.h>
#include <stdlib.h>

double oddAvg(int n,int m,int** tab){
    int suma =0;
    int count =0;
    for(int i=1;i<n;i+=2){
        for(int j=1;j<m;j += 2){
            suma+=*(*(tab + i)+j);
            count++;
        }
    }
    if(count ==0){
        return 0.0;
    }
    return (double) suma/count;


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

    int wynik = oddAvg(n,m,tab);
    printf("%d",wynik);

    for (int i = 0; i < n; i++) {
        free(tab[i]);
    }
    free(tab);


    return 0;
}
