#include <stdio.h>
#include <stdlib.h>

void transpose(int n,int tab[n][n]){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp = tab[i][j];
            tab[i][j] = tab[j][i];
            tab[j][i] = temp;
        }
    }


}


int main()
{
    int n = 2;
    int tab2[2][2] = {{1,2},{4,5}};
    transpose(n,tab2);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",tab2[i][j]);
        }
    }
    return 0;
}
