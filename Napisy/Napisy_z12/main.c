#include <stdio.h>
#include <stdlib.h>

void rmDigits(char tab[]){
    int i=0,j=0;
    while(tab[i] != '\0'){
        if (!(tab[i] >= '0' && tab[i] <='9')){
            tab[j] = tab[i];
            j++;
        }
        i++;
    }
    tab[j] = '\0';
}


int main()
{
    char nap1[] = "He11o W0r18";
    rmDigits(nap1);
    printf("%s\n",nap1);
    return 0;
}




