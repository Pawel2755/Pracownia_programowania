#include <stdio.h>
#include <stdlib.h>

int sumOdd(int n,int tab[]){
    int suma = 0;
    int nieparzyste =0;
    for(int i=0;i<n;i++){
        if(tab[i]%2!=0){
            suma += tab[i];
            nieparzyste++;
        }
    }
    if(nieparzyste>0){
        return suma;
    }else{
        return 0;
    }

}
