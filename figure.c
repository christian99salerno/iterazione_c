#include <stdio.h>

int main ()
{

int carattere = '*';

int i;
int j;
int max_a = 1;
int max_b = 10;
int max_c = 10;
int max_d = 1;

printf("\n");

printf("a)\n");
for (i=0;i<10;i++){
  for(j=1;j<=max_a;j++){
      putchar(carattere);
    }
      printf("\n");
      max_a++;
  }

printf("\n");

printf("b)\n");
for (i=0;i<10;i++){
  for(j=max_b;j>=1;j--){
      putchar(carattere);
    }
      printf("\n");
      max_b--;
  }

printf("\n");

printf("c)\n");
for (i=0;i<10;i++){
  for(j=max_c;j>=1;j--){
      putchar(carattere);
    }
      printf("\n");
      max_c--;
  }

printf("\n");

printf("d)\n");
for (i=0;i<10;i++){
  for(j=1;j<=max_d;j++){
      putchar(carattere);
    }
      printf("\n");
      max_d++;
  }

printf("\n");

 return 0;
}
