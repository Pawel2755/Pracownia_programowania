#include <stdio.h>
#include <stdlib.h>


struct Book {
    char title[50];
    int page_count;
};


struct Book initBook(char* title, int page_count){
    struct Book newBook;
    strncpy(newBook.title,title,sizeof(newBook.title)-1);
    newBook.title[sizeof(newBook.title)-1] = '\0';
    newBook.page_count = page_count;
    return newBook;
};

void showBook (struct Book opis){
    printf("Tytul: %s Liczba stron: %d",opis.title,opis.page_count);
}

void addPage(struct Book* opis){
    opis -> page_count += 10;
}

int main()
{
    struct Book ksiazka = initBook("Wlada Pierscieni",1223);
    showBook(ksiazka);
    addPage(&ksiazka);
    printf("\n");
    showBook(ksiazka);
    return 0;
}
