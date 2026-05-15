#include <stdio.h>
#include <stdlib.h>

struct Student{
    char* firstName;
    char* lastName;
    int id;
    float gpa;

};


int main()
{
    struct Student st1 = {"Adam","Kowalski",123456,7.1f};
    struct Student st2 = {"Bozena","Sawicka",794568,2.7f};
    struct Student st3 = {"Julian","Wedel",147258,5.3f};

    struct Student tab[3] = {st1,st2,st3};
    printf("%s",tab[0].firstName);



    return 0;
}
