#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element * next;
};
void printListWthoutHead(struct element * lista){
    if(lista == NULL){
        printf("Lista jest pusta");
    }
    struct element * temp = lista;
    while(temp != NULL){
        printf("%d ",temp ->x);
        temp = temp->next;
    }
}


int main()
{

    struct element * lista = malloc(sizeof(struct element));
    lista -> next = NULL;
    //struct element * lista = NULL;
    struct element * wsk = malloc(sizeof(struct element));
    wsk -> x = 5;
    wsk ->next = NULL;
    lista = wsk;
    //dodanie elemntu na koniec
    struct element * wsk2 = malloc(sizeof(struct element));
    wsk2 -> x = -12;
    wsk2 -> next = NULL;
    wsk->next=wsk2;
    //dodanie elemntu na poczatek
    struct element *wsk3 = malloc(sizeof(struct element));
    wsk3 -> x = 4;
    wsk3 ->next = lista;
    lista =wsk3;
    printListWthoutHead(lista);

    return 0;
}
