#include <stdio.h>
#include <stdlib.h>




void toUpperNew(char tab[]){
    for(int i=0;tab[i] != '\0';i++){
    if(tab[i] >= 'a' && tab[i] <= 'z'){
        tab[i] = tab[i] - ('a'-'A');

    }

    }




}


int main()
{

    char nap1[] = "hello world";
    printf("%s\n",nap1);
    toUpperNew(nap1);
    printf("%s",nap1);
    return 0;
}
