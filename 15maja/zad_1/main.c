#include <stdio.h>
#include <stdlib.h>

struct Car{
    char *brand;
    char model[20];
    int year;
    int isAvailable;


};




//struct Punkt2D{
//    float x;
//    float y;
//
//};


int main()
{
    struct Car car1 = {"Toyota","Avensis",2010,0};
    struct Car car2 = {"BMW","E46",2000,1};
    printf("%s %s %d %d\n",car1.brand,car1.model,car1.year,car1.isAvailable);
    printf("%s %s %d %d\n",car2.brand,car2.model,car2.year,car2.isAvailable);



//    struct Punkt2D *punkt = (struct Punkt2D *)malloc(sizeof(struct Punkt2D));
//    punkt -> x = 3.0f;
//    punkt -> y = 4.0f;
//
//    printf("%f %f",punkt->x,punkt->y);
    return 0;
}
