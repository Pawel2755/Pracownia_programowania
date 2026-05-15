#include <stdio.h>
#include <stdlib.h>


struct Rectangle{
    float width;
    float height;
    char* color;

};


int main()
{
    struct Rectangle tab[4] = {
        {10.6f,5.7f,"czerwony"},
        {6.7f,2.1f,"zielony"},
        {11.6f,7.1f,"niebieski"},
        {12.8f,4.7f,"fioletowy"}
    };
    printf("%s",tab[0].color);

    return 0;
}
