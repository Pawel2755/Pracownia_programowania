#include <stdio.h>
#include <stdlib.h>


void toLowerNew(char tab[]){
    for(int i=0;tab[i] != '\0';i++){
    if(tab[i] >= 'A' && tab[i] <= 'Z'){
        tab[i] = tab[i] + ('a'-'A');

    }

    }




}


int main()
{

    char nap1[] = "HelLo WOrLd";
    printf("%s\n",nap1);
    toLowerNew(nap1);
    printf("%s",nap1);
    return 0;
}
