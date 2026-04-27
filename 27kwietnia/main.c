#include <stdio.h>
#include <stdlib.h>

int length(char *napis){
    int dlugosc =0;
    while(napis[dlugosc] != '\0'){
        dlugosc++;
    }return dlugosc;
}



int main()
{
    char nap1[] = "Hello World2";
    char nap2[50] = "Hello World";
    printf("%d",length(nap1));

    return 0;
}
