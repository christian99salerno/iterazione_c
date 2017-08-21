#include <stdlib.h>
#include <stdio.h>

int main ()
{

int i;

int fattoriale=1;


for (i=1; i<6; i++){
  printf("%d!\t", i);
}

printf("\n");

for (i=1; i<6; i++){
  fattoriale *= i;

  printf("%d\t", fattoriale);

}

printf("\n");

return 0;
}
