#include <stdio.h>
#include <stdlib.h>


int countVow(char *tab){
    int liczba=0;
    for(int i=0;tab[i] != '\0';i++){
        if(tab[i]=='A'||tab[i]=='a'||tab[i]=='E'||tab[i]=='e'||tab[i]=='I'||tab[i]=='i'||tab[i]=='O'||tab[i]=='o'||tab[i]=='U'||tab[i]=='u'||tab[i]=='Y'||tab[i]=='y'){
            liczba++;
        }
    }return liczba;

}


int main()
{
    char nap1[] = "aeiouyAEIOUY";
    printf("%d",countVow(nap1));
    return 0;
}
