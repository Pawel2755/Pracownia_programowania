#include <stdio.h>
#include <stdlib.h>


struct Laptop{
    char model[30];
    float price;
};

struct Laptop initLaptop(char* model, float price){
    struct Laptop newLaptop;
    strncpy(newLaptop.model,model,sizeof(newLaptop.model)-1);
    newLaptop.model[sizeof(newLaptop.model)-1] = '\0';
    newLaptop.price = price;
    return newLaptop;
};

void showLaptop(struct Laptop opis){
    printf("Model: %s Cena: %.02f",opis.model,opis.price);
}
void reducePrice(struct Laptop* opis){
    opis -> price *= 0.95f;
}


int main()
{
    struct Laptop komputa = initLaptop("ASUS",2599.99f);
    showLaptop(komputa);
    reducePrice(&komputa);
    printf("\n");
    showLaptop(komputa);
    return 0;
}
