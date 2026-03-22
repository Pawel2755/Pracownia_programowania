#include <stdio.h>
#include <stdlib.h>


//Zad.1
void sumTwoNumbers(int a,int b){

printf("Suma wynosi: %d\n",a+b);

}
//Zad.2
double calculateAbsoluteValue(double x){
    if (x > 0.0){
        return ("$d",x);
    }else{
        return x*(-1.0);
    }

}
//Zad.5

int sumSquares(int n){
    int sum =0;
    for(int i=1;i<=n;i++){
        sum +=(i*i);

    }
    return sum;
}
//Zad.8

void countFunctionCalls(){
    static int liczba = 0;
    liczba++;
    printf("funkcja zostala wywolana: %d razy",liczba);
}
//Zad.10
int calculateFactorialRecursively(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return calculateFactorialRecursively(n-1)+calculateFactorialRecursively(n-2);
    }

}
//Zad.11
int calculateArithmeticSequenceRecursively(int n,int d){
    if (n==1) return 1;
    return calculateArithmeticSequenceRecursively(n-1,d)+d;



}
//Zad.14
int calculate14(int n){
    int wynik =2;
    for (int i=2;i<=n;i++){
        wynik = 3*wynik-1;

    }

    return wynik;

}
//Zad.17
int calculate17(int n){
    if(n==1||n==0) return 1;
    int suma = 0;
    for(int i=0;i<n;i++){
        suma+=calculate17(i);
    }
    return suma;
}





int main()
{
//    sumTwoNumbers(5,10);
//    printf("%lf",calculateAbsoluteValue(-5.25));
//    printf("Suma kwadratow wynosi: %d",sumSquares(5));
//    countFunctionCalls();
//    countFunctionCalls();
//    printf("%d",calculateFactorialRecursively(15));
//    printf("%d",calculateArithmeticSequenceRecursively(25,3));
//    printf("%d",calculate14(2));
//    printf("%d",calculate17(1));

}
