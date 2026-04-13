#include <stdio.h>
#include <stdlib.h>



int minIdxMax(int n, int tab[]) {
    int min_idx = 0;
    for (int i = 1; i < n; i++) {
        if (tab[i] <= tab[min_idx]) {
            min_idx = i;
        }
    }
    return min_idx;
}
