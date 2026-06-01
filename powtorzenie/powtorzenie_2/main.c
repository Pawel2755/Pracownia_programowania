#include <stdio.h>
#include <stdlib.h>

int strDig(char * tab){
  int liczba =0;
  int dlugosc=0;
  for(int i=0;tab[i] != '\0';i++){
    if(tab[i]=='1'|| tab[i]=='2' ||tab[i]=='3'||tab[i]=='4'||tab[i]=='5'||tab[i]=='6'||tab[i]=='7'||tab[i]=='8'||tab[i]=='9'||tab[i]=='0'){
        dlugosc++;
    }
    dlugosc++;
  }
    return dlugosc;
}





int main()
{
    char tab[] = "12";
    printf("%d",strDig(tab));
    return 0;
}
