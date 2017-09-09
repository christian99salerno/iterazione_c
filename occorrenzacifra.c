#include <stdio.h>

int main () 
{

int num = 0;

int cont = 0;

do{

  printf("Inserisci un numero ");
  scanf("%d", &num);

  if ( num < 0 ){
    printf("Il numero deve essere positivo\n");
}
 }
 while(num<0);

while ( num != 0 ){
     if (num%10 == 7){
        cont ++;
     }
     num /= 10;
}
printf("Il 7 e' presente: %d", cont);
printf("\n");

    return 0;
    }

