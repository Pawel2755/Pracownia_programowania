#include <stdio.h>
#include <stdlib.h>
void reverseArr(int n, int tab[]);

int maxValue(int n, int tab[]);

int minValue(int n, int tab[]);

int maxIdx(int n, int tab[]);

int minIdxMax(int n, int tab[]);

int main()
{
    int tab[] = {1,5,86,2,541,3534,154,5};
    int n = sizeof(tab) / sizeof(tab[0]);
    int tab2[n];
    int tabDupMax[] = {1, 9, 3, 9, 5};
    int tabDupMin[] = {3, 1, 4, 1, 5};

    printf("%d\n",minIdxMax(5,tabDupMin));


//    printf("%d\n",maxIdx(n,tabDupMax));


//    printf("Max value: %d\n", maxValue(n, tab));


//    printf("Min value: %d\n", minValue(n, tab));


    int odwtab[] = {1,2,3,4,5};
    reverseArr(5,odwtab);
//    printf("%d\n",odwtab[0]);
    return 0;
}
