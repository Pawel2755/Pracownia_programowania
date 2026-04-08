#include <stdio.h>
#include <stdlib.h>

//Zad.1
int operation(int number){
    return number;
}
int calculate(int(*operation)(int liczba),int number){
    return operation(number);
    }
//Zad.2
int func(int liczba){
    return liczba;
}
void applyFunction(int(*func)(int arg),int start,int end){
    for (int i=start; i<=end;i++){
        printf("%d\n",func(i));
    }
}
//Zad.4
double operation1(double arg1,double arg2){
    return arg1 - arg2;
}
double calculateOperation(double (*operation1)(double ,double ),double number1,double number2){
    return operation1(number1,number2);
}
//Zad.5
int modifier(int liczba){
    if (liczba < 0){
        return -liczba;
    }
    return liczba;
}
int modifyAndSum(int (*modifier)(int),int number1,int number2){
    return modifier(number1) + modifier(number2);
}
//Zad.8
int modifier1(){
    return 5;
}
int modifyValue(int arg,int (*modifier1)()){
    return arg + modifier1();
}




int main()
{
    int (*wsk_modifier1)= modifier1;
    printf("%d\n",modifyValue(3,modifier1));

//    int (*wsk_modifier)(int liczba) = modifier;
//    printf("%d\n",modifyAndSum(modifier,1,-5));

//    double (*wsk_operation1)(double arg1, double arg2) = operation1;
//    printf("%lf\n",calculateOperation(operation1,2.45,5.67));

//    int (*wsk_func)(int liczba) = func;
//    applyFunction(func,1,5);

//    int (*wsk_operation)(int number) = operation;
//    printf("%d\n",calculate(operation,3));
    return 0;
}
