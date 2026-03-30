#include <stdio.h>
#include <stdlib.h>

//Zad.13
int minPtr(int *a,int *b,int *c){
if (*a < *b && *a < *c){
    return *a;
}else if(*b < *a && *b < *c){
    return *b;
}else{
    return *c;
}

}
//Zad.16
int swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}
//Zad.17
double swapSign(double *a,double *b){
double temp = *a;
if(*a>0 && *b<0){
    *a = *b;
    *b = temp;
}else if(*a<0 && *b>0){
    *a = *b;
    *b = temp;
}

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


//    double a = 3, b= -1;
//    printf("Przed zmiana: a=%lf, b=%lf\n",a,b);
//    swapSign(&a,&b);
//    printf("Po zmianie: a=%lf, b=%lf",a,b);


//    int a = 5, b = 8;
//    printf("Przed zmiana: a=%d, b=%d\n",a,b);
//    swap(&a,&b);
//    printf("Po zmianie: a=%d, b=%d",a,b);


    int a=123,b=10,c=9;
    int min = minPtr(&a,&b,&c);
    printf("Najmniejsza wartosc to: %d ",min);
    return 0;
}
