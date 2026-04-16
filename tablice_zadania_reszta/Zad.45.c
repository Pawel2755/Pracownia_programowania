#include <stdio.h>
#include <stdlib.h>



void replaceWithFactorial(int n,int tab[]){
    for (int i=0;i<n;i++){
        int wartosc = abs(tab[i]);
        if (wartosc > 12){
            tab[i] =-1;
        }else{
            int silnia =1;
            for (int j =2;j<=wartosc;j++){
                silnia*=j;

            }
            tab[i]=silnia;
        }

    }
}
