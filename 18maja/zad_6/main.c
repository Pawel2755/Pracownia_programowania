#include <stdio.h>
#include <stdlib.h>

struct Person{
    char name[20];
    int age;
};
struct Person* initPerson(char* name,int age){
    struct Person* nowaososba = (struct Person *)malloc(sizeof(struct Person));
    strncpy(nowaososba -> name ,name, 19);
    nowaososba -> name[19] = '\0';
    nowaososba -> age = age;
    return nowaososba;
};
void showPerson(struct Person opis){
    printf("Imie: %s\nWiek: %d",opis.name,opis.age);
}
void birthday(struct Person* osoba){
    osoba->age += 1;
}

int main()
{
    struct Person* osoba1 = initPerson("Anna",45);
    showPerson(*osoba1) ;
    birthday(osoba1);
    printf("\n");
    showPerson(*osoba1);

    return 0;
}
