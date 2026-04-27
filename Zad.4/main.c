#include <stdio.h>
#include <stdlib.h>

int cmpStrNew(char tab1[], char tab2[]){
    int liczba =0;
    int liczba2 =0;
    while(tab1[liczba] != '\0' || tab2[liczba] != '\0'){
        if(tab1[liczba] != tab2[liczba]){
            liczba2++;
        }liczba++;
    }if (liczba2 != 0){
        return 0;
    }return 1;
}




int main()
{
    char nap1[] = "Hello World";
    char nap2[] = "Hello World";

    printf("%d",cmpStrNew(nap1,nap2));
    return 0;
}
