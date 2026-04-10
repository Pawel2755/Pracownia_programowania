#include <stdio.h>
#include <stdlib.h>

//Zad.1
void findMaxValue(int numbers[],int size){
    int max = numbers[0];
    for(int i=1;i<size;i++){
        if(numbers[i] > max){
            max = numbers[i];
        }
    }
    printf("%d\n",max);
}
//Zad.2
//double average(int n,int tab1[]){
//    int suma = 0;
//    for(int i=0;i < n;i++){
//        suma+=tab1[i];
//    }
//    return (double)suma/n;
//
//}

int copyArr(int n,int tab1[],int tab2[]);


int main()
{
    int tab[] = {1,5,86,2,541,3534,154,5};
    int n = sizeof(tab) / sizeof(tab[0]);
    int tab2[n];



//    revCopy(n,tab,tab2);
//    printf("%d\n",tab2[0]);

//    copyArr(n,tab,tab2);
//    printf("%d\n",tab2[2]);


//    findMaxValue(tab,6);
//    printf("%lf\n",average(2,tab));
//    printf("%d\n",sumSquares(2,tab));
    return 0;
}
