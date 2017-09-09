#include <stdio.h>

int main ()
{
  int num = 1;

  int i, j;

  do{

    printf("Inserisci il lato (min 1, max 20): ");
    scanf("%d", &num);

    if(num < 1 || num > 20)
      printf("Valore fuori dai limiti!\n");

  }

  while(num < 1 || num > 20);

  i = 0;
  while(i < num){
      printf("*");
        i++;
  }
      printf("\n");
i = 0;
   while(i < num-2){
    printf("*");
     j=1;
   while(j < num-1){
    printf(" ");
        j++;
    }
   printf("*");
   printf("\n");
   i++;
   }
i=0; 
  while(i < num){
      printf("*");
        i++;
  }
printf("\n");       
              return 0;
}

