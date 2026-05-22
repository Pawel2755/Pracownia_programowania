#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element * next;

};





int main()
{




//    //lista z g³ow¹
//    struct element * lista2 = malloc(sizeof(struct element));
//    lista2 -> next = NULL;
//    //dodawanie na poczatek listy z glowa
//    struct element * wsk4 = malloc(sizeof(struct element));
//    wsk4 -> x = 43;
//    wsk4->next = lista2 -> next;
//    lista2->next = wsk4;


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
    struct element * temp = lista;
    while(temp != NULL){
        printf("%d ",temp ->x);
        temp = temp->next;
    }
    return 0;
}
