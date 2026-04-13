#include <stdio.h>
#include <stdlib.h>


void replaceWithFactorial(int n,int tab[]){
        int silnia =1;
        for(int i=0;i<n;i++){
            for(int j=1;j <=i;j++){
                if(tab[i]>12){
                    tab[i]=-1;
                }else{
                    tab[i]*=j;
                }
            }

        }

}
