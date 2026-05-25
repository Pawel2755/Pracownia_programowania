#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element * next;
};


struct element * createWithHead(){
    struct element * wsk = malloc(sizeof(struct element));
    wsk ->next = NULL;
    return wsk;

};

int main()
{
    struct element * lista = createWithHead();

    return 0;
}
