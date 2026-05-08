#include <stdio.h>
#include <stdlib.h>

int maxRowIdx(int n,int m,int tab[n][m]){
    int max = tab[0][0];
    int ind = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(tab[i][j] > max){
                max = tab[i][j];
                ind = i;
            }
        }
    }
    return ind;


}

int main()
{
    int n = 2, m =3;
    int tab[2][3] = {{1,7,3},{4,5,6}};
    int wyniik = maxRowIdx(n,m,tab);
    printf("%d",wyniik);
    return 0;
}
