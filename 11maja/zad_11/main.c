#include <stdio.h>
#include <stdlib.h>

void revCols(int n,int m,int tab[n][m]){
    for(int j=0;j<m;j++){
        for(int i=0;i<n/2;i++){
            int temp = tab[i][j];
            tab[i][j] = tab[n-i-1][j];
            tab[n-1-i][j] = temp;
        }
    }



}


int main()
{
    int n = 2, m =3;
    int tab2[2][3] = {{1,2,3},{4,5,6}};
    revCols(n,m,tab2);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",tab2[i][j]);
        }
    }
    return 0;
}
