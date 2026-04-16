#include <stdio.h>
#include <stdlib.h>

int sumEvenIndices(int n,int tab[]){
    int suma=0;
    for(int i=0;i < n; i+=2){
        suma += tab[i];
    }return suma;
}
