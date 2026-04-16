#include <stdio.h>
#include <stdlib.h>


int countMatching(int tab[], int rozmiar, int (*predicate)(int)) {
    int licznik = 0;

    for (int i = 0; i < rozmiar; i++) {
        if (predicate(tab[i]) == 1) {
            licznik++;
        }
    }
    return licznik;
}
