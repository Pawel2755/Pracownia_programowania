#include <stdio.h>
#include <stdlib.h>
//Zad.2
int sum (int a, int b){
    return a + b;


}

int sumVals (int *a, int *b){

    return *a + *b;
}

void addPtr(int *x,int *y,int *wynik){
    *wynik = *x + *y;

}
//Zad.4
double findMax(const double *num1,double *const num2){
    if(*num1 >*num2){
        return *num1;
    }
    return *num2;
}
//Zad.7
float* initFlts(){
float *i = (float*)malloc(4 *sizeof(float));
if (i == NULL){
    printf("Blad alokacji pamieci\n");
    return 1;
}
*i = 0.5f;
*(i+1) = 1.5f;
*(i+2) = 2.5f;
*(i+3) = 3.5f;
return (i+3);


}
//Zad.10
double subPtrs(const double *num1,double *const num2){
return *num1 - *num2;

}

int main()
{
//    const double num1 = 545.76;
//    double num2 = 345.765;
//    double *const cnum2 = &num2;
//    printf("Wynik to %lf",subPtrs(&num1,cnum2));

//    float *fl = initFlts();
//    printf("%.1lf\n %.1lf\n %.1lf\n %.1lf",*(fl-3),*(fl-2),*(fl-1),*(fl));
//    free(fl-3);
//    const double num1 = 2.93;
//    double num2 = 6.334;
//    double * const wsk = &num2;
//    printf("Wieksza liczba to: %lf",findMax(&num1,wsk));
//    int a = 5,b = 7,wynik=0,x =2,y=5;
//    addPtr(&x,&y,&wynik);
//    printf("1) Suma wynosi: %d\n",sum(a,b));
//    printf("2) Suma wynosi: %d\n",sumVals(&x,&y));
//    printf("3) Suma wynosi: %d",wynik);
//    printf("%zu\n", sizeof(int));
//    printf("%zu\n", sizeof(int*));
    return 0;
}
