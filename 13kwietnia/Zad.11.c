#include <stdio.h>
#include <stdlib.h>


void shiftLeft(int n, float tab[]){
    float pierwszy = tab[0];
    for(int i=0;i < n-1;i++){
        tab[i] = tab[i+1];
    }
    tab[n-1] = pierwszy;
}
