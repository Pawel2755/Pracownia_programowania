#include <stdio.h>
#include <stdlib.h>


int maxIdx(int n, int tab[]) {
    int max_idx = 0;
    for (int i = 1; i < n; i++) {
        if (tab[i] > tab[max_idx]) {
            max_idx = i;
        }
    }
    return max_idx;
}
