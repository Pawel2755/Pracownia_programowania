#include <stdio.h>
#include <stdlib.h>


int productEven(int n,int tab[]){
    int iloczyn = 1;
    int parzyste =0;
    for(int i=0;i<n;i++){
        if(tab[i]%2==0){
            iloczyn *= tab[i];
            parzyste++;
        }
    }
    if(parzyste>0){
        return iloczyn;
    }else{
        return 1;
    }

}
