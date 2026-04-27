#include <stdio.h>
#include <stdlib.h>


int countNums(char *tab){
    int liczba =0;
    for(int i=0;tab[i] != '\0';i++){
        if(tab[i]>='0' && tab[i]<='9'){
            liczba++;
        }
    }return liczba;

}


int main()
{
    char nap1[] = "H1ello World2";
    printf("%d",countNums(nap1));
    return 0;
}
