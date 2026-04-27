#include <stdio.h>
#include <stdlib.h>


int lexComp(char tab1[],char tab2[]){
    int i=0;
    while (tab1[i] != '\0' && tab2[i] != '\0'){
        if(tab1[i] < tab2[i]){
            return 1;
        }else if(tab1[i]>tab2[i]){
        return 0;
        }i++;
    }


}


int main()
{
    char nap1[] = "Hello World";
    char nap2[] = "Zo World";

    printf("%d",lexComp(nap1,nap2));

    return 0;
}
