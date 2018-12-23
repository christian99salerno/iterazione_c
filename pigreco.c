#include <stdio.h>

int main () {

int num = 0;
double pg = 0;
int i;
int m = 1;
double n = 1.0;

printf("\n");
printf("Approssimazione di Pi Greco mediante la serie:\n");
printf("\n");
printf("4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...\n");
printf("\n");
printf("Quanti termini vuoi utilizzare? ");
scanf("%d", &num);

for(i=0; i<num; i++)
{

  pg = pg + (4.0/n)*m;

  m *= -1;

  n+=2;


}

printf("\n");
printf("PI: %f\n", pg);
printf("\n");

  return 0;
}
