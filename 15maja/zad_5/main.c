#include <stdio.h>
#include <stdlib.h>


struct Book{
    char* title;
    char* author;
    int publishedYear;
    int pages;

};


int main()
{
    struct Book tab[5] = {
        {"Abrakadabra","Adam",1967,450},
        {"Raz Dwa Trzy","Karol",2012,234},
        {"1984","Orwell",1949,328},
        {"Wiedzmin","Sapkowski",1990,300},
        {"Wladca Pierscieni","Tolkien",1954,1178}
    };

    for(int i=0;i<5;i++){
        printf("%s\n",tab[i].title);
    }
    return 0;
}
