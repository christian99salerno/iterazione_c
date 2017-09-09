#include <stdio.h>
#include <time.h>

int main ()
{

struct timespec intervallo;
intervallo.tv_sec = 1;
intervallo.tv_nsec = 0 * 1000 * 1000;

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
  nanosleep(&intervallo, NULL);
  num--;
}
 }
return 0;
 }
