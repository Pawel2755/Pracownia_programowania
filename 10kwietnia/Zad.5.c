#include <stdio.h>
#include <stdlib.h>


int revCopy(int n,int tab1[],int tab2[]){
    for(int i=n;i > 0;i--){
        tab2[i] = tab1[i];
    }

}
