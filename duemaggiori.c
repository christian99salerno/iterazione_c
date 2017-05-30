#include <stdio.h>

int main () {

int num = 0;

int max;
int max2;

int i;

printf("Inserisci un numero ");
scanf("%d", &num);

max = num;

printf("Inserisci un numero ");
scanf("%d", &num);

max2 = num;

if(max2 > max)
  max = max2;

i=1;

while (i<9)
{
  
printf("Inserisci un numero ");
scanf("%d", &num);
  
if (num > max){
  max2=max;
  max=num;
}
else if (num > max2 && max2 < max){
  max2=num;
}
i++;
}

printf("Il numero maggiore e' %d", max);
printf("\n");
printf("Il secondo numero maggiore e' %d", max2);
printf("\n");

  return 0;
}
