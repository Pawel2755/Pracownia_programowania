#include <stdio.h>
#include <stdlib.h>

void strCopyNew(char tab1[],char tab2[]){
    int i=0;
    while(tab1[i] != '\0'){
        tab2[i] = tab1[i];
        i++;
    }tab2[i] = '\0';


}




int main()
{
    char nap1[] = "Hello World";
    char nap2[] = "";
    strCopyNew(nap1,nap2);
    printf("%s",nap2);
    return 0;
}
