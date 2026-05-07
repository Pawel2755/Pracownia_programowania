#include <stdio.h>
#include <stdlib.h>

void rmLower(char tab[]){
    int i=0,j=0;
    while(tab[i] != '\0'){
        if (!(tab[i] >= 'a' && tab[i] <='z')){
            tab[j] = tab[i];
            j++;
        }
        i++;
    }
    tab[j] = '\0';
}


int main()
{
    char nap1[] = "HeLLo WoRlD";
    rmLower(nap1);
    printf("%s\n",nap1);
    return 0;
}
