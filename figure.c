#include <stdio.h>

int main ()
{

int carattere = '*';

int i;
int j;
int max_a = 1;
int max_b = 10;

printf("a)\n");
for (i=0;i<10;i++){
  for(j=1;j<=max_a;j++){
      putchar(carattere);
    }
      printf("\n");
      max_a++;
  }


printf("b)\n");
for (i=0;i<10;i++){
  for(j=max_b;j>=1;j--){
      putchar(carattere);
    }
      printf("\n");
      max_b--;
  }



 return 0;
}
