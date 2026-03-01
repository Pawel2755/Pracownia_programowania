#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "");

//      Zad 7
//    Utwórz program, który wczytuje od u¿ytkownika liczbê zmiennoprzecinkow¹
//    reprezentuj¹c¹ kwotê w dolarach, a nastêpnie wypisuje, ile to jest euro, przyjmuj¹c sta³y
//    kurs wymiany (np. 1 dolar = 0.85 euro).
//
//    double liczba;
//    printf("Podaj kwote w dolarach: ");
//    scanf("%lf",&liczba);
//    printf("Kwota w euro to: %lf",liczba*0.85);


//        Zad 8
//        Napisz program, który wyœwietla na ekranie tekst:
//        To jest cytat: "Czêsto u¿ywam jêzyka C.". Upewnij siê, ¿e znaki
//        cudzys³owu s¹ poprawnie wyœwietlane jako czêœæ napisu.

//      printf("To jest cytat: \"Czêsto u¿ywam jêzyka C.\"");

//       Zad 9
//       Stwórz program, który wypisuje na standardowe wyjœcie
//       œcie¿kê do folderu w systemie Windows,
//       np. C:\Program Files\MojaAplikacja\
//       (na sztywno, bez pobierania czegoœ z systemu) lub
//       C:\\Program Files\\MojaAplikacja\\.
//         printf("C:\\Program Files\\MojaAplikacja\\");

//         Zad 10
//
//         Zaprojektuj program, który pokazuje,
//         ak wypisaæ na ekranie nastêpuj¹cy
//         tekst: Specjalne znaki: \t (tabulacja), \n (nowa linia),
//         % (procent), \\ (ukoœnik wsteczny)..
//         printf("Specjalne znaki: \\t (tabulacja), \\n (nowa linia),%% (procent), \\\\ (ukoœnik wsteczny).");


//           Zad 11
//
//           Napisz program, który wczytuje ze standardowego wejœcia dwie liczby
//           wymierne reprezentuj¹ce d³ugoœci boków trójk¹ta prostok¹tnego.
//           Nastêpnie oblicz i wyœwietl d³ugoœæ przeciwprostok¹tnej.

//             int liczba1;
//             int liczba2;
//             printf("Podaj liczbe 1: ");
//             scanf("%d",&liczba1);
//             printf("Podaj liczbe 2: ");
//             scanf("%d",&liczba2);
//             double przeciw=sqrt((liczba1*liczba1)+(liczba2*liczba2));
//             printf("Przeciw prostokatna wynosi: %lf",przeciw);

//             Zad 12

//               Napisz program, który wczytuje ze standardowego wejœcia
//               ca³kowit¹ i wypisuje na standardowym wyjœciu
//               jej wartoœæ bezwzglêdn¹.

//               int liczba;
//               printf("Podaj liczbe: ");
//               scanf("%d",&liczba);
//               int wynik = abs(liczba);
//               printf("Wartosc bezwgledna wynosi: %d",wynik);


//               Zad 13
//               Napisz program, który wczytuje ze standardowego wejœcia
//               zmiennoprzecinkow¹ i wypisuje na standardowym wyjœciu
//               jej wartoœæ bezwzglêdn¹.


//               double liczba;
//               printf("Podaj liczbe: ");
//               scanf("%lf",&liczba);
//               double wynik = fabs(liczba);
//               printf("Wynik: %lf",wynik);

//                 Zad 14
//                ZnajdŸ przyk³ad i wyœwietl na standardowym wyjœciu,
//                kiedy dodawanie liczb zmiennoprzecinowych nie jest ³¹czne.

                 double a = 1.0;
                 double b = 0.001;
                 double c = 1.0e16;
                 double wynik1 = (a+b)+c;
                 double wynik2 = a+(b+c);
                 printf("%lf, %lf",wynik1,wynik2);









    return 0;
}
