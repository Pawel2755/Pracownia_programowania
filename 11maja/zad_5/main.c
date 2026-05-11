#include <stdio.h>
#include <stdlib.h>

void copyMat(int n,int m,int tab1[n][m],int tab2[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            tab1[i][j]= tab2[i][j];
        }
    }

}


int main()
{
    int n = 2, m =3;
    int tab2[2][3] = {{1,2,3},{4,5,6}};
    int tab[2][3] = {{0,0,0},{0,0,0}};
    copyMat(n,m,tab,tab2);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",tab[i][j]);
        }
    }

    return 0;
}
