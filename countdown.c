#include <stdio.h>

int main ()
{

int num;

printf("Inserisci un numero da cui partire: ");
scanf("%d", &num);

if (num<=0){
  printf("Errore il numero deve essere positivo\n");
}

  else {
while(num!=-1)
{
  printf("Countdown: %d\n", num);
  num--;
}
 }
return 0;
 }
