#include <stdio.h>
#include <stdlib.h>


struct Car{
    char brand[20];
    int mileage;
};

struct Car initCar(char* brand, int mileage){
    struct Car newCar;
    strncpy(newCar.brand,brand,sizeof(newCar.brand)-1);
    newCar.brand[sizeof(newCar.brand)-1] = '\0';
    newCar.mileage = mileage;
    return newCar;
};
void showCar(struct Car opis){
    printf("Marka: %s Przebieg: %d",opis.brand,opis.mileage);
}

void mileageService(struct Car* opis){
    opis ->mileage +=10000;
}

int main()
{

    struct Car samochod = initCar("Toyota",123389);
    showCar(samochod);
    mileageService(&samochod);
    printf("\n");
    showCar(samochod);
    return 0;
}
