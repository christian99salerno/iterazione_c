#include <stdio.h>

int main () {
 
int i=1;

while (i<=10)
{
  int j=1;
  while (j<=10){
    int tabellina=i*j;
    printf("%d x %d = ", j, i); 
    printf("%d\t", tabellina);
    j++;
  }
i++;
    printf("\n");
} 
  return 0;
}
