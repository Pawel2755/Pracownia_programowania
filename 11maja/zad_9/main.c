#include <stdio.h>
#include <stdlib.h>

void revRows(int n,int m, int tab[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m/2;j++){
            int temp = tab[i][j];
            tab[i][j] = tab[i][m-j-1];
            tab[i][m-j-1] = temp;
        }
    }

}


int main()
{
    int n = 2, m =3;
    int tab2[2][3] = {{1,2,3},{4,5,6}};
    int tab[2][3] = {{0,0,0},{0,0,0}};
    revRows(n,m,tab2);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",tab2[i][j]);
        }
    }

    return 0;
}
