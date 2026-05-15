#include <stdio.h>
#include <stdlib.h>

struct Person{
    char name[20];
    int age;
};
struct Person* initPerson(char* name,int age){
    struct Person *nowaososba = (struct Person *)malloc(sizeof(struct Person));
    return nowaososba;
};
void showPerson(struct Person o){
    printf("Imie: %su\nWiek: %d",o.name,o.age);
}
void birthday(struct Person* osoba){
    osoba->age += 1;
}

int main()
{
    struct Person* osoba1 = initPerson("Anna",45);
    showPerson(*osoba1) ;

    return 0;
}
