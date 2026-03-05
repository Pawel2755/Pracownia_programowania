#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
//    1.Napisz program, który prosi u¿ytkownika o wprowadzenie liczby ca³kowitej.
//    Program powinien wyœwietliæ informacjê, czy wprowadzona liczba jest dodatnia, ujemna czy równa zero.

//    int a;
//    printf("Podaj liczbe: ");
//    scanf("%d",&a);
//    if(a>0){
//        printf("dodatnia");
//    }else if(a<0){
//        printf("ujemna");
//    }else{
//        printf("zero");
//    }

//    2.Napisz program, który przyjmuje od u¿ytkownika dwie liczby ca³kowite i wyœwietla wiêksz¹ z nich.

//    int a,b;
//    printf("Podaj 2 liczby: ");
//    scanf("%d %d",&a,&b);
//    if(a>b){
//        printf("%d",a);
//    }else if(b>a){
//        printf("%d",b);
//    }else {
//        printf("liczby sa rowne");
//    }


//    3.Napisz program, który prosi o wprowadzenie oceny w skali od 1 do 5.
//    Program powinien wyœwietliæ opis oceny: niedostateczny (1), dopuszczaj¹cy (2), dostateczny (3), dobry (4),
//    bardzo dobry (5). Dla liczby spoza zakresu, program powinien wyœwietliæ komunikat o b³êdzie.


//    int a;
//    printf("Podaj ocene w skali od 1 do 5: ");
//    scanf("%d",&a);
//    if(a==1){
//        printf("niedostateczny");
//    }else if(a==2){
//        printf("dopuszczajacy");
//    }else if(a==3){
//        printf("dostateczny");
//    }else if(a==4){
//        printf("dobry");
//    }else if(a==5){
//        printf("bardzo dobry");
//    }else{
//        printf("Blad!! Liczba poza skala");
//    }

//    4.Napisz program, który prosi u¿ytkownika o wprowadzenie trzech ró¿nych
//    liczb ca³kowitych i wyœwietla najmniejsz¹ z nich.


//    int a, b, c;
//    printf("Podaj 3 ro¿ne liczby: ");
//    scanf("%d %d %d",&a,&b,&c);
//    if(a<b && a<c){
//        printf("%d",a);
//    }else if(b<a && b<c){
//        printf("$d",b);
//    }else if(c<a &&c<b){
//        printf("%d",c);
//    }else if(a==b && a<c){
//        printf("%d i %d sa najmniejsze",a,b);
//    }else if(a==c && a<b){
//        printf("%d i %d sa najmniejsze",a,c);
//    }else if(b==c && c<a){
//        printf("%d i %d sa najmniejsze",b,c);
//    }else{
//        printf("Wszystkie liczby sa rowne");
//    }

//    5.Napisz program, który pyta u¿ytkownika o rok i sprawdza,
//    czy podany rok jest rokiem przestêpnym. Rok przestêpny to taki,
//    który jest podzielny przez 4, ale nie jest podzielny przez 100,
//    chyba ¿e jest te¿ podzielny przez 400.


//    int a;
//    printf("Podaj rok: ");
//    scanf("%d",&a);
//    if((a%4==0 && a%100!=0)||(a%400==0)){
//        printf("Przestepny");
//    }else{
//        printf("nie przestepny");
//    }

//    6.Napisz program, który przyjmuje od u¿ytkownika dwie liczby ca³kowite i wyœwietla informacjê,
//    czy suma obu liczb jest parzysta czy nieparzysta.


//    int a,b;
//    printf("Podaj 2 liczby: ");
//    scanf("%d %d",&a,&b);
//    int suma = a+b;
//    if(suma%2==0){
//        printf("Suma obu liczb jest parzysta");
//    }else{
//        printf("Suma obu liczb jest nieparzysta");
//    }

//    7.

//    double a,b,c;
//    printf("Podaj 3 liczby: ");
//    scanf("%lf %lf %lf",&a,&b,&c);
//    double delta = pow(b,2)-4*a*c;
//    double x1 = ((b*(-1.0))-delta)/(2.0*a);
//    double x2 = ((b*(-1.0))+delta/(2.0*a));
//    double x0 = -b/(2*a);
//    if(delta>0){
//        printf("X1 wynosi: %lf\nX2 wynosi: %lf",x1,x2);
//    }else if(delta == 0){
//        printf("X0 wynosi: %lf",x0);
//    }else{
//        printf("Brak rozwiazan");
//    }


//    8. Napisz program, który przyjmuje dwie liczby całkowite jako wejście od użytkownika i
//    używa operatora warunkowego, aby znaleźć i wyświetlić największą z nich.

//    int a,b;
//    printf("Podaj dwie liczby: ");
//    scanf("%d %d",&a,&b);
//    int najw = (a>b) ? a : b;
//    printf("%d",najw);


//    9.Napisz program, który przyjmuje trzy liczby całkowite jako wejście od użytkownika i
//    używa operatora warunkowego, aby znaleźć i wyświetlić najmniejszą z nich.

//    int a,b,c;
//    printf("Podaj trzy liczby: ");
//    scanf("%d %d %d",&a,&b,&c);
//    int najm1 = (a>b) ? a : b;
//    int najm2 = (najm1>c) ? najm1 : c;
//    printf("%d",najm2);

//    10.Używając operatora warunkowego ? napisz program,
//    który przyjmuje od użytkownika jedną liczbę całkowitą i wyświetla
//    “parzysta” lub “nieparzysta” w zależności od wartości liczby.

//    int a;
//    printf("Podaj liczbe: ");
//    scanf("%d",&a);
//    printf("%s",(a%2==0) ? "parzysta" : "nieparzysta");

//    11.Stwórz program, który prosi o wprowadzenie dwóch liczb zmiennoprzecinkowych i
//    używa operatora warunkowego, aby wyświetlić, która z nich jest większa,
//    lub czy są równe z dokładnością do dwóch miejsc po przecinku.

//    double a,b;
//    printf("Podaj 2 liczby: ");
//    scanf("%lf %lf",&a,&b);
//    (a==b) ? printf("Liczby sa rowne") : (a>b ? printf("%.2lf",a) : printf("%.2lf",b));

//    12.Używając operatora warunkowego, napisz program, który prosi użytkownika o
//    wprowadzenie oceny w skali od 0 do 100 i wyświetla “Zdane”, jeśli ocena jest większa lub
//    równa 51, lub “Nie zdane” w przeciwnym przypadku.

//    int a;
//    printf("Podaj ocene w skali od 0 do 100: ");
//    scanf("%d",&a);
//    (a>=51) ? printf("Zdane") : printf("Nie zdane");

//    13.Napisz program, który przyjmuje rok jako wejście od użytkownika i za pomocą
//    operatora warunkowego sprawdza, czy jest to rok przestępny. Program powinien wyświetlać
//    “Rok przestępny” lub “Rok nieprzestępny” w zależności od wyniku.

    int a;

    printf("Podaj rok: ");
    scanf("%d",&a);
    ((a%4==0 && a%100!=0)||(a%400==0)) ? printf("Rok przestepny") : printf("Rok nieprzestepny");


    return 0;
}
