#include <stdio.h>
#include <stdlib.h>

void shiftLeft(int n, float tab[]);

int sumAboveThreshold(int k,int n,int arr[]);

int productEven(int n,int tab[]);

int sumOdd(int n,int tab[]);

int sumOddIndex(int n,int tab[]);

int main()
{
    int tab[] = {1,5,86,2,541,3534,154,5};
    int tab1[] = {3,4,5,2,7};
    int tab2[] = {2,7,4,9,3};
    int tab3[] = {3,-4,5,7,3};
    int tab4[] = {3,-4,0,5,15};
    int n = sizeof(tab4) / sizeof(tab4[0]);

    replaceWithFactorial(n,tab4);
    for(int i=0;i<n;i++){
        printf("%d\n",tab4[i]);
    }

//    printf("%d\n",sumOddIndex(n,tab3));

//    printf("%d\n",sumOdd(n,tab2));

//    printf("%d\n",productEven(n,tab1));



//    int tab2[n];
//    float tab3[]={3.56,654.34,6565.7655,4535.453,4535677.7756};
//    shiftLeft(4,tab3);

//    int k=10,n=6;
//    int tab4[]={4,12,3,15,8,25};
//
//    printf("%d\n",sumAboveThreshold(k,n,tab4));

    return 0;
}
