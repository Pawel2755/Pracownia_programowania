#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element * next;

};

void addFirst(struct element * lista,int a){
    if(lista == NULL){
        return;
    }
    struct element * wsk = malloc(sizeof(struct element));
    wsk -> x = a;
    wsk -> next = lista -> next;
    lista -> next = wsk;

}


int main()
{
    struct element * mojalista = malloc(sizeof(struct element));
    mojalista -> next = NULL;
    addFirst(mojalista,100);
    addFirst(mojalista,223);
    struct element * temp = mojalista->next ;
    while(temp != NULL){
        printf("%d ",temp ->x);
        temp = temp->next;
    }
    return 0;
}
