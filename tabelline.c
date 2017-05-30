#include <stdio.h>

int main () {
 
int i=1;
int j=1;
int tabellina;

    printf("\n");

while (i<=10)
{
  j=1;
  while (j<=10){
    tabellina=i*j;
    printf("%dx%d=", i, j); 
    printf("%d\t", tabellina);
    j++;
}
    printf("\n");
    printf("\n");
i++;
} 
  return 0;
}
