#include <stdio.h>
#include <stdlib.h>

int sumSquares(int n,int tab2[]){
    int suma = 0;
    for(int i=0;i < n;i++){
        suma+=(tab2[i]*tab2[i]);
    }
    return suma;
}
