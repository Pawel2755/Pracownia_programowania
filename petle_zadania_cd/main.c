

#include <stdio.h>
#include <stdlib.h>

int main()
{

//    1.Napisz program, który wyœwietla wszystkie liczby ca³kowite od 1 do 100, u¿ywaj¹c pêtli for
//    for(int i = 1 ;i <= 100; i++){
//        printf("%d\n",i);
//    }


//    Zad.2

//    int n,a=1,b;
//    printf("Podaj liczbe calkowita: ");
//    scanf("%d",&n);
//    while(a<=n){
//        b+=a;
//        a++;
//    }
//    printf("%d",b);
//    3.Napisz program, który czyta od u¿ytkownika liczby ca³kowite do momentu
//    wprowadzenia zera i nastêpnie wyœwietla sumê wszystkich wprowadzonych liczb dodatnich
//    oraz sumê wszystkich liczb ujemnych (osobno), u¿ywaj¹c pêtli do-while.

//    int a,suma1,suma2;
//    do{
//        printf("Podaj liczbe: ");
//        scanf("%d",&a);
//        if(a>0){
//            suma1 +=a;
//        }else{
//            suma2 +=a;
//        }
//    }while(a!=0);
//
//    printf("Suma liczb dodatnich: %d\nSuma liczb ujemnych: %d",suma1, suma2);


//    4.Stwórz program, który oblicza i wyœwietla silniê podanej przez u¿ytkownika nieujemnej
//    liczby ca³kowitej, u¿ywaj¹c pêtli for.

//    int a,b=1;
//    printf("Podaj liczbe: ");
//    scanf("%d",&a);
//    for(int i=1;i<=a;i++){
//        b *= i;
//    }
//    printf("Silnia z liczby %d to: %d",a,b);

//    5.Napisz program, który wyœwietla pierwszych 10 liczb ci¹gu Fibonacciego, u¿ywaj¹c pêtli while.

//    int f1 = 0,f2 = 1,fx,b=0;
//    printf("10 pierwszych wyrazow ciagu to:\n");
//    while(b<=10){
//        printf("%d",f1);
//        printf("\n");
//        fx=f1+f2;
//        f1 = f2;
//        f2 = fx;
//        b++;
//    }

//    Zad.6

//    int n,wynik;
//    printf("Podaj liczbe: ");
//    scanf("%d",&n);
//    while(wynik*wynik<=n){
//        wynik++;
//    }
//    wynik--;
//    printf("%d",wynik);


//    zad.7

//    int n,wynik;
//    printf("Podaj liczbe: ");
//    scanf("%d",&n);
//    while(wynik*wynik<=n){
//        wynik++;
//    }
//    printf("%d",wynik);

//    Zad.8

//    int wynik;
//    int a[10];
//    printf("Podaj 10 liczb: ");
//    for(int i=0;i<10;i++){
//        scanf("%d",&a[i]);
//    }
//
//    for (int l=1;l<9;l++){
//        if(a[l]<((a[l-1]+a[l+1])/2)){
//           wynik++;
//           }
//    }
//
//    printf("%d",wynik);

//    Zad.9

//    int wynik,n;
//    printf("Podaj liczbe: ");
//    scanf("%d",&n);
//    int a[n];
//    printf("Podaj liczby do ciagu: \n");
//    for(int i=0;i<n;i++){
//        printf("a%d: ",i+1);
//        scanf("%d",&a[i]);
//    }
//
//    for(int k=1;k<n-1;k++){
//        if(a[k]<((a[k-1]+a[k+1])/2)){
//           wynik++;
//           }
//    }
//
//    printf("%d",wynik);

//    10.Napisz program, który sprawdza podzielnoœæ liczby n przez wszystkie liczby od 2 do n/2.
//    Program powinien wypisaæ wszystkie dzielniki tej liczby. Wczytaj wartoœæ n od u¿ytkownika.


//    int n;
//    printf("Podaj liczbe: ");
//    scanf("%d",&n);
//    printf("Dzielniki liczby: %d to: 1,%d,",n,n);
//    for(int i=2;i<=(n/2);i++){
//        if(n%i==0){
//            printf("%d,",i);
//        }
//    }


//    11.Napisz program, który wczytuje liczbê ca³kowit¹ n i wypisuje wszystkie jej cyfry od koñca
//    (od cyfry jednoœci) oraz oblicza ich sumê.

//    int n, suma=0,b;
//    printf("Podaj liczbe: ");
//    scanf("%d",&n);
//    while(n>0){
//        b = n%10;
//        printf("%d\n",b);
//        suma+=b;
//        n=n/10;
//    }
//    printf("%d",suma);

//    12.Napisz program realizuj¹cy algorytm Euklidesa w wersji iteracyjnej z odejmowaniem.
//    Program powinien wczytaæ dwie liczby naturalne a i b, a nastêpnie wypisaæ ich najwiêkszy wspólny dzielnik.


//    int a,b,reszta;
//    printf("Podaj dwie liczby: ");
//    scanf("%d %d",&a,&b);
//    while(a!=b){
//        if(a>b){
//            a=a-b;
//        }else{
//            b=b-a;
//        }
//    }
//    printf("%d",a);




//    13.Napisz program realizuj¹cy algorytm Euklidesa w wersji iteracyjnej z dzieleniem.
//    Program powinien wczytaæ dwie liczby naturalne a i b, a nastêpnie wypisaæ ich najwiêkszy wspólny dzielnik.

//    int a,b,reszta;
//    printf("Podaj dwie liczby: ");
//    scanf("%d %d",&a,&b);
//    while(b!=0){
//        reszta=a%b;
//        a=b;
//        b=reszta;
//    }
//    printf("%d",a);



//    14.Napisz program, który sprawdza, czy dana liczba n jest liczb¹ pierwsz¹.
//    Program powinien sprawdziæ wszystkie potencjalne dzielniki od 2 do pierwiastka z n
//    (wykorzystaj pêtlê do obliczenia pierwiastka). Wypisz odpowiedni komunikat.


//    int n;
//    printf("Podaj liczbe: ");
//    scanf("%d",&n);
//    for(int i=2;i*i<=n;i++){
//        if(n%i==0){
//            printf("Liczba %d nie jest liczba pierwsza",n);
//            break;
//        }else{
//            printf("Liczba %d jest liczba pierwsza",n);
//            break;
//        }
//    }

//    15.Napisz program symuluj¹cy wydawanie reszty. Program powinien wczytaæ kwotê do wydania i wypisaæ,
//    ile monet o nomina³ach 5, 2 i 1 nale¿y wydaæ, aby u¿yæ jak najmniejszej liczby monet.
//    Wypisz liczbê monet ka¿dego typu.

//    int a,mon5=0,mon2=0,mon1=0;
//    printf("Podaj kwote: ");
//    scanf("%d",&a);
//    while(a>0){
//        if (a>=5){
//            a = a-5;
//            mon5++;
//        }
//        else if(a >=2){
//            a = a-2;
//            mon2++;
//        }
//        else if(a >=1){
//            a = a-1;
//            mon1++;
//        }
//    }
//    printf("Nalezy wydac: %d monet 5zl, %d monet 2zl i %d monet 1zl",mon5,mon2,mon1);


//    16.


//    double a,x;
//    printf("Podaj liczbe: ");
//    scanf("%lf",&a);
//    x = a/2.0;
//    for(int i=1;i<10;i++){
//        x = (x+a/x)/2.0;
//    }
//    printf("%lf",x);




//    17.Napisz program, który wczytuje od u¿ytkownika stopieñ wielomianu, wspó³czynniki
//    (od najwy¿szej potêgi do wyrazu wolnego) oraz wartoœæ x. Oblicz wartoœæ wielomianu za pomoc¹ schematu Hornera,
//    wykorzystuj¹c pêtlê. Wyœwietl wynik obliczeñ.

//    int n,x;
//    printf("Podaj stopien wielomianu: ");
//    scanf("%d",&n);
//    int a[n+1];
//    printf("Podaj wspolczynniki: ");
//    for(int i=0;i<=n;i++){
//        scanf("%d",&a[i]);
//    }
//    printf("Podaj wartosc x: ");
//    scanf("%d",&x);
//    double wynik=a[0];
//    for(int i=1;i<=n;i++){
//        wynik = wynik*x+a[i];
//    }
//    printf("wynik to: %lf",wynik);



    return 0;
}
