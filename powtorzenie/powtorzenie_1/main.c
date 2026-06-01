#include <stdio.h>
#include <stdlib.h>


char * copyEveryThird(char *napis){
    int i =0;
    int j =0;
    char* wynik = malloc(sizeof(char)* strlen(napis)/3+1);
    while (napis[i] != '\0'){
        if((i+1)%3==0){
            wynik[j] = napis[i];
            j++;
        }
        i++;

    }
    wynik[j] = '\0';
    return wynik;
}


int main()
{
    char *tablica = "Hello World";
    char * tablica1 = copyEveryThird(tablica);
    printf("%s",copyEveryThird(tablica));

    return 0;
}
