#include <stdio.h>

int main () {
 
int i=1;
int j=1;
int tabellina;

while (i<=10)
{
  while (j<=10){
    tabellina=i*j;
    printf("%d x %d = ", i, j); 
    printf("%d\t", tabellina);
    j++;
}
i++;
    printf("\n");
} 
  return 0;
}
