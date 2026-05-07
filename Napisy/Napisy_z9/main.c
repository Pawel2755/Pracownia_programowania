#include <stdio.h>
#include <stdlib.h>

 void strNcopy(char nap1[],char nap2[],unsigned int n){
    int temp = 0;
    while(nap1[temp] != '\0' && temp < n){
        nap2[temp] = nap1[temp];
        temp++;
    }
    nap2[temp] = '\0';
 }


int main()
{
    char nap1[] = "Hello World";
    char nap2[] = "";
    strNcopy(nap1,nap2,20);
    printf("%s",nap2);
    return 0;
}
