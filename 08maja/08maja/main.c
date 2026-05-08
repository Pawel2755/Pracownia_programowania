#include <stdio.h>
#include <stdlib.h>


int sumMatrix(int n,int m,int tab[n][m]){
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
    int tab[2][3] = {{1,2,3},{4,5,6}};
    int wyniik = sumMatrix(n,m,tab);
    printf("%d",wyniik);
    return 0;
}
