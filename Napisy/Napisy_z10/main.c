#include <stdio.h>
#include <stdlib.h>


void strConcat(char nap1[],char nap2[],char nap3[]){
    int i=0,j=0;
    while(nap1[i] != '\0'){
        nap3[i] = nap1[i];
        i++;
    }
    while(nap2[j] != '\0'){
        nap3[i+j] = nap2[j];
        j++;
    }
    nap3[i+j] = '\0';


}


int main()
{
    char nap1[] = "Hello World";
    char nap2[] = "Goodbye World";
    char nap3[50];
    strConcat(nap1,nap2,nap3);
    printf("%s",nap3);
    return 0;
}
