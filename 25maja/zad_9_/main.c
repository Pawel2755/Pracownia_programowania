#include <stdio.h>
#include <stdlib.h>
struct element{
    int x;
    struct element * next;

};

void addFirst(struct element ** lista, int a){
    struct element * wsk = (struct element*)malloc(sizeof(struct element));
    wsk -> x = a;
    wsk -> next = *lista;
    *lista = wsk;
}
struct element * utworz(){
    return NULL;
};


int main()
{
    struct element *mojalista = NULL;
    addFirst(&mojalista,12);
    addFirst(&mojalista,5);
    struct element * temp = mojalista;
    while(temp != NULL){
        printf("%d ",temp ->x);
        temp = temp->next;
    }
    return 0;
}
