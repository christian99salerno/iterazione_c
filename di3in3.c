#include <stdio.h>

int main()
{

int num;
int cont=0;

printf("Numero di partenza: ");
scanf("%d", &num);

while(cont < 5){
  
  printf("%d\n", num);
  num=num+3;

cont ++;
}

  return 0;
}
