#include <stdio.h>
#include <stdlib.h>

void copyArr2D(int n,int m,int** tab1,int** tab2){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            tab1[i][j]= tab2[i][j];
        }
    }


}



int main()
{
    int n=2,m=3;

    int **tab =(int**) malloc(sizeof(int*)*2);
    tab[0] = (int*) malloc(sizeof(int)*3);
    tab[1] = (int*) malloc(sizeof(int)*3);
    *(*(tab+0)+0) = 1;
    *(*(tab+0)+1) = 2;
    *(*(tab+0)+2) = 3;
    *(*(tab+1)+0) = 4;
    *(*(tab+1)+1) = 5;
    *(*(tab+1)+2) = 6;

    int **tab3 =(int**) malloc(sizeof(int*)*2);
    tab3[0] = (int*) malloc(sizeof(int)*3);
    tab3[1] = (int*) malloc(sizeof(int)*3);
    *(*(tab3+0)+0) = 0;
    *(*(tab3+0)+1) = 4;
    *(*(tab3+0)+2) = 7;
    *(*(tab3+1)+0) = 0;
    *(*(tab3+1)+1) = 8;
    *(*(tab3+1)+2) = 0;

    copyArr2D(n,m,tab,tab3);


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\n",tab[i][j]);
        }
    }
    return 0;
}
