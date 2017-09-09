#include <stdio.h>

int main () {
 

int num = 0;

int max;

int i;

printf("Inserisci un numero ");
scanf("%d", &num);

max = num;

i=1;

while (i<10)
{
  
printf("Inserisci un numero ");
scanf("%d", &num);
  
if (num > max)
  max=num;

i++;
}

printf("Il massimo valore e' %d", max);
printf("\n");

  return 0;
}
