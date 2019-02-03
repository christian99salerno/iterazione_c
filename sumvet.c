#include <stdio.h>

int main () {

int i;
int numbers[10];
int somma = 0;
double media = 0;

printf("\n");

printf("Somma e Media\n");

printf("\n");

for(i=1; i<=10; i++) {

printf("? ");
scanf("%d", &numbers[i]);

somma+=numbers[i];

}

media=(double)somma/10.0;

printf("\n");

for(i=1; i<=10; i++) {

  printf("number[%d] = %d\n", i, numbers[i]);

}

printf("\n");

printf("Somma: %d\n", somma);
printf("Media: %f\n", media);

  return 0;

}
