#include <stdio.h>
#include <stdlib.h>

void flipDiag(int m,int n, int tab[m][n]){
    if(n!=m){
        printf("Macierz powinna byc kwarratowa");
        return;
    }
    int row = 0,col = 0;
    while (row< (m/2)){
        *(*(tab + row)+ col) ^= *(*(tab + m - row -1) + n - col -1);
    }
}



int main()
{
    printf("Hello world!\n");
    return 0;
}
